CXX = g++

CXXFLAGS = -Wall -Wextra -pedantic -std=c++23

bin/main.exe: build/main.o
	mkdir -p bin
	$(CXX) $(CXXFLAGS) -o $@ $<

build/main.o: src/main.cpp
	mkdir -p build
	$(CXX) $(CXXFLAGS) -c -o $@ $<

all: bin/main.exe

run: all
	./bin/main.exe

clean:
	rm -rf bin/*.exe build/*.o

.PHONY: all run clean