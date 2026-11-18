CC = gcc
CFLAGS = -O3 -Wall -Wextra -Iinclude -pthread
 
TARGET = chip8
SRC = $(wildcard src/*.c)
 
all: $(TARGET)
 
$(TARGET): $(SRC) $(wildcard include/*.h)
	$(CC) $(CFLAGS) $(SRC) -o $@
 
clean:
	rm -f $(TARGET)
 
.PHONY: all clean