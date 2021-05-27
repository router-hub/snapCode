class Solution:
	# @param A : integer
	# @return a strings
    def isMultiple(self, s : str, n):
        return int(s)%n == 0
    def multiple(self, n):
        if(n == 1): return "1"
        if(n == 0): return "0"
        q = []
        q.append("1")
        hashset = set()
        hashset.add("1")
        while(len(q) != 0):
            l = len(q)

            for i in range(l):
                curr = q[0]
                q.pop(0)
                val1 = curr + "0"
                val2 = curr + "1"

                if(self.isMultiple(val1, n)):
                    return val1
                if(self.isMultiple(val2, n)):
                    return val2
                if(not val1 in hashset):
                    q.append(val1)
                    hashset.add(val1)
                if(not val2 in hashset):
                    q.append(val2)
                    hashset.add(val2)
        return "-1"
        

ob = Solution()

print(ob.multiple(4556))