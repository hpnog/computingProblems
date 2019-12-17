# Declare variables
CC=g++
CFLAGS=-std=c++11 -Wall

SRC=src
SRC_LEETCODE=$(SRC)/leetCodeSolutions
SRC_INCLUDE=$(SRC)/include

# Dirs to be created
BUILD_DIR := build

SRCS := $(SRC)/main.cpp $(SRC)/tests.cpp $(SRC_LEETCODE)/addTwoNumbers.cpp
OBJS := $(BUILD_DIR)/main.o $(BUILD_DIR)/addTwoNumbers.o
OBJS_TESTS := $(BUILD_DIR)/tests.o $(BUILD_DIR)/addTwoNumbers.o

$(BUILD_DIR)/%.so: $(SRC_INCLUDE)/%.hpp
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(SRC)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(SRC_LEETCODE)/%.cpp
	$(CC) -c $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/sePrep: $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR)/sePrepTests: $(OBJS_TESTS)
	$(CC) $(CFLAGS) $^ -o $@

all: sePrep

test: $(BUILD_DIR)/sePrepTests

sePrep: $(BUILD_DIR)/sePrep

clean:
	rm -rf *o ./$(BUILD_DIR)/*.o ./$(BUILD_DIR)/*.so ./$(BUILD_DIR)/sePrep ./$(BUILD_DIR)/sePrepTests