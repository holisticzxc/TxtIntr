CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET = calculator

all: $(TARGET)

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp -lm

clean:
	rm -f $(TARGET)

.PHONY: all clean
