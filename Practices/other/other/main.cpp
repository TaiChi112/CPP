#include <iostream>

using namespace std;

int main(){
    int arr1[5] = {1, 2, 3, 4, 5};
    float arr2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char arr3[5] = {'a', 'b', 'c', 'd', 'e'};
    string arr4[5] = {"one", "two", "three", "four", "five"};
    bool arr5[5] = {true, false, true, false, true};
    for(auto i: arr1){
        cout << i << " ";
    }
    cout << endl;
    for(auto i: arr2){
        cout << i << " ";
    }
    cout << endl;
    for(auto i: arr3){
        cout << i << " ";
    }
    cout << endl;
    for(auto i: arr4){
        cout << i << " ";
    }
    cout << endl;
    for(auto i: arr5){
        cout << i << " ";
    }
    return 0;
}