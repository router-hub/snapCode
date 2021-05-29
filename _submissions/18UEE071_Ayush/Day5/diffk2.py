class Solution:
	# @param A : list of integers
	# @param B : integer
	# @return an integer
    def diffPossible(self, arr, k):
        hashset = set()   
        l = len(arr)
        if(l==0): return 0

        for x in arr:
            req = (x-k)
            req2 = k+x
            if(req in hashset or req2 in hashset):
                return 1
            hashset.add(x)
        return 0