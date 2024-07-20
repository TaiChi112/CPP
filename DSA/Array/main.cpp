#include <iostream>

using namespace std;

class Array{
    private:
        int *A;
        int size;
        int length;
    public:
        Array(){
            size = 10;
            A = new int[size];
            length = 0;
        }
        Array(int sz){
            size = sz;
            A = new int[size];
            length = 0;
        }
        ~Array(){
            delete []A;
            cout<<"Destructuring Array finishely"<<endl;
        }
        void Display();
        void Append(int x);
        void Insert(int index, int x);
        int Delete(int index);
        int LinearSearch(int key);
        int BinarySearch(int key);
        int Get(int index);
        void Set(int index, int x);
        int Max();
        int Min();
        int Sum();
        float Avg();
        void Reverse();
        void Reverse2();
        void InsertSort(int x);
        int isSorted();
        void Rearrange();
        Array* Merge(Array arr2);
        Array* Union(Array arr2);
        Array* Intersection(Array arr2);
        Array* Difference(Array arr2);        
};

void Array::Display(){
    for(int i=0; i<length; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

void Array::Append(int x){
    if(length < size){
        A[length++] = x;
    }
}

void Array::Insert(int index, int x){
    if(index >= 0 && index <= length){
        for(int i=length; i>index; i--){
            A[i] = A[i-1];
        }
        A[index] = x;
        length++;
    }
}

int Array::Delete(int index){
    int x = 0;
    if(index >= 0 && index < length){
        x = A[index];
        for(int i=index; i<length-1; i++){
            A[i] = A[i+1];
        }
        length--;
        return x;
    }
    return 0;
}

int Array::LinearSearch(int key){
    for(int i=0; i<length; i++){
        if(A[i] == key){
            return i;
        }
    }
    return -1;
}

int Array::BinarySearch(int key){
    int l = 0;
    int h = length-1;
    while(l <= h){
        int mid = (l+h)/2;
        if(A[mid] == key){
            return mid;
        }else if(A[mid] < key){
            l = mid+1;
        }else{
            h = mid-1;
        }
    }
    return -1;
}

int Array::Get(int index){
    if(index >= 0 && index < length){
        return A[index];
    }
    return -1;
}

void Array::Set(int index, int x){
    if(index >= 0 && index < length){
        A[index] = x;
    }
}

int Array::Max(){
    int max = A[0];
    for(int i=1; i<length; i++){
        if(A[i] > max){
            max = A[i];
        }
    }
    return max;
}

int Array::Min(){
    int min = A[0];
    for(int i=1; i<length; i++){
        if(A[i] < min){
            min = A[i];
        }
    }
    return min;
}

int Array::Sum(){
    int s = 0;
    for(int i=0; i<length; i++){
        s += A[i];
    }
    return s;
}

float Array::Avg(){
    return (float)Sum()/length;
}

void Array::Reverse(){
    int *B = new int[length];
    for(int i=length-1, j=0; i>=0; i--, j++){
        B[j] = A[i];
    }
    for(int i=0; i<length; i++){
        A[i] = B[i];
    }
    delete []B;
}

void Array::Reverse2(){
    for(int i=0, j=length-1; i<j; i++, j--){
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
}

void Array::InsertSort(int x){
    if(length == size){
        return;
    }
    int i = length-1;
    while(i >= 0 && A[i] > x){
        A[i+1] = A[i];
        i--;
    }
    A[i+1] = x;
    length++;
}

int Array::isSorted(){
    for(int i=0; i<length-1; i++){
        if(A[i] > A[i+1]){
            return 0;
        }
    }
    return 1;
}

void Array::Rearrange(){
    int i = 0;
    int j = length-1;
    while(i < j){
        while(A[i] < 0){
            i++;
        }
        while(A[j] >= 0){
            j--;
        }
        if(i < j){
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
}

Array* Array::Merge(Array arr2){
    int i = 0;
    int j = 0;
    int k = 0;
    Array *arr3 = new Array(length + arr2.length);
    while(i < length && j < arr2.length){
        if(A[i] < arr2.A[j]){
            arr3->A[k++] = A[i++];
        }else{
            arr3->A[k++] = arr2.A[j++];
        }
    }
    for(; i<length; i++){
        arr3->A[k++] = A[i];
    }
    for(; j<arr2.length; j++){
        arr3->A[k++] = arr2.A[j];
    }
    arr3->length = length + arr2.length;
    return arr3;
}

Array* Array::Union(Array arr2){
    int i = 0;
    int j = 0;
    int k = 0;
    Array *arr3 = new Array(length + arr2.length);
    while(i < length && j < arr2.length){
        if(A[i] < arr2.A[j]){
            arr3->A[k++] = A[i++];
        }else if(arr2.A[j] < A[i]){
            arr3->A[k++] = arr2.A[j++];
        }else{
            arr3->A[k++] = A[i++];
            j++;
        }
    }
    for(; i<length; i++){
        arr3->A[k++] = A[i];
    }
    for(; j<arr2.length; j++){
        arr3->A[k++] = arr2.A[j];
    }
    arr3->length = k;
    return arr3;
}

Array* Array::Intersection(Array arr2){
    int i = 0;
    int j = 0;
    int k = 0;
    Array *arr3 = new Array(length + arr2.length);
    while(i < length && j < arr2.length){
        if(A[i] < arr2.A[j]){
            i++;
        }else if(arr2.A[j] < A[i]){
            j++;
        }else{
            arr3->A[k++] = A[i++];
            j++;
        }
    }
    arr3->length = k;
    return arr3;
}

Array* Array::Difference(Array arr2){
    int i = 0;
    int j = 0;
    int k = 0;
    Array *arr3 = new Array(length + arr2.length);
    while(i < length && j < arr2.length){
        if(A[i] < arr2.A[j]){
            arr3->A[k++] = A[i++];
        }else if(arr2.A[j] < A[i]){
            j++;
        }else{
            i++;
            j++;
        }
    }
    for(; i<length; i++){
        arr3->A[k++] = A[i];
    }
    arr3->length = k;
    return arr3;
}

int main()
{
    Array arr1(10);
    arr1.Append(10);
    arr1.Append(20);
    arr1.Append(30);
    arr1.Append(40);
    arr1.Append(50);
    arr1.Display();

    arr1.Insert(2, 25);
    arr1.Display();

    arr1.Delete(2);
    arr1.Display();

    cout << arr1.LinearSearch(30) << endl;
    cout << arr1.BinarySearch(30) << endl;

    cout << arr1.Get(2) << endl;
    arr1.Set(2, 35);
    arr1.Display();

    cout << arr1.Max() << endl;
    cout << arr1.Min() << endl;

    cout << arr1.Sum() << endl;
    cout << arr1.Avg() << endl;

    arr1.Reverse();
    arr1.Display();

    arr1.Reverse2();
    arr1.Display();

    arr1.InsertSort(15);
    arr1.Display();

    cout << arr1.isSorted() << endl;

    arr1.Rearrange();
    arr1.Display();

    Array arr2(10);
    arr2.Append(5);
    arr2.Append(15);
    arr2.Append(25);
    arr2.Append(35);
    arr2.Append(45);
    arr2.Display();

    Array *arr3 = arr1.Merge(arr2);
    arr3->Display();

    Array *arr4 = arr1.Union(arr2);
    arr4->Display();

    Array *arr5 = arr1.Intersection(arr2);
    arr5->Display();

    Array *arr6 = arr1.Difference(arr2);
    arr6->Display();



    return 0;
}