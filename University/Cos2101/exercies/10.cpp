#include <iostream>
#include <string>
#include <boost/asio.hpp>

using namespace std;
using namespace boost::asio;
using namespace boost::asio::ip;

class HttpServer
{
public:
    HttpServer(io_service &ios, short port)
        : acceptor_(ios, tcp::endpoint(tcp::v4(), port)),
          socket_(ios)
    {
        do_accept();
    }

private:
    void do_accept()
    {
        acceptor_.async_accept(socket_,
                               [this](boost::system::error_code ec)
                               {
                                   if (!ec)
                                   {
                                       cout << "Connection accepted" << endl;
                                       // Handle request here
                                   }
                                   do_accept();
                               });
    }

    tcp::acceptor acceptor_;
    tcp::socket socket_;
};

int main()
{
    try
    {
        io_service ios;
        HttpServer server(ios, 8080);
        ios.run();
    }
    catch (exception &e)
    {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}
