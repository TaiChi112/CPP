```cpp
for (int i = 0; i < 3; i++) {
    if (i < 2) { // ขนาดของ MultiArrOrange และ MultiArrMango คือ 2
        delete MultiArrOrange[i];
        delete MultiArrMango[i];
    }
    if (i < 3) { // ขนาดของ MultiarrLime คือ 3
        delete MultiarrLime[i];
    }
}
delete[] MultiArrOrange;
delete[] MultiarrLime;
delete[] MultiArrMango;
```

```cpp
int minSize = 2; // ขนาดขั้นต่ำของ MultiArrOrange และ MultiArrMango
for (int i = 0; i < minSize; i++) {
    delete MultiArrOrange[i];
    delete MultiArrMango[i];
    delete MultiarrLime[i]; // ใช้ได้กับขนาด 3 เพราะ 3 > minSize
}

// ลบที่เหลือของ MultiarrLime
delete MultiarrLime[2];
delete[] MultiArrOrange;
delete[] MultiarrLime;
delete[] MultiArrMango;
```

```cpp
for (int i = 0; i < 2; i++) { // สำหรับ MultiArrOrange และ MultiArrMango
    delete MultiArrOrange[i];
    delete MultiArrMango[i];
}
for (int i = 0; i < 3; i++) { // สำหรับ MultiarrLime
    delete MultiarrLime[i];
}
delete[] MultiArrOrange;
delete[] MultiarrLime;
delete[] MultiArrMango;
```

```cpp
int sizes[] = {2, 3, 2}; // ขนาดของ MultiArrOrange, MultiarrLime, MultiArrMango

for (int i = 0; i < sizes[0]; i++) {
    delete MultiArrOrange[i];
}
for (int i = 0; i < sizes[1]; i++) {
    delete MultiarrLime[i];
}
for (int i = 0; i < sizes[2]; i++) {
    delete MultiArrMango[i];
}
delete[] MultiArrOrange;
delete[] MultiarrLime;
delete[] MultiArrMango;
```

```cpp
template <typename T>
void deletePointerArray(T** arr, int size) {
    for (int i = 0; i < size; i++) {
        delete arr[i];
    }
    delete[] arr;
}

int main() {
    deletePointerArray(MultiArrOrange, 2);
    deletePointerArray(MultiarrLime, 3);
    deletePointerArray(MultiArrMango, 2);
    return 0;
}
```

```cpp
// Overload operator<< for pointers
    friend ostream &operator<<(ostream &os, const Orange *orange) {
        if (orange) { // Check if pointer is not null
            os << "Orange[ID: " << orange->id << ", Location: " << orange->location << "]";
        } else {
            os << "Null Orange";
        }
        return os;
    }
```

```cpp
// Overload operator<<
    friend ostream &operator<<(ostream &os, const Orange &orange) {
        os << "Orange[ID: " << orange.id << ", Location: " << orange.location << "]";
        return os;
    }
```