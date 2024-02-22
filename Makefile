

CC=g++
CFLAGS=-std=c++20

# Target executable
TARGET=WC

# Source files
SRCS=Counter.cpp CharInfo.cpp main.cpp

# Object files
OBJS=$(SRCS:.cpp=.o)

# Header files
DEPS= Counter.h CharInfo.h

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Rule to build object files
%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)
