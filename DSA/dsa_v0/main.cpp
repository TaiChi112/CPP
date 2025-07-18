/**
 * @file main.cpp
 * @brief Demonstrates various C++ array and memory management techniques
 * @author DSA Study Project
 * @date 2025
 * 
 * This program showcases different ways to work with arrays in C++:
 * - Static arrays (1D, 2D, 3D)
 * - Dynamic arrays using new/delete
 * - Multi-dimensional dynamic arrays
 * - STL vectors with different iteration methods
 */

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Constants for better maintainability
constexpr int ARRAY_SIZE = 25;
constexpr int MATRIX_SIZE = 5;
constexpr int CUBE_DEPTH = 1;

/**
 * @brief Generates sequential numbers starting from 1
 * @param start Starting number
 * @param count How many numbers to generate
 * @return vector containing sequential numbers
 */
vector<int> generateSequentialNumbers(int start = 1, int count = ARRAY_SIZE) {
    vector<int> numbers;
    numbers.reserve(count);
    for (int i = 0; i < count; ++i) {
        numbers.push_back(start + i);
    }
    return numbers;
}

/**
 * @brief Demonstrates 1D static array usage
 */
void demonstrateStaticArray() {
    cout << "\n=== 1D Static Array Demo ===\n";
    
    // Initialize with sequential numbers 1-25
    int staticArray[ARRAY_SIZE] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25
    };
    
    int arraySize = sizeof(staticArray) / sizeof(staticArray[0]);
    cout << "Static array elements: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << staticArray[i] << " ";
    }
    cout << "\nArray size: " << arraySize << " elements\n";
}

/**
 * @brief Demonstrates 2D static array usage
 */
