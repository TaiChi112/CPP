```cpp
void operator++(){
    ++count;
}
Counter operator++(int) {
    ++count;
    return *this;
}
Counter operator++(int){
    return Counter(++count);
}
Counter operator++(int){
    ++count;
    Counter temp;
    temp.count = count;
    return temp;
}
Counter operator++(int) {
    Counter temp(*this);
    ++count;
    return temp;
}
Counter operator++(int){
    ++count;
    Counter temp(count);
    return temp;
}
```