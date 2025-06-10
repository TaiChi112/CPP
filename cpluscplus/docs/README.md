# C++ Memory Allocation and Data Structures Demo

This project demonstrates various ways to allocate and use primitive types, arrays, and structs in C++. It compares static (stack) and dynamic (heap) allocation, as well as the use of `std::vector` for dynamic arrays. The code covers 1D, 2D, and 3D arrays for both primitives and structs.

## What the Code Does

1. **Primitive Type Demonstrations**
    - **Static Allocation:**  
      Declares and prints the size and value of static (stack-allocated) `int`, `float`, and `char` variables.
    - **Dynamic Allocation:**  
      Allocates `int`, `float`, and `char` on the heap, prints their pointer sizes and values, then deallocates them.
    - **Vector Allocation:**  
      Uses `std::vector` to store single elements of each primitive type, prints their size and value.

2. **Primitive Array Demonstrations**
    - **Static 1D Arrays:**  
      Declares static 1D arrays of `int`, `float`, and `char`, prints their total size and all values.
    - **Dynamic 1D Arrays:**  
      Allocates 1D arrays of `int`, `float`, and `char` on the heap, prints their size and all values, then deallocates them.
    - **Vector 1D Arrays:**  
      Uses `std::vector` to store 1D arrays of each primitive type, prints their size and all values.
    - **Static 2D Arrays:**  
      Declares static 2D arrays of `int`, `float`, and `char`, prints their size and all values.
    - **Dynamic 2D Arrays:**  
      Allocates 2D arrays of `int`, `float`, and `char` on the heap, prints their size and all values, then deallocates them.
    - **Vector 2D Arrays:**  
      Uses `std::vector<std::vector<...>>` for 2D arrays, prints their size and all values.
    - **Static 3D Arrays:**  
      Declares static 3D arrays of `int`, `float`, and `char`, prints their size and all values.
    - **Dynamic 3D Arrays:**  
      Allocates 3D arrays of `int`, `float`, and `char` on the heap, prints their size and all values, then deallocates them.
    - **Vector 3D Arrays:**  
      Uses `std::vector<std::vector<std::vector<...>>>` for 3D arrays, prints their size and all values.

3. **Struct Demonstrations**
    - **Node Struct:**  
      Defines a `Node` struct with `int id` and `string data`.
    - **Static 1D Array of Structs:**  
      Declares a static 1D array of `Node`, prints its size and all elements.
    - **Dynamic 1D Array of Structs:**  
      Allocates a 1D array of `Node` on the heap, prints its size and all elements, then deallocates.
    - **Vector 1D Array of Structs:**  
      Uses `std::vector<Node>` to store nodes, prints the size and all elements.
    - **Static 2D Array of Structs:**  
      Declares a static 2D array of `Node`, prints its size and all elements.
    - **Dynamic 2D Array of Structs:**  
      Allocates a 2D array of `Node` on the heap, prints its size and all elements, then deallocates.
    - **Vector 2D Array of Structs:**  
      Uses `std::vector<std::vector<Node>>` for 2D struct arrays, prints the size and all elements.
    - **Static 3D Array of Structs:**  
      Declares a static 3D array of `Node`, prints its size and all elements.
    - **Dynamic 3D Array of Structs:**  
      Allocates a 3D array of `Node` on the heap, prints its size and all elements, then deallocates.
    - **Vector 3D Array of Structs:**  
      Uses `std::vector<std::vector<std::vector<Node>>>` for 3D struct arrays, prints the size and all elements.

4. **Main Function**
    - Calls each of the above functions in sequence, with spacing for readability.

---

**Summary:**  
This code helps visualize the differences between stack and heap allocation, raw arrays and vectors, and how memory size and data access differ for each approach in C++. It covers 1D, 2D, and 3D arrays for both primitive types and structs.