void demonstrate2DStaticArray() {
    cout << "\n=== 2D Static Array Demo ===\n";
    
    int matrix[MATRIX_SIZE][MATRIX_SIZE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    cout << "2D array (matrix) elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < MATRIX_SIZE; ++j) {
            cout << setw(3) << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Matrix dimensions: " << rows << "x" << MATRIX_SIZE << "\n";
}

/**
 * @brief Demonstrates 3D static array usage
 */
void demonstrate3DStaticArray() {
    cout << "\n=== 3D Static Array Demo ===\n";
    
    int cube[CUBE_DEPTH][MATRIX_SIZE][MATRIX_SIZE] = {
        {{1, 2, 3, 4, 5},
         {6, 7, 8, 9, 10},
         {11, 12, 13, 14, 15},
         {16, 17, 18, 19, 20},
         {21, 22, 23, 24, 25}}
    };
    
    int depth = sizeof(cube) / sizeof(cube[0]);
    cout << "3D array (cube) elements:\n";
    for (int i = 0; i < depth; ++i) {
        cout << "Layer " << i << ":\n";
        for (int j = 0; j < MATRIX_SIZE; ++j) {
            for (int k = 0; k < MATRIX_SIZE; ++k) {
                cout << setw(3) << cube[i][j][k] << " ";
            }
            cout << "\n";
        }
    }
    cout << "Cube dimensions: " << depth << "x" << MATRIX_SIZE << "x" << MATRIX_SIZE << "\n";
}

/**
 * @brief Demonstrates dynamic 1D array allocation
 * @note Shows incorrect sizeof usage with dynamic arrays
 */
void demonstrateDynamicArray() {
    cout << "\n=== 1D Dynamic Array Demo ===\n";
    
    // Allocate dynamic array
    int* dynamicArray = new int[ARRAY_SIZE]{
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25
    };
    
    // WARNING: sizeof(dynamicArray) returns pointer size, not array size!
    // This is a common mistake - keeping for educational purposes
    // int incorrectSize = sizeof(dynamicArray) / sizeof(dynamicArray[0]); // Removed: does not compute array elements
    
    cout << "Dynamic array elements: ";
    for (int i = 0; i < ARRAY_SIZE; ++i) {  // Use known size instead
        cout << dynamicArray[i] << " ";
    }
    cout << "\nNote: sizeof() with dynamic arrays returns pointer size, not array size (" << ARRAY_SIZE << ")\n";
    
    // Clean up memory
    delete[] dynamicArray;
    dynamicArray = nullptr;
}

/**
 * @brief Demonstrates 2D dynamic array allocation
 */
void demonstrate2DDynamicArray() {
    cout << "\n=== 2D Dynamic Array Demo ===\n";
    
    // Allocate array of pointers
    int** matrix = new int*[MATRIX_SIZE];
    
    // Allocate each row
    for (int i = 0; i < MATRIX_SIZE; ++i) {
        matrix[i] = new int[MATRIX_SIZE];
        // Initialize with sequential values
        for (int j = 0; j < MATRIX_SIZE; ++j) {
            matrix[i][j] = i * MATRIX_SIZE + j + 1;
        }
    }
    
    cout << "2D dynamic array elements:\n";
    for (int i = 0; i < MATRIX_SIZE; ++i) {
        for (int j = 0; j < MATRIX_SIZE; ++j) {
            cout << setw(3) << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    
    // Proper cleanup - delete in reverse order
    for (int i = 0; i < MATRIX_SIZE; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}

/**
 * @brief Demonstrates 3D dynamic array allocation (partial implementation)
 * @note This implementation only allocates the first layer for brevity
 */
void demonstrate3DDynamicArray() {
    cout << "\n=== 3D Dynamic Array Demo (Partial) ===\n";
    
    // Allocate first level (array of pointers to pointers)
    int*** cube = new int**[1];
    
    // Allocate second level (array of pointers)
    cube[0] = new int*[MATRIX_SIZE];
    
    // Allocate third level (actual arrays)
    for (int j = 0; j < MATRIX_SIZE; ++j) {
        cube[0][j] = new int[MATRIX_SIZE];
        // Initialize with sequential values
        for (int k = 0; k < MATRIX_SIZE; ++k) {
            cube[0][j][k] = j * MATRIX_SIZE + k + 1;
        }
    }
    
    cout << "3D dynamic array elements (first layer only):\n";
    for (int j = 0; j < MATRIX_SIZE; ++j) {
        for (int k = 0; k < MATRIX_SIZE; ++k) {
            cout << setw(3) << cube[0][j][k] << " ";
        }
        cout << "\n";
    }
    
    // Proper cleanup - delete in reverse order
    for (int j = 0; j < MATRIX_SIZE; ++j) {
        delete[] cube[0][j];
    }
    delete[] cube[0];
    delete[] cube;
    cube = nullptr;
}

/**
 * @brief Demonstrates STL vector usage with different iteration methods
 */
void demonstrateVectorIteration() {
    cout << "\n=== STL Vector Demo ===\n";
    
    // Create vector with sequential numbers
    vector<int> numbers = generateSequentialNumbers();
    
    cout << "Vector size: " << numbers.size() << " elements\n";
    
    // Method 1: Index-based iteration
    cout << "\n1. Index-based iteration: ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    
    // Method 2: Iterator-based iteration
    cout << "\n2. Iterator-based iteration: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    
    // Method 3: Range-based for loop (C++11)
    cout << "\n3. Range-based for loop: ";
    for (const auto& value : numbers) {
        cout << value << " ";
    }
    cout << "\n";
}

/**
 * @brief Main function demonstrating various array and memory management techniques
 * @return 0 on successful execution
 */
int main() {
    cout << "C++ Array and Memory Management Demonstration\n";
    cout << "=============================================\n";
    
    try {
        demonstrateStaticArray();
        demonstrate2DStaticArray();
        demonstrate3DStaticArray();
        demonstrateDynamicArray();
        demonstrate2DDynamicArray();
        demonstrate3DDynamicArray();
        demonstrateVectorIteration();
        
        cout << "\n=== Demo Complete ===\n";
        cout << "All memory has been properly deallocated.\n";
        
    } catch (const bad_alloc& e) {
        cerr << "Memory allocation failed: " << e.what() << endl;
        return 1;
    } catch (const exception& e) {
        cerr << "An error occurred: " << e.what() << endl;
        return 1;
    }
    
    return 0;
}