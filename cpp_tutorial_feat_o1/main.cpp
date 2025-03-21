#include <iostream>
#include <iomanip>
#include <vector>
#include <conio.h> // Windows

using namespace std;

// ANSI Escape Codes (สำหรับสี)
#define RESET "\033[0m"
#define CYAN "\033[36m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define WHITE "\033[97m"

// 🖥️ คลาสที่ใช้เก็บข้อมูลแต่ละหน้าเว็บ
class Page
{
public:
    string title;

public:
    string getTitle() const
    {
        return title;
    }
    vector<pair<string, string>> content; // ใช้ pair<> เก็บหัวข้อ-เนื้อหา
public:
    Page(string _title) : title(_title) {}

    void addContent(string header, string body)
    {
        content.push_back({header, body});
    }

    void showPage() const
    {
        cout << CYAN << setfill('=') << setw(50) << "=" << RESET << endl;
        cout << CYAN << "| " << title << setw(50 - title.length() - 3) << "|" << RESET << endl;
        cout << CYAN << setfill('=') << setw(50) << "=" << RESET << endl;

        for (const auto &row : content)
        {
            cout << YELLOW << left << setw(10) << row.first << RESET << ": " << row.second << endl;
        }

        cout << BLUE << setfill('-') << setw(50) << "-" << RESET << endl;
    }
};

// 🌐 คลาส Website เก็บข้อมูลของเว็บไซต์ (URL + หลายๆ Page)
class Website
{
private:
    string name, url;
    vector<Page> pages;

public:
    Website(string _name, string _url) : name(_name), url(_url) {}

    void addPage(const Page &page)
    {
        pages.push_back(page);
    }

    void showWebsiteInfo() const
    {
        cout << BLUE << "| " << WHITE << "[ 🔍 ] " << url << BLUE << "                    |" << RESET << endl;
        cout << BLUE << setfill('-') << setw(50) << "-" << RESET << endl;
    }

    void browsePages() const
    {
        for (size_t i = 0; i < pages.size(); i++)
        {
            cout << YELLOW << "[" << i + 1 << "] " << pages[i].title << RESET << endl;
        }
    }

    const Page &getPage(int index) const
    {
        return pages[index];
    }

    int totalPages() const
    {
        return pages.size();
    }
};

// 🏛️ Browser จำลอง Chrome และให้ผู้ใช้เลือกเว็บ
class Browser
{
private:
    vector<Website> websites;

public:
    void addWebsite(const Website &site)
    {
        websites.push_back(site);
    }

    // #include <termios.h>  // ใช้ termios แทน getch() ถ้าใช้ Linux/macOS

    void run()
    {
        int choice = 0; // เก็บ index ของเว็บที่เลือก
        while (true)
        {
            system("cls"); // Windows (ใช้ "clear" ถ้าเป็น macOS/Linux)
            cout << CYAN << "==== Console Web Browser ====" << RESET << endl;
            cout << "Select Website:\n";

            for (size_t i = 0; i < websites.size(); i++)
            {
                if (i == choice)
                    cout << YELLOW << "👉 [" << i + 1 << "] " << websites[i].getPage(0).title << RESET << endl;
                else
                    cout << "   [" << i + 1 << "] " << websites[i].getPage(0).title << endl;
            }
            cout << "[0] Close Browser" << endl;

            char key = _getch(); // อ่านค่าปุ่มจากผู้ใช้ (Windows)
            // char key = getchar(); // ถ้าใช้ Linux/macOS

            if (key == 13)
            { // Enter -> เลือกเว็บ
                if (choice == 0)
                    break;
                visitWebsite(websites[choice - 1]);
            }
            else if (key == 72 && choice > 0)
            { // ลูกศรขึ้น (↑)
                choice--;
            }
            else if (key == 80 && choice < (int)websites.size())
            { // ลูกศรลง (↓)
                choice++;
            }
        }
    }

    void visitWebsite(const Website &site)
    {
        int pageIndex = 0;
        while (true)
        {
            // system("clear"); // ล้างหน้าจอ
            site.showWebsiteInfo();
            site.getPage(pageIndex).showPage();

            cout << WHITE << "[N] next page  [P] previous page  [B] back" << RESET << endl;
            cout << "เลือกคำสั่ง: ";
            char cmd;
            cin >> cmd;

            if (cmd == 'B' || cmd == 'b')
                break;
            else if ((cmd == 'N' || cmd == 'n') && pageIndex < site.totalPages() - 1)
                pageIndex++;
            else if ((cmd == 'P' || cmd == 'p') && pageIndex > 0)
                pageIndex--;
        }
    }
};

// 🎯 โปรแกรมหลัก
int main()
{
    // 🔹 สร้างเว็บไซต์ตัวอย่าง
    Website google("Google", "https://www.google.com");

    Page home("Google Home");
    home.addContent("Header", "Google");
    home.addContent("Nav", "[ Home ]  [ Search ]  [ Images ]");
    home.addContent("Main", "Welcome to Google - Search anything!");
    home.addContent("Footer", "© 2025 Google Inc.");

    Page search("Google Search");
    search.addContent("Header", "Google Search");
    search.addContent("Search", "You searched for: Console Web");
    search.addContent("Result", "[1] Console Web Browser\n[2] Learn C++ OOP");

    google.addPage(home);
    google.addPage(search);

    // 🏛️ สร้าง Browser และเพิ่มเว็บไซต์
    Browser browser;
    browser.addWebsite(google);

    // 🔥 เริ่มการทำงาน
    browser.run();

    return 0;
}
