#include <iostream>
#include <vector>

using namespace std;

struct Data
{
    int data;
};

void displayMenu()
{
    cout << "\n=== CRUD Operations Menu ===" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Create (Add Item)" << endl;
    cout << "2. Read (View All Items)" << endl;
    cout << "3. Update (Edit Item)" << endl;
    cout << "4. Delete (Remove Item)" << endl;
    cout << "Enter your choice: ";
}
void createItem(vector<Data> &data)
{
    Data item;
    cout << "Enter data: ";
    cin >> item.data;
    data.push_back(item);
    cout << "Item added successfully." << endl;
}
void readItems(const vector<Data> &data)
{
    if (data.empty())
    {
        cout << "No items to display." << endl;
        return;
    }
    cout << "Items: ";
    for (size_t i = 0; i < data.size(); i++)
    {
        cout << data[i].data << " ";
    }
}
void updateItem(vector<Data> &data)
{
    if (data.empty())
    {
        cout << "No items to update." << endl;
        return;
    }
    int index;
    cout << "Enter item index to update: ";
    cin >> index;
    if (index < 1 || index > data.size())
    {
        cout << "Invalid index." << endl;
        return;
    }
    Data &item = data[index - 1];
    cout << "Enter new data (current: " << item.data << "): ";
    cin >> item.data;
}
void deleteItem(vector<Data> &data)
{
    if (data.empty())
    {
        cout << "No items to delete." << endl;
        return;
    }
    int index;
    cout << "Enter item index to delete: ";
    cin >> index;
    if (index < 1 || index > data.size())
    {
        cout << "Invalid index." << endl;
        return;
    }
    data.erase(data.begin() + index - 1);
    cout << "Item deleted successfully." << endl;
}
int main()
{
    vector<Data> data;
    int choice;
    while (true)
    {
        displayMenu();
        cout << "Enter your choice: (0 to exit) ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            createItem(data);
            break;
        case 2:
            readItems(data);
            break;
        case 3:
            updateItem(data);
            break;
        case 4:
            deleteItem(data);
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}