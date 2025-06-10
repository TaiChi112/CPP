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

// Print static 2D arrays of primitives
void print_static_primitive_2d_arrays()
{
    int ai[2][3] = {{1, 2, 3}, {4, 5, 6}};
    float af[2][3] = {{1.0f, 2.0f, 3.0f}, {4.0f, 5.0f, 6.0f}};
    char ac[2][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};
    cout << "int[2][3]: " << sizeof(ai) << " bytes, values: ";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j)
            cout << ai[i][j] << " ";
    cout << endl;
    cout << "float[2][3]: " << sizeof(af) << " bytes, values: ";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j)
            cout << af[i][j] << " ";
    cout << endl;
    cout << "char[2][3]: " << sizeof(ac) << " bytes, values: ";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j)
            cout << ac[i][j] << " ";
    cout << endl;
}

// Print dynamic 2D arrays of primitives
void print_dynamic_primitive_2d_arrays()
{
    int **ai = new int *[2];
    float **af = new float *[2];
    char **ac = new char *[2];
    for (int i = 0; i < 2; ++i)
    {
        ai[i] = new int[3]{1 + i * 3, 2 + i * 3, 3 + i * 3};
        af[i] = new float[3]{1.0f + i * 3, 2.0f + i * 3, 3.0f + i * 3};
        ac[i] = new char[3]{static_cast<char>('a' + i * 3), static_cast<char>('b' + i * 3), static_cast<char>('c' + i * 3)};
    }
    cout << "int** (2x3): " << sizeof(int) * 2 * 3 << " bytes, values: ";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j)
            cout << ai[i][j] << " ";
    cout << endl;
    cout << "float** (2x3): " << sizeof(float) * 2 * 3 << " bytes, values: ";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j)
            cout << af[i][j] << " ";
    cout << endl;
    cout << "char** (2x3): " << sizeof(char) * 2 * 3 << " bytes, values: ";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j)
            cout << ac[i][j] << " ";
    cout << endl;
    for (int i = 0; i < 2; ++i)
    {
        delete[] ai[i];
        delete[] af[i];
        delete[] ac[i];
    }
    delete[] ai;
    delete[] af;
    delete[] ac;
}

// Print 2D arrays of primitives using std::vector
void print_vector_primitive_2d_arrays()
{
    vector<vector<int>> vi{{1, 2, 3}, {4, 5, 6}};
    vector<vector<float>> vf{{1.0f, 2.0f, 3.0f}, {4.0f, 5.0f, 6.0f}};
    vector<vector<char>> vc{{'a', 'b', 'c'}, {'d', 'e', 'f'}};
    cout << "vector<vector<int>>: " << sizeof(int) * vi.size() * vi[0].size() << " bytes, values: ";
    for (const auto &row : vi)
        for (int v : row)
            cout << v << " ";
    cout << endl;
    cout << "vector<vector<float>>: " << sizeof(float) * vf.size() * vf[0].size() << " bytes, values: ";
    for (const auto &row : vf)
        for (float v : row)
            cout << v << " ";
    cout << endl;
    cout << "vector<vector<char>>: " << sizeof(char) * vc.size() * vc[0].size() << " bytes, values: ";
    for (const auto &row : vc)
        for (char v : row)
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

// Print static 2D array of structs
void print_static_struct_2d_array()
{
    Node nodes[2][3] = {
        { {1, "data1"}, {2, "data2"}, {3, "data3"} },
        { {4, "data4"}, {5, "data5"}, {6, "data6"} }
    };
    cout << "Node[2][3]: " << sizeof(nodes) << " bytes, values: ";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j)
            cout << "{" << nodes[i][j].id << ", " << nodes[i][j].data << "} ";
    cout << endl;
}

// Print dynamic 2D array of structs
void print_dynamic_struct_2d_array()
{
    Node** nodes = new Node*[2];
    for (int i = 0; i < 2; ++i)
        nodes[i] = new Node[3]{
            {1 + i * 3, "data" + to_string(1 + i * 3)},
            {2 + i * 3, "data" + to_string(2 + i * 3)},
            {3 + i * 3, "data" + to_string(3 + i * 3)}
        };
    cout << "Node** (2x3): " << sizeof(Node) * 2 * 3 << " bytes, values: ";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j)
            cout << "{" << nodes[i][j].id << ", " << nodes[i][j].data << "} ";
    cout << endl;
    for (int i = 0; i < 2; ++i)
        delete[] nodes[i];
    delete[] nodes;
}

// Print vector 2D array of structs
void print_vector_struct_2d_array()
{
    vector<vector<Node>> nodes = {
        { {1, "data1"}, {2, "data2"}, {3, "data3"} },
        { {4, "data4"}, {5, "data5"}, {6, "data6"} }
    };
    cout << "vector<vector<Node>>: " << sizeof(Node) * nodes.size() * nodes[0].size() << " bytes, values: ";
    for (const auto& row : nodes)
        for (const auto& node : row)
            cout << "{" << node.id << ", " << node.data << "} ";
    cout << endl;
}
int main()
{
    do
    {
        string choice;
        cout << "Enter a choice (static, dynamic, vector): ";
        cin >> choice;
        if (choice == "static")
        {
            cout << endl;
            cout << "Static (stack) memory allocation:" << endl;
            print_static_primitives();
            cout << endl;
            print_static_primitive_arrays();
            cout << endl;
            print_static_struct_array();
            cout << endl;
            print_static_primitive_2d_arrays();
            cout << endl;
        }
        else if (choice == "dynamic")
        {
            cout << endl;
            cout << "Dynamic (heap) memory allocation:" << endl;
            print_dynamic_primitives();
            cout << endl;
            print_dynamic_primitive_arrays();
            cout << endl;
            print_dynamic_struct_array();
            cout << endl;
            print_dynamic_primitive_2d_arrays();
            cout << endl;
        }
        else if (choice == "vector")
        {
            cout << endl;
            cout << "Dynamic (heap) memory allocation:" << endl;
            print_vector_primitives();
            cout << endl;
            print_vector_primitive_arrays();
            cout << endl;
            print_vector_struct_array();
            cout << endl;
            print_vector_primitive_2d_arrays();
            cout << endl;
        }
        cout << "Do you want to continue? (yes/no): ";
        string cont;
        cin >> cont;
        if (cont != "yes" && cont != "y")
            break;
    } while (true);
    return 0;
}