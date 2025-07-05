```cpp
struct Student {
    int id;
    string name;
    Student(int id, string name) : id(id), name(name) {}
};
int main(){
    int ix = 112;
    int ix[2] = {112,112};
    int ix[2][2] = {{112, 112}, {113, 113}};

    int *x;
    int *ix[2];
    int *ix[2][2];

    int *ix = new int;
    int *ix[2] = {new int, new int};
    int *ix[2][2] = {{new int, new int}, {new int, new int}};
    delete ix;
    delete[] ix[2];
    delete[] ix[2][2];

    Student s1(112, "Alice");
    Student s2[2] = {Student(112, "Alice"), Student(113, "Bob")};
    Student s3[2][2] = {{Student(112, "Alice"), Student(113, "Bob")},
                        {Student(114, "Charlie"), Student(115, "David")}};
    Student *s4;
    Student *s5[2];
    Student *s6[2][2];

    Student *s7 = new Student(112, "Alice");
    Student *s8[2] = {new Student(112, "Alice"), new Student(113, "Bob")};
    Student *s9[2][2] = {{new Student(112, "Alice"), new Student(113, "Bob")},
                         {new Student(114, "Charlie"), new Student(115, "David")}};
    delete s7;
    for (int i = 0; i < 2; ++i) {
        delete s8[i];
    }
    for (int i = 0; i < 2; ++i) {
        delete[] s9[i];
    }
    return 0;
}