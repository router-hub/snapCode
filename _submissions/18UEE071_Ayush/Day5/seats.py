class Solution:
	# @param A : string
	# @return an integer
    def seats(self, arr):
        MOD = 10000003
        l = len(arr)
        if(l == 0):
            return 0
        hashset = set()
        indicesOccupied = []
        for i in range(l):
            if(arr[i] == 'x'):
                indicesOccupied.append(i)
                hashset.add(i)
        
        l2 = len(indicesOccupied)
        if(l2 == 0):
            return 0
        midPoint = l2//2
        medianIndex = indicesOccupied[midPoint]

        count = 0
        ptr1 = medianIndex-1
        ptr2 = medianIndex+1

        ptr3 = midPoint-1
        ptr4 = midPoint+1

        while(ptr3>=0):
            currentX = indicesOccupied[ptr3]
            if(ptr1<0):
                break
            while(ptr1 in hashset and ptr1>currentX):
                ptr1-=1
            count+=(abs(currentX-ptr1))
            hashset.remove(currentX)
            hashset.add(ptr1)
            ptr3-=1
        
        while(ptr4<len(indicesOccupied)):
            currentX = indicesOccupied[ptr4]
            if(ptr2 >= l):
                break
            while(ptr2 in hashset and ptr2<currentX):
                ptr2+=1
            count+=(abs(currentX-ptr2))
            hashset.remove(currentX)
            hashset.add(ptr2)
            ptr4+=1
        
        return count%MOD

ob = Solution()
print(ob.seats('....x..xx...x..'))
            

