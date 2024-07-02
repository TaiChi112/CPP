# assign compiler
CPP = g++

# optional compiler when compile code to excutable code
CPPFLAG = -Wall -Wextra -std=c++11

# target executable file
TARGET = main.exe

# source file which you want to compile
SRCS = main.cpp

OBJS = $(SRCS:.cpp=.exe) # main.cpp -> main.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CPP) $(CPPFLAG) -o $(TARGET) $(OBJS)

clean:
	rm -f $(TARGET)

run : $(TARGET)
	./$(TARGET)