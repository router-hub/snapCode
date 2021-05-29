class Solution:
    # @param A : list of integers
    # @return an integer
    def maxSpecialProduct(self, arr):
        s=[]
        ans = 0
        for i in range(len(arr)):
            while(len(s)>0 and arr[s[-1]] <= arr[i]):
                s.pop()
                if(len(s) > 0):
                    ans = max(ans, s[-1]*i)
            s.append(i)
        if(ans < 0):
            return 0
        return ans%1000000007