class Solution:
    # @param A : string
    # @return an integer
    def isPalindrome(self, A):
        s = ''
        for x in A:
            if x.isalnum():
                s+= x.lower()
        if s == s[::-1]:
            return 1
        return 0
