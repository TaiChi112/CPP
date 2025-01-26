# compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Iinclude
LDFLAGS = 

SRC_DIR = src # src/.cpp
APP_DIR = app # app/.cpp
BUILD_DIR = build # build/.o
BIN_DIR = bin # bin/.exe

# source files
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
APP_FILES = $(wildcard $(APP_DIR)/*.cpp)

# object files
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC_FILES))
APP_OBJ_FILES = $(patsubst $(APP_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(APP_FILES))

# target
TARGET = $(BIN_DIR)/main.exe

# default target
all: $(TARGET)

# link object files to create the executable
$(TARGET): $(OBJ_FILES) $(APP_OBJ_FILES)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

# compile source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(APP_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# clean build artifacts
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

# phony targets
.PHONY: all clean
