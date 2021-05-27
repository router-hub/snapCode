class Solution:
    # @param A : list of list of integers
    # @param B : integer
    # @return an integer
    def searchMatrix(self, arr, k):
        rows = len(arr)
        cols = len(arr[0])

        ptr1 = 0
        ptr2 = cols-1

        while(ptr1<rows and ptr2<cols and ptr1>=0 and ptr2>=0):
            if(arr[ptr1][ptr2] == k):
                return 1
            
            if(arr[ptr1][ptr2] > k):
                ptr2-=1
            else:
                ptr1-=-1
        return 0
        