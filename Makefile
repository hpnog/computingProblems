# Declare variables
CC=g++
CFLAGS=-std=c++11 -Wall
CFLAGS_COVER=-std=c++11 -Wall -fprofile-arcs -ftest-coverage

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
	$(CC) $(CFLAGS_COVER) -c $< -o $@

$(BUILD_DIR)/%.o: $(SRC)/%.cpp
	mkdir -p $(@D)
	$(CC) $(CFLAGS_COVER) -c $< -o $@

$(BUILD_DIR)/%.o: $(SRC_LEETCODE)/%.cpp
	mkdir -p $(@D)
	$(CC) $(CFLAGS_COVER) -c $< -o $@

$(BUILD_DIR)/sePrep: $(OBJS)
	mkdir -p $(@D)
	$(CC) $(CFLAGS_COVER) $^ -o $@

$(BUILD_DIR)/sePrepTests: $(OBJS_TESTS)
	mkdir -p $(@D)
	$(CC) $(CFLAGS_COVER) $^ -o $@

all: sePrep

test:$(BUILD_DIR)/sePrepTests

sePrep: $(BUILD_DIR)/sePrep

clean:
	rm -rf *o ./$(BUILD_DIR)/*.o ./$(BUILD_DIR)/*.so ./$(BUILD_DIR)/*.gcno ./$(BUILD_DIR)/sePrep ./$(BUILD_DIR)/sePrepTests