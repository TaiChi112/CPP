CXX = g++

CXXFLAGS = -Wall -Iinclude -g

OBJS = src/main.o 

TARGET = main.exe

$(TARGET): $(OBJS)# main.exe: src/main.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)
# g++ -Wall -Iinclude -g -o  main.exe src/main.o

src/main.o: src/main.cpp include/class.h include/mid.h 
	$(CXX) $(CXXFLAGS) -c src/main.cpp -o src/main.o
# g++ -Wall -Iinclude -g -c src/main.cpp -o src/main.o

clean:
	rm -f $(OBJS) $(TARGET)
# rm -f src/main.o main.exe