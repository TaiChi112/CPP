## Initialization & Assignment
| Function                     | Description                                           | Example                   |
| ---------------------------- | ----------------------------------------------------- | ------------------------- |
| vector<T> v;                 | Declare an empty vector                               | std:vector<int> v;        |
| vector<T> v(n);              | Create a vector with n elements (defulat-initialized) | std:vector<int> v(5);     |
| vector<T> v(n,value);        | Create a vecto with n elements, each set to value     | std:vector<int> v(5,112); |
| vector<T> v{1,2,3};          | Initialize with a list of values                      | std:vector<int> v{1,2,3}; |
| vector<T> v.assign(n,value); | Assign n elements with value                          | v.assigin(5,100);         |