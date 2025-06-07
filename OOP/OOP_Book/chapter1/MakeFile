CXX = g++

SRC_DIR := src
INC_DIR := include

CXXFLAGS = -Wall -Wextra -std=c++23 -I$(INC_DIR)

# Get all .cpp files recursively
SRCS := $(shell find $(SRC_DIR) -name '*.cpp')
OBJS := $(patsubst %.cpp, build/%.o, $(SRCS))

BIN := bin/main.exe

all: $(BIN)

$(BIN): $(OBJS)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile each .cpp file into a .o file
build/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(BIN)
	./$(BIN)

clean:
	rm -rf bin/* build/*

.PHONY: all run clean
