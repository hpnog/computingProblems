# Declare variables
CC=g++
CFLAGS=-c -Wall 

SRC=src
SRC_LEETCODE=$(SRC)/leetCodeSolutions

# Dirs to be created
BUILD_DIR := build

SRCS := $(SRC)/main.cpp $(SRC_LEETCODE)/addTwoNumbers.cpp
OBJS := $(SRC)/main.o $(SRC_LEETCODE)/addTwoNumbers.o

$(BUILD_DIR)/%.o: src/%.cpp
	mkdir -p $(@D)
	$(CC) -c $< -o $@

$(BUILD_DIR)/sePrep: $(OBJS)
	mkdir -p $(@D)
	$(CC) $^ -o $@

all: sePrep

sePrep: $(BUILD_DIR)/sePrep

clean:
	rm -rf *o ./$(SRC)/*.o ./$(SRC_LEETCODE)/*.o ./$(BUILD_DIR)/sePrep