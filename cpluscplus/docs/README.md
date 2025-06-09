# C++ Memory Allocation and Data Structures Demo

This project demonstrates various ways to allocate and use primitive types, arrays, and structs in C++. It compares static (stack) and dynamic (heap) allocation, as well as the use of `std::vector` for dynamic arrays.

## What the Code Does

1. **Primitive Type Demonstrations**
    - **Static Allocation:**  
      Declares and prints the size and value of static (stack-allocated) `int`, `float`, and `char` variables.
    - **Dynamic Allocation:**  
      Allocates `int`, `float`, and `char` on the heap, prints their pointer sizes and values, then deallocates them.
    - **Vector Allocation:**  
      Uses `std::vector` to store single elements of each primitive type, prints their size (based on element count) and value.

2. **Array Demonstrations**
    - **Static Arrays:**  
      Declares static arrays of `int`, `float`, and `char`, prints their total size and all values.
    - **Dynamic Arrays:**  
      Allocates arrays of `int`, `float`, and `char` on the heap, prints the size (pointer size times 5) and all values, then deallocates them.
    - **Vector Arrays:**  
      Uses `std::vector` to store arrays of each primitive type, prints their size (element size times count) and all values.

3. **Struct Demonstrations**
    - **Node Struct:**  
      Defines a `Node` struct with `int id` and `string data`.
    - **Static Array of Structs:**  
      Declares a static array of `Node`, prints its total size and all elements.
    - **Dynamic Array of Structs:**  
      Allocates an array of `Node` on the heap, prints the size (pointer size times 5) and all elements, then deallocates.
    - **Vector of Structs:**  
      Uses `std::vector<Node>` to store nodes, prints the total size (struct size times count) and all elements.

4. **Main Function**
    - Calls each of the above functions in sequence, with spacing for readability.

---

**Summary:**  
This code helps visualize the differences between stack and heap allocation, raw arrays and vectors, and how memory size and data access differ for each approach in C++.