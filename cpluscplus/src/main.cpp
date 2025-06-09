#include <iostream>
#include <vector>
using namespace std;

void print_static_primitive_type()
{
    int i = 1;
    float f = 1.0;
    char c = 'a';
    cout << "int: " << sizeof(int) << " bytes" << " value: " << i << endl;
    cout << "float: " << sizeof(float) << " bytes" << " value: " << f << endl;
    cout << "char: " << sizeof(char) << " bytes" << " value: " << c << endl;
}
void print_dynamic_primitive_type()
{
    int *i = new int(1);
    float *f = new float(1.0);
    char *c = new char('a');
    cout << "int: " << sizeof(int *) << " bytes" << " value: " << *i << endl;
    cout << "float: " << sizeof(float *) << " bytes" << " value: " << *f << endl;
    cout << "char: " << sizeof(char *) << " bytes" << " value: " << *c << endl;
    delete i;
    delete f;
    delete c;
}
void print_dynamic_primitive_type_with_vector()
{
    vector<int> i = {1};
    vector<float> f = {1.0};
    vector<char> c = {'a'};
    cout << "int: " << sizeof(int) * i.size() << " bytes" << " value: " << i[0] << endl;
    cout << "float: " << sizeof(float) * f.size() << " bytes" << " value: " << f[0] << endl;
    cout << "char: " << sizeof(char) * c.size() << " bytes" << " value: " << c[0] << endl;
}
void print_static_array_primitive_type()
{
    int i[5] = {1, 2, 3, 4, 5};
    float f[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    char c[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << "int array: " << sizeof(i) << " bytes" << " values: ";
    for (int j = 0; j < 5; ++j) {
        cout << i[j] << " ";
    }
    cout << endl;
    cout << "float array: " << sizeof(f) << " bytes" << " values: ";
    for (int j = 0; j < 5; ++j) {
        cout << f[j] << " ";
    }
    cout << endl;
    cout << "char array: " << sizeof(c) << " bytes" << " values: ";
    for (int j = 0; j < 5; ++j) {
        cout << c[j] << " ";
    }
}
void print_dynamic_array_primitive_type()
{
    int *i = new int[5]{1, 2, 3, 4, 5};
    float *f = new float[5]{1.0, 2.0, 3.0, 4.0, 5.0};
    char *c = new char[5]{'a', 'b', 'c', 'd', 'e'};
    cout << "int array: " << sizeof(int *) * 5 << " bytes" << " values: ";
    for (int j = 0; j < 5; ++j) {
        cout << i[j] << " ";
    }
    cout << endl;
    cout << "float array: " << sizeof(float *) * 5 << " bytes" << " values: ";
    for (int j = 0; j < 5; ++j) {
        cout << f[j] << " ";
    }
    cout << endl;
    cout << "char array: " << sizeof(char *) * 5 << " bytes" << " values: ";
    for (int j = 0; j < 5; ++j) {
        cout << c[j] << " ";
    }
    delete[] i;
    delete[] f;
    delete[] c;
}
void print_dynamic_array_with_vector(){
    vector<int> i = {1, 2, 3, 4, 5};
    vector<float> f = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<char> c = {'a', 'b', 'c', 'd', 'e'};
    cout << "int vector: " << sizeof(int) * i.size() << " bytes" << " values: ";
    for (const auto &val : i) {
        cout << val << " ";
    }
    cout << endl;
    cout << "float vector: " << sizeof(float) * f.size() << " bytes" << " values: ";
    for (const auto &val : f) {
        cout << val << " ";
    }
    cout << endl;
    cout << "char vector: " << sizeof(char) * c.size() << " bytes" << " values: ";
    for (const auto &val : c) {
        cout << val << " ";
    }
}

struct Node
{
    int id;
    string data;
};
void print_static_array_struct_type()
{
    Node nodes[5] = {
        {1, "data1"},
        {2, "data2"},
        {3, "data3"},
        {4, "data4"},
        {5, "data5"}
    };
    cout << "Node array: " << sizeof(nodes) << " bytes" << " values: ";
    for (const auto &node : nodes) {
        cout << "{" << node.id << ", " << node.data << "} ";
    }
    cout << endl;
}
void print_dynamic_array_struct_type()
{
    Node *nodes = new Node[5]{
        {1, "data1"},
        {2, "data2"},
        {3, "data3"},
        {4, "data4"},
        {5, "data5"}
    };
    cout << "Node array: " << sizeof(Node *) * 5 << " bytes" << " values: ";
    for (int j = 0; j < 5; ++j) {
        cout << "{" << nodes[j].id << ", " << nodes[j].data << "} ";
    }
    cout << endl;
    delete[] nodes;
}
void print_dynamic_array_struct_with_vector()
{
    vector<Node> nodes = {
        {1, "data1"},
        {2, "data2"},
        {3, "data3"},
        {4, "data4"},
        {5, "data5"}
    };
    cout << "Node vector: " << sizeof(Node) * nodes.size() << " bytes" << " values: ";
    for (const auto &node : nodes) {
        cout << "{" << node.id << ", " << node.data << "} ";
    }
    cout << endl;
}
int main()
{
    print_static_primitive_type();
    cout << endl;
    print_dynamic_primitive_type();
    cout << endl;
    print_dynamic_primitive_type_with_vector();
    cout << endl;
    print_static_array_primitive_type();
    cout << endl;
    cout << endl;
    print_dynamic_array_primitive_type();
    cout << endl;
    cout << endl;
    print_dynamic_array_with_vector();
    cout << endl;
    cout << endl;
    return 0;
}