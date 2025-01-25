```cpp
#include <iostream>
#include "math.h"
#include "utils.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Sum: " << add(2, 3) << std::endl;
    printMessage("This is a utility function.");
    return 0;
}
```

```cpp
#include "math.h"

int add(int a, int b) {
    return a + b;
}
```

```cpp
#ifndef MATH_H
#define MATH_H

int add(int a, int b);

#endif // MATH_H
```

```cpp
#include "utils.h"
#include <iostream>

void printMessage(const std::string& message) {
    std::cout << "Message: " << message << std::endl;
}
```

```cpp
#ifndef UTILS_H
#define UTILS_H

#include <string>

void printMessage(const std::string& message);

#endif // UTILS_H
```

```makefile
CXX = g++
CXXFLAGS = -Wall -std=c++11 -Iinclude

all: build/main.exe

build/main.exe: build/main.o build/math.o build/utils.o
	$(CXX) $(CXXFLAGS) $^ -o $@

build/main.o: src/main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

build/math.o: src/math.cpp include/math.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

build/utils.o: src/utils.cpp include/utils.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: build/main.exe
	./build/main.exe

clean:
	rm -f build/*.o build/main.exe

.PHONY: all run clean
```

## structure of the project large scale 
```
my_large_cpp_project/
├── src/
│   ├── core/           
│   ├── utils/         
│   ├── math/           
│   └── main.cpp        
├── include/
│   ├── core/
│   ├── utils/
│   └── math/
├── tests/
│   ├── unit/         
│   └── integration/  
├── third_party/       
├── build/
├── Makefile
└── README.md
```