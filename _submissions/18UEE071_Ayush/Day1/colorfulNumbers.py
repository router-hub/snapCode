# April 20, 2020 01:01
class Solution:
    # @param A : integer
    # @return an integer
    def product(self,n):
        pr=1
        for i in n:
            pr*=int(i)
        return pr
    def colorful(self, n):
        n = str(n)
        arr=[]
        dict={}
        l = len(n)
        
        for i in range(1,l+2):
            for j in range(0,l-i+1):
                arr.append(n[j:j+i])
        
        for i in arr:
            if(self.product(i) in dict.keys()):
                return(0)
            else:
                dict[self.product(i)]=1
        return(1)