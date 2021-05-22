class Solution:
    # @param A : tuple of integers
    # @param B : integer
    # @return a list of integers
    def twoSum(self, arr, k):
        hashmap = {}

        for i in range(len(arr)):
            curr = arr[i]
            req = k - curr

            if req in hashmap.keys():
                return [hashmap[req], i+1]
            elif not req in hashmap.keys():    
                hashmap[curr] = i+1

        return []

        
