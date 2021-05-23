class Solution:
    # @param A : list of integers
    # @return a list of integers
    def plusOne(self, arr):
        
        carry = 1
        
        for i in range(len(arr)-1,-1,-1):
            carry = carry + arr[i]
            if carry == 10:
                arr[i] = 0
                carry = 1
            else:
                arr[i] = carry
                carry = 0
                break
        if carry==1:
            arr.insert(0,1)
        while(arr[0]==0):
            arr = arr[1:]
            
        
        return(arr)