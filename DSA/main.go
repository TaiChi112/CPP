package main

import (
	"fmt"
	"unsafe"
)

type I1 struct {
	b1 bool
	i  int64
	b2 int32
}
type I2 struct {
	i  int64
	b1 bool
	b2 bool
}

func main() {
	a := I1{}
	fmt.Println(unsafe.Sizeof(a))
	b := I2{}
	fmt.Println(unsafe.Sizeof(b))
}
