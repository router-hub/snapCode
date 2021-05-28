class Solution:
	# @param A : string
	# @param B : string
	# @return an integer
    def numDistinct(self, s1, s2):
        l1 = len(s1)
        l2 = len(s2)

        dp=[[0 for i in range(l2+1)]for j in range(l1+1)]

        for i in range(1,l1+1):
            dp[i][0] = 1
       
        # for i in dp:print(i)

        for i in range(1,l1+1):
            for j in range(1, l2+1):
                if(s1[i-1] == s2[j-1]):
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j]
                else:
                    dp[i][j] = dp[i-1][j]
        
        return dp[l1][l2]
    
ob = Solution()

print(ob.numDistinct("aaaababbababbaabbaaababaaabbbaaabbb","bbababa"))

