class Solution:
    # @param A : string
    # @return an integer
    def titleToNumber(self, A):
            chars = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
            if(len(A)==1):
                if A in chars:
                    return chars.index(A)+1
            l = len(A)
            t=l-1
            sum_ = 0
            
            for i in range(l):
                sum_ = sum_ + ((26**(t))*(chars.index(A[i])+1))
                t -= 1
            
