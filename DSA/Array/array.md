## Static Array Declaration:

```cpp
int numbers[5]; // Array of 5 integers
```

---

## Dynamic Array Declaration:

```cpp
int *dynamicArray = new int[5]; // Dynamic array of 5 integers
// Don't forget to deallocate memory when done:
delete[] dynamicArray;
```

---

## Partially Initialized Array:

```cpp
int data[10] = {1, 2, 3}; // Initializes first 3 elements, rest are initialized to 0
```

---

## Initializer List

```cpp
int primes[5] = {2, 3, 5, 7, 11}; // Array of prime numbers
```

---

## Using Constant Expression:

```cpp
const int SIZE = 100;
int array[SIZE]; // Array of 100 integers
```

---


## Typedef Array:

```cpp
typedef int IntArray[5]; // IntArray is now a type for an array of 5 integers
IntArray numbers; // Declaring an array using the typedef
```
