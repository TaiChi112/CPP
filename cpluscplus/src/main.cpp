#include <iostream>
#include <vector>
using namespace std;

// Print static (stack) primitive types
void print_static_primitives()
{
    int i = 1;
    float f = 1.0f;
    char c = 'a';
    cout << "int: " << sizeof(i) << " bytes, value: " << i << endl;
    cout << "float: " << sizeof(f) << " bytes, value: " << f << endl;
    cout << "char: " << sizeof(c) << " bytes, value: " << c << endl;
}

// Print dynamic (heap) primitive types
void print_dynamic_primitives()
{
    int *i = new int(1);
    float *f = new float(1.0f);
    char *c = new char('a');
    cout << "int*: " << sizeof(i) << " bytes, value: " << *i << endl;
    cout << "float*: " << sizeof(f) << " bytes, value: " << *f << endl;
    cout << "char*: " << sizeof(c) << " bytes, value: " << *c << endl;
    delete i;
    delete f;
    delete c;
}

// Print primitives using std::vector (single element)
void print_vector_primitives()
{
    vector<int> vi{1};
    vector<float> vf{1.0f};
    vector<char> vc{'a'};
    cout << "vector<int>: " << sizeof(int) * vi.size() << " bytes, value: " << vi[0] << endl;
    cout << "vector<float>: " << sizeof(float) * vf.size() << " bytes, value: " << vf[0] << endl;
    cout << "vector<char>: " << sizeof(char) * vc.size() << " bytes, value: " << vc[0] << endl;
}

// Print static arrays of primitives
void print_static_primitive_arrays()
{
    int ai[5] = {1, 2, 3, 4, 5};
    float af[5] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    char ac[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << "int[5]: " << sizeof(ai) << " bytes, values: ";
    for (int v : ai)
        cout << v << " ";
    cout << endl;
    cout << "float[5]: " << sizeof(af) << " bytes, values: ";
    for (float v : af)
        cout << v << " ";
    cout << endl;
    cout << "char[5]: " << sizeof(ac) << " bytes, values: ";
    for (char v : ac)
        cout << v << " ";
    cout << endl;
}

// Print dynamic arrays of primitives
void print_dynamic_primitive_arrays()
{
    int *ai = new int[5]{1, 2, 3, 4, 5};
    float *af = new float[5]{1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    char *ac = new char[5]{'a', 'b', 'c', 'd', 'e'};
    cout << "int* (5 elements): " << sizeof(int) * 5 << " bytes, values: ";
    for (int j = 0; j < 5; ++j)
        cout << ai[j] << " ";
    cout << endl;
    cout << "float* (5 elements): " << sizeof(float) * 5 << " bytes, values: ";
    for (int j = 0; j < 5; ++j)
        cout << af[j] << " ";
    cout << endl;
    cout << "char* (5 elements): " << sizeof(char) * 5 << " bytes, values: ";
    for (int j = 0; j < 5; ++j)
        cout << ac[j] << " ";
    cout << endl;
    delete[] ai;
    delete[] af;
    delete[] ac;
}

// Print arrays of primitives using std::vector
void print_vector_primitive_arrays()
{
    vector<int> vi{1, 2, 3, 4, 5};
    vector<float> vf{1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    vector<char> vc{'a', 'b', 'c', 'd', 'e'};
    cout << "vector<int>: " << sizeof(int) * vi.size() << " bytes, values: ";
    for (int v : vi)
        cout << v << " ";
    cout << endl;
    cout << "vector<float>: " << sizeof(float) * vf.size() << " bytes, values: ";
    for (float v : vf)
        cout << v << " ";
    cout << endl;
    cout << "vector<char>: " << sizeof(char) * vc.size() << " bytes, values: ";
    for (char v : vc)
        cout << v << " ";
    cout << endl;
}

struct Node
{
    int id;
    string data;
};

// Print static array of structs
void print_static_struct_array()
{
    Node nodes[5] = {
        {1, "data1"}, {2, "data2"}, {3, "data3"}, {4, "data4"}, {5, "data5"}};
    cout << "Node[5]: " << sizeof(nodes) << " bytes, values: ";
    for (const auto &node : nodes)
        cout << "{" << node.id << ", " << node.data << "} ";
    cout << endl;
}

// Print dynamic array of structs
void print_dynamic_struct_array()
{
    Node *nodes = new Node[5]{
        {1, "data1"}, {2, "data2"}, {3, "data3"}, {4, "data4"}, {5, "data5"}};
    cout << "Node* (5 elements): " << sizeof(Node) * 5 << " bytes, values: ";
    for (int j = 0; j < 5; ++j)
        cout << "{" << nodes[j].id << ", " << nodes[j].data << "} ";
    cout << endl;
    delete[] nodes;
}

// Print vector of structs
void print_vector_struct_array()
{
    vector<Node> nodes = {
        {1, "data1"}, {2, "data2"}, {3, "data3"}, {4, "data4"}, {5, "data5"}};
    cout << "vector<Node>: " << sizeof(Node) * nodes.size() << " bytes, values: ";
    for (const auto &node : nodes)
        cout << "{" << node.id << ", " << node.data << "} ";
    cout << endl;
}

int main()
{
    print_static_primitives();
    cout << endl;
    print_dynamic_primitives();
    cout << endl;
    print_vector_primitives();
    cout << endl;
    print_static_primitive_arrays();
    cout << endl;
    print_dynamic_primitive_arrays();
    cout << endl;
    print_vector_primitive_arrays();
    cout << endl;
    print_static_struct_array();
    print_dynamic_struct_array();
    print_vector_struct_array();
    return 0;
}