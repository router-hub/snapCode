class Solution:
    # @param A : list of integers
    # @return an integer
    def getNextGreater(self, arr, x, start):
        
        end = len(arr) - 1
        ans = -1

        while(start<=end):
            mid = start + (end-start)//2

            if(arr[mid] < x):
                start = mid+1
                ans = mid
            else:
                end = mid-1
        return ans

    def nTriang(self, arr):
        arr = sorted(arr)
        count = 0
        mod = 1000000007
        for i in range(len(arr)-2):
            for j in range(i+1, len(arr)-1):
                sumOfTwoSides = arr[i] + arr[j]
                greaterSide = self.getNextGreater(arr, sumOfTwoSides, j+1)
                # print(greaterSide)
                if(greaterSide == -1):
                    continue
                count+=(greaterSide - j )
        return count%mod


arr = [1, 1, 1, 2, 2]
ob = Solution()
print(ob.nTriang(arr))
