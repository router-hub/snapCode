class Solution:
    # @param A : integer
    # @return a list of strings
    def fizzBuzz(self, A):
        arr=[]
        for i in range(A):
            if(i+1)%15==0:
                arr.append('FizzBuzz')
            elif(i+1)%3==0:
                arr.append('Fizz')
            elif (i+1)%5 == 0:
                arr.append('Buzz')
            else:
                arr.append(i+1)
        return arr