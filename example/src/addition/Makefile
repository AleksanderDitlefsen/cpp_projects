# Name of your final executable
TARGET = test_program

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Find all .cpp files in the current directory
SRCS = $(wildcard *.cpp)

# Turn those .cpp file names into .o (object) file names
OBJS = $(SRCS:.cpp=.o)

# The default rule: build the final target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Rule to compile .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to wipe out built files and start fresh
clean:
	rm -f $(OBJS) $(TARGET)
