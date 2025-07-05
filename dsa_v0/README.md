# C++ Data Structures and Arrays Demo

## Improved Version

```cpp
#include <iostream>
#include <string>
#include <memory>
#include <array>
#include <vector>

using namespace std;

struct Student {
    int id;
    string name;
    
    Student(int id, const string& name) : id(id), name(name) {}
    
    // Copy constructor and assignment operator for proper object management
    Student(const Student& other) = default;
    Student& operator=(const Student& other) = default;
};

int main() {
    // ============== INTEGER EXAMPLES ==============
    
    // Stack-allocated integers
    int single_int = 112;
    int int_array[2] = {112, 113};
    int int_2d_array[2][2] = {{112, 113}, {114, 115}};
    
    // Pointer declarations (uninitialized)
    int* int_ptr = nullptr;
    int* int_ptr_array[2] = {nullptr, nullptr};
    int* int_ptr_2d_array[2][2] = {{nullptr, nullptr}, {nullptr, nullptr}};
    
    // Dynamic allocation (heap)
    int* dynamic_int = new int(112);
    int* dynamic_int_array[2] = {new int(112), new int(113)};
    int* dynamic_int_2d_array[2][2] = {
        {new int(112), new int(113)},
        {new int(114), new int(115)}
    };
    
    // Proper cleanup for dynamic integers
    delete dynamic_int;
    delete dynamic_int_array[0];
    delete dynamic_int_array[1];
    for (int i = 0; i < 2; ++i) {
        delete dynamic_int_2d_array[i][0];
        delete dynamic_int_2d_array[i][1];
    }
    
    // ============== STUDENT EXAMPLES ==============
    
    // Stack-allocated Student objects
    Student student1(112, "Alice");
    Student student_array[2] = {
        Student(112, "Alice"), 
        Student(113, "Bob")
    };
    Student student_2d_array[2][2] = {
        {Student(112, "Alice"), Student(113, "Bob")},
        {Student(114, "Charlie"), Student(115, "David")}
    };
    
    // Pointer declarations (uninitialized)
    Student* student_ptr = nullptr;
    Student* student_ptr_array[2] = {nullptr, nullptr};
    Student* student_ptr_2d_array[2][2] = {{nullptr, nullptr}, {nullptr, nullptr}};
    
    // Dynamic allocation (heap)
    Student* dynamic_student = new Student(112, "Alice");
    Student* dynamic_student_array[2] = {
        new Student(112, "Alice"), 
        new Student(113, "Bob")
    };
    Student* dynamic_student_2d_array[2][2] = {
        {new Student(112, "Alice"), new Student(113, "Bob")},
        {new Student(114, "Charlie"), new Student(115, "David")}
    };
    
    // Proper cleanup for dynamic Student objects
    delete dynamic_student;
    for (int i = 0; i < 2; ++i) {
        delete dynamic_student_array[i];
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            delete dynamic_student_2d_array[i][j];
        }
    }
    
    return 0;
}
```

## Modern C++ Alternative (Recommended)

```cpp
#include <iostream>
#include <string>
#include <memory>
#include <array>
#include <vector>

using namespace std;

struct Student {
    int id;
    string name;
    
    Student(int id, const string& name) : id(id), name(name) {}
    
    void display() const {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    // ============== MODERN C++ APPROACH ==============
    
    // Use std::array for fixed-size arrays
    array<int, 2> modern_int_array = {112, 113};
    array<array<int, 2>, 2> modern_int_2d = {{{112, 113}, {114, 115}}};
    
    // Use std::vector for dynamic arrays
    vector<int> dynamic_int_vector = {112, 113, 114};
    vector<vector<int>> dynamic_int_2d_vector = {{112, 113}, {114, 115}};
    
    // Use smart pointers for automatic memory management
    unique_ptr<Student> smart_student = make_unique<Student>(112, "Alice");
    
    // Vector of Student objects (automatic cleanup)
    vector<Student> student_vector = {
        Student(112, "Alice"),
        Student(113, "Bob"),
        Student(114, "Charlie")
    };
    
    // Vector of smart pointers for polymorphic scenarios
    vector<unique_ptr<Student>> smart_student_vector;
    smart_student_vector.push_back(make_unique<Student>(112, "Alice"));
    smart_student_vector.push_back(make_unique<Student>(113, "Bob"));
    
    // Display students
    cout << "Students in vector:" << endl;
    for (const auto& student : student_vector) {
        student.display();
    }
    
    cout << "\nStudents in smart pointer vector:" << endl;
    for (const auto& student_ptr : smart_student_vector) {
        student_ptr->display();
    }
    
    // No manual cleanup needed - automatic destructors handle everything!
    
    return 0;
}