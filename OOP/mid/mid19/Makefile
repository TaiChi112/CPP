# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Iinclude -I/usr/include/gtest  # เพิ่ม path ของ Google Test
LDFLAGS = -lgtest -lgtest_main -pthread -L/usr/lib/x86_64-linux-gnu  # ลิงก์กับ Google Test

# Directories
SRC_DIR = src
APP_DIR = app
BUILD_DIR = build
BIN_DIR = bin
TEST_DIR = test

# Source files
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
APP_FILES = $(wildcard $(APP_DIR)/*.cpp)
TEST_FILES = $(wildcard $(TEST_DIR)/*.cpp)

# Object files
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC_FILES))
APP_OBJ_FILES = $(patsubst $(APP_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(APP_FILES))
TEST_OBJ_FILES = $(patsubst $(TEST_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(TEST_FILES))

# Target executables
TARGET = $(BIN_DIR)/main.exe
TEST_TARGET = $(BIN_DIR)/math_test.exe

# Default target
all: $(TARGET)

# Link object files to create the main executable
$(TARGET): $(OBJ_FILES) $(APP_OBJ_FILES)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

# Link object files to create the test executable
$(TEST_TARGET): $(OBJ_FILES) $(TEST_OBJ_FILES)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

# Compile source files into object files
$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Tell make where to find source files
vpath %.cpp $(SRC_DIR) $(APP_DIR) $(TEST_DIR)

# Run the main executable
run: $(TARGET)
	./$(TARGET)

# Run the tests
test: $(TEST_TARGET)
	./$(TEST_TARGET)

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

# Phony targets
.PHONY: all clean run test