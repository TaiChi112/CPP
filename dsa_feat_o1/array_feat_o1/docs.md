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

