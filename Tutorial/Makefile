CXX = g++

CXXFLAGS = -Wall -Iinclude -g

OBJS = src/main.o

TARGET = main.exe

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

src/main.o: src/main.cpp include/class.h
	$(CXX) $(CXXFLAGS) -c src/main.cpp -o src/main.o

clean:
	rm -f $(OBJS) $(TARGET)