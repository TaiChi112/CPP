#include <iostream>

using namespace std;

struct Student
{
    string id;
    string name;
    int score;
};

int main()
{
    Student student1;
    student1.id = "001";
    student1.name = "John";
    student1.score = 90;
    cout << student1.id << " " << student1.name << " " << student1.score << endl;

    Student student2[2];
    student2[0].id = "002";
    student2[0].name = "Jane";
    student2[0].score = 80;
    student2[1].id = "003";
    student2[1].name = "Mary";
    student2[1].score = 70;

    cout << student2[0].id << " " << student2[0].name << " " << student2[0].score << endl;
    cout << student2[1].id << " " << student2[1].name << " " << student2[1].score << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << student2[i].id << " " << student2[i].name << " " << student2[i].score << endl;
    }

    Student student3[2];
    student3[0] = {"004", "Mark", 60};
    student3[1] = {"005", "Lisa", 50};
    for (int i = 0; i < 2; i++)
    {
        cout << student3[i].id << " " << student3[i].name << " " << student3[i].score << endl;
    }
    return 0;
}