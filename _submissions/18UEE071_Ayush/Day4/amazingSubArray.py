class Solution:
    # @param A : string
    # @return an integer
    def solve(self, sd):
        container={'a':0,'e':0,'i':0,'o':0,'u':0,'A':0,'E':0,'I':0,"O":0,'U':0}
        s=0
        for i in range(len(sd)):
            ch = sd[i]
            if ch in container.keys():
                s+=(len(sd)-i)
        
        return(s%10003)

