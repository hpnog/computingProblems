# Declare variables
CC=g++
CFLAGS=-c -Wall 

# SRC=./src/
# SRC_LEETCODE=leetCodeSolutions/

BUILD_TARGET=./build

# _buildFolder := $(shell mkdir -p build)

all: build

build: main.o addTwoNumbers.o
	$(CC) main.o addTwoNumbers.o -o $(BUILD_TARGET)/sePrep

build_git: main.o addTwoNumbers.o
	$(CC) main.o addTwoNumbers.o -o sePrep

main.o: 	 
	$(CC) $(CFLAGS) src/main.cpp

addTwoNumbers.o:
	$(CC) $(CFLAGS) src/leetCodeSolutions/addTwoNumbers.cpp

# Uncomment the following to thefine "compile" function
# compile: 

clean:
	rm -rf *o ./build/sePrep