class Solution:
    # @param A : list of integers
    # @return an integer
    def findMinXor(self, arr):
        arr = sorted(arr)
        ans = 1e10
        l = len(arr)

        for i in range(l-1):
            ans = min(ans, arr[i]^arr[i+1])
        return int(ans)
    
ob = Solution()
ob.findMinXor([0,2,5,7])
