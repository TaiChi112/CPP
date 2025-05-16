## Algorithm สำหรับฝึก (Basic → Intermediate)
### 🔍 ค้นหา / แทรก
- find_max(data[]) → int
- find_min(data[]) → int
- find_index_of(value, data[]) → int
- find_by_index(index, data[]) → int
- count_occurrences(value, data[]) → int
- contains(value, data[]) → bool
- insert_at(index, value, data[]) → void
- delete_at(index, data[]) → void

### 📊 สถิติ
- find_average(data[]) → float
- find_median(data[]) → float
- find_mode(data[]) → int
- find_range(data[]) → int
- find_variance(data[]) → float
- find_std_deviation(data[]) → float

### 🔁 การจัดเรียง / สลับ
- sort_ascending(data[]) → void
- sort_descending(data[]) → void
- reverse(data[]) → void
- shuffle(data[]) → void
- rotate_left(data[], k) → void
- rotate_right(data[], k) → void

### 🧮 คณิตศาสตร์บน array
- sum_all(data[]) → int
- multiply_all(data[]) → int
- cumulative_sum(data[]) → array
- difference_between_neighbors(data[]) → array

### 🧠 การคัดเลือก/กลั่นกรอง
- filter_even(data[]) → array
- filter_odd(data[]) → array
- filter_positive(data[]) → array
- filter_prime(data[]) → array

### 🧬 การเปลี่ยนรูปแบบ
- normalize(data[]) → array
- remove_duplicates(data[]) → array
- unique_values(data[]) → array
- merge_arrays(data1[], data2[]) → array
- split_array(data[], n) → array[][]

## 🧠 Advanced Algorithm List (แบ่งตามหมวด พร้อม input/output)

### 📌 Search & Optimization

| ชื่อ                                   | Input               | Output       |
| ------------------------------------ | ------------------- | ------------ |
| `binary_search(data[], target)`      | sorted array, value | index หรือ -1 |
| `exponential_search(data[], target)` | sorted array, value | index        |
| `ternary_search(data[], target)`     | unimodal array      | index        |
| `jump_search(data[], target)`        | sorted array, value | index        |

### 📌 Divide & Conquer

| ชื่อ                       | Input           | Output                          |
| ------------------------ | --------------- | ------------------------------- |
| `merge_sort(data[])`     | unsorted array  | sorted array                    |
| `quick_sort(data[])`     | unsorted array  | sorted array                    |
| `closest_pair(points[])` | array of points | (point1, point2, min_distance) |

### 📌 Greedy Algorithm

| ชื่อ                                       | Input                    | Output                      |
| ---------------------------------------- | ------------------------ | --------------------------- |
| `activity_selection(start[], end[])`     | start/end times          | list of selected activities |
| `fractional_knapsack(items[], capacity)` | array of (value, weight) | max value                   |
| `min_coin_change(coins[], amount)`       | coin denominations       | min number of coins         |

### 📌 Dynamic Programming (DP)

| ชื่อ                                     | Input          | Output              |
| ---------------------------------------- | -------------- | ------------------- |
| `longest_increasing_subsequence(data[])` | array          | length              |
| `knapsack(items[], W)`                   | values/weights | max value           |
| `edit_distance(str1, str2)`              | 2 strings      | min operations      |
| `matrix_chain_order(dimensions[])`       | matrix dims    | min multiplications |

### 📌 Graph Algorithms

| ชื่อ                         | Input                     | Output                |
| ---------------------------- | ------------------------- | --------------------- |
| `dijkstra(graph, start)`     | weighted graph            | shortest paths        |
| `bellman_ford(graph, start)` | graph with negative edges | shortest paths        |
| `floyd_warshall(matrix)`     | adj matrix                | all-pairs shortest    |
| `kruskal(graph)`             | undirected graph          | minimum spanning tree |
| `prim(graph)`                | undirected graph          | minimum spanning tree |
| `topological_sort(graph)`    | DAG                       | ordered nodes         |

### 📌 Backtracking / Recursion

| ชื่อ                            | Input         | Output                  |
| ------------------------------- | ------------- | ----------------------- |
| `n_queens(n)`                   | int           | all valid board configs |
| `sudoku_solver(board)`          | 9x9 grid      | solved grid             |
| `generate_permutations(data[])` | array         | all permutations        |
| `subset_sum(nums[], target)`    | array, target | True/False              |

### 📌 Advanced Math / Number Theory

| ชื่อ                                | Input         | Output                  |
| ----------------------------------- | ------------- | ----------------------- |
| `sieve_of_eratosthenes(n)`          | int           | primes ≤ n              |
| `gcd(a, b)`                         | int, int      | greatest common divisor |
| `lcm(a, b)`                         | int, int      | least common multiple   |
| `modular_exponentiation(a, b, mod)` | int, int, int | (a^b) mod m             |
