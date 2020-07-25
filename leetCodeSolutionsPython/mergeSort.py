# merge Sort
#
# Time Complexity:     O(n*log(n))
# Space Complexity:    O(n)

class Solution:
    def mergeSorted(self, l1, l2):
        ret = []
        i, j = 0, 0
        while i < len(l1) and j < len(l2):
            if l1[i] < l2[j]:
                ret.append(l1[i])
                i += 1
            else:
                ret.append(l2[j])
                j += 1
        
        # Checking for elements not yet added
        while i < len(l1):
            ret.append(l1[i])
            i +=1
        while j < len(l2):
            ret.append(l2[j])
            j +=1
        print(ret)
        return ret

    def mergeSort(self, array: [int]) -> [int]:
        if len(array) > 1:
            mid = len(array) // 2
            l1 = array[:mid]
            l2 = array[mid:]
            return self.mergeSorted(self.mergeSort(l1), self.mergeSort(l2))
        return array