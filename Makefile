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
OBJS := $(SRC)/main.o $(SRC_LEETCODE)/addTwoNumbers.o
OBJS_TESTS := $(SRC)/tests.o $(SRC_LEETCODE)/addTwoNumbers.o

$(SRC_INCLUDE)/%.so: $(SRC_INCLUDE)/%.hpp
	mkdir -p $(@D)
	$(CC) $(CFLAGS_COVER) -c $< -o $@

$(SRC)/%.o: $(SRC)/%.cpp
	mkdir -p $(@D)
	$(CC) $(CFLAGS_COVER) -c $< -o $@

$(SRC_LEETCODE)/%.o: $(SRC_LEETCODE)/%.cpp
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
	rm -rf *o ./$(BUILD_DIR)/*.o ./$(BUILD_DIR)/*.so ./$(BUILD_DIR)/*.gcno ./$(BUILD_DIR)/*.gcov ./$(BUILD_DIR)/sePrep ./$(BUILD_DIR)/sePrepTests ./$(BUILD_DIR)/*.gcda
	rm -rf *o ./$(SRC)/*.o ./$(SRC)/*.so ./$(SRC)/*.gcno ./$(SRC)/*.gcov ./$(SRC)/*.gcda
	rm -rf *o ./$(SRC_INCLUDE)/*.o ./$(SRC_INCLUDE)/*.so ./$(SRC_INCLUDE)/*.gcno ./$(SRC_INCLUDE)/*.gcov ./$(SRC_INCLUDE)/*.gcda
	rm -rf *o ./$(SRC_LEETCODE)/*.o ./$(SRC_LEETCODE)/*.so ./$(SRC_LEETCODE)/*.gcno ./$(SRC_LEETCODE)/*.gcov ./$(SRC_LEETCODE)/*.gcda
