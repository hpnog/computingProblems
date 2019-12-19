# Declare variables
CC=g++
CFLAGS=-std=c++11 -Wall
CFLAGS_COVER=-std=c++11 -Wall -fprofile-arcs -ftest-coverage

SRC=src
SRC_LEETCODE=$(SRC)/leetCodeSolutions
SRC_INCLUDE=$(SRC)/include

# Dirs to be created
BUILD_DIR := build

################### SRCS ##################
SRCS_LEETCODE := /addTwoNumbers.cpp 
SRCS_LEETCODE := $(SRCS_LEETCODE) $(SRC_LEETCODE)/inverseInteger.cpp 
SRCS_LEETCODE := $(SRCS_LEETCODE) $(SRC_LEETCODE)/longestCommonPrefix.cpp 
SRCS_LEETCODE := $(SRCS_LEETCODE) $(SRC_LEETCODE)/longestPalindromicSubstring.cpp 
SRCS_LEETCODE := $(SRCS_LEETCODE) $(SRC_LEETCODE)/longestSubstringWithoutRepeatingCharacters.cpp
SRCS_LEETCODE := $(SRCS_LEETCODE) $(SRC_LEETCODE)/twoSum.cpp
SRCS_LEETCODE := $(SRCS_LEETCODE) $(SRC_LEETCODE)/romanToInteger.cpp
SRCS_LEETCODE := $(SRCS_LEETCODE) $(SRC_LEETCODE)/palindromeNumber.cpp
SRCS_LEETCODE := $(SRCS_LEETCODE) $(SRC_LEETCODE)/zigzagConversion.cpp

SRCS := $(SRC)/main.cpp $(SRCS_LEETCODE)
SRCS_TESTS := $(SRC)/tests.cpp $(SRCS_LEETCODE)
############################################

################### OBJS ###################
OBJS_LEETCODE :=  $(SRC_LEETCODE)/addTwoNumbers.o 
OBJS_LEETCODE := $(OBJS_LEETCODE) $(SRC_LEETCODE)/inverseInteger.o 
OBJS_LEETCODE := $(OBJS_LEETCODE) $(SRC_LEETCODE)/longestCommonPrefix.o 
OBJS_LEETCODE := $(OBJS_LEETCODE) $(SRC_LEETCODE)/longestPalindromicSubstring.o 
OBJS_LEETCODE := $(OBJS_LEETCODE) $(SRC_LEETCODE)/longestSubstringWithoutRepeatingCharacters.o
OBJS_LEETCODE := $(OBJS_LEETCODE) $(SRC_LEETCODE)/twoSum.o
OBJS_LEETCODE := $(OBJS_LEETCODE) $(SRC_LEETCODE)/romanToInteger.o
OBJS_LEETCODE := $(OBJS_LEETCODE) $(SRC_LEETCODE)/palindromeNumber.o
OBJS_LEETCODE := $(OBJS_LEETCODE) $(SRC_LEETCODE)/zigzagConversion.o

OBJS := $(SRC)/main.o $(OBJS_LEETCODE)
OBJS_TESTS := $(SRC)/tests.o $(OBJS_LEETCODE)
############################################

$(SRC_INCLUDE)/%.so: $(SRC_INCLUDE)/%.hpp
	$(CC) $(CFLAGS_COVER) -c $< -o $@

$(SRC)/%.o: $(SRC)/%.cpp
	$(CC) $(CFLAGS_COVER) -c $< -o $@

$(SRC_LEETCODE)/%.o: $(SRC_LEETCODE)/%.cpp
	$(CC) $(CFLAGS_COVER) -c $< -o $@

$(BUILD_DIR)/computingProblems: $(OBJS)
	mkdir -p $(@D)
	$(CC) $(CFLAGS_COVER) $^ -o $@

$(BUILD_DIR)/computingProblemsTests: $(OBJS_TESTS)
	mkdir -p $(@D)
	$(CC) $(CFLAGS_COVER) $^ -o $@

all: computingProblems

test:$(BUILD_DIR)/computingProblemsTests

computingProblems: $(BUILD_DIR)/computingProblems

clean:
	rm -rf *o ./$(BUILD_DIR)/*.o ./$(BUILD_DIR)/*.so ./$(BUILD_DIR)/*.gcno ./$(BUILD_DIR)/*.gcov ./$(BUILD_DIR)/computingProblems ./$(BUILD_DIR)/computingProblemsTests ./$(BUILD_DIR)/*.gcda
	rm -rf *o ./$(SRC)/*.o ./$(SRC)/*.so ./$(SRC)/*.gcno ./$(SRC)/*.gcov ./$(SRC)/*.gcda
	rm -rf *o ./$(SRC_INCLUDE)/*.o ./$(SRC_INCLUDE)/*.so ./$(SRC_INCLUDE)/*.gcno ./$(SRC_INCLUDE)/*.gcov ./$(SRC_INCLUDE)/*.gcda
	rm -rf *o ./$(SRC_LEETCODE)/*.o ./$(SRC_LEETCODE)/*.so ./$(SRC_LEETCODE)/*.gcno ./$(SRC_LEETCODE)/*.gcov ./$(SRC_LEETCODE)/*.gcda
