# Found in https://leetcode.com/problems/word-ladder/

from queue import Queue

class Node:
    def __init__(self, val: str):
        self.word = val
        self.children = []
        self.visited = False

class Solution:
    # diff btween words
    def wordDiff(self, w1: str, w2: str) -> int:
        diff = 0
        for i in range(len(w1)):
            if w1[i] != w2[i]:
                diff += 1
        return diff
    
    def bfs(self, beginWord: str, endWord: str, dict: {}) -> int:
        queue, levels = Queue(), Queue()
        queue.put(dict[beginWord])
        levels.put(1)
        while not queue.empty():
            currNode = queue.get()
            currLevel = levels.get()
            if currNode.visited:
                continue
                
            currNode.visited = True
            
            if currNode.word == endWord:
                return currLevel
            
            for child in currNode.children:
                queue.put(dict[child])
                levels.put(currLevel + 1)
            
        return 0
        
    def ladderLength(self, beginWord: str, endWord: str, wordList: [str]) -> int:
        dict = {}
        wordList.append(beginWord)
        
        for w1 in wordList:
            dict[w1] = Node(w1)
            for w2 in wordList:
                if self.wordDiff(w1, w2) == 1:
                    dict[w1].children.append(w2)
        
        return self.bfs(beginWord, endWord, dict)