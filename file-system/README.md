## Declaration
- single value
```cpp
int a = 10;
```
## Saving in the file
```cpp
#include <fstream>
int main() {
    std::ofstream file("data.txt");
    int a = 10;
    file << a;
    file.close();
    return 0;
}
```
- multiple values
```cpp
int a[3] = {10, 20, 30};
```
## Saving in the file
```cpp
#include <fstream>
int main() {
    std::ofstream file("data.txt");
    int a[3] = {10, 20, 30};
    for (int i = 0; i < 3; i++) {
        file << a[i] << " ";
    }
    file.close();
    return 0;
}
```

- Above use case primitive type