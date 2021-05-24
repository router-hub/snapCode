/*
Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.
*/
//code
vector<int> Solution::plusOne(vector<int> &A) {
reverse(A.begin(),A.end());
int carry=0;
A[0]+=1;
int sum=0;
for(int i=0;i<A.size();i++)
{ sum=A[i]+carry;
carry=sum/10;
sum=sum%10;
A[i]=sum;
}
if(carry==1) A.push_back(1);
while(A.size()>0 && A[A.size()-1]==0) A.pop_back();

reverse(A.begin(),A.end());

    return A;
}
