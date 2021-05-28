class Solution:
    # @param A : integer
    # @param B : integer
    # @param C : list of integers
    # @return an integer
    def isPossible(self, arr, limitCap, painters):
        count = 1
        currentSum = 0
        ptr = 0
        l = len(arr)

        while(ptr<l):
            currentSum+=arr[ptr]

            if(currentSum>limitCap):
                currentSum=0
                count-=-1

                if(count> painters):
                    return False
            else:
                ptr-=-1
        
        return True

    def allocateBooksStyle(self, painters, cost, arr):
        start = 0
        end = sum(arr)
        ans = 10000000000

        while(start<=end):
            mid = start + (end-start)//2

            if(self.isPossible(arr, mid, painters)):
                ans = min(ans, mid)
                end = mid-1
            else:
                start = mid+1
        return ans*cost


    def paint(self, painters, cost, arr):
        mod = 10000003
        return self.allocateBooksStyle(painters, cost, arr)%mod


s = Solution();
print(s.paint(2,5,[1,10]))


