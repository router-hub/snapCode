/*
Given a positive integer A, return an array of strings with all the integers from 1 to N.
But for multiples of 3 the array should have “Fizz” instead of the number.
For the multiples of 5, the array should have “Buzz” instead of the number.
For numbers which are multiple of 3 and 5 both, the array should have “FizzBuzz” instead of the number.
*/

vector<string> Solution::fizzBuzz(int A) {
    vector<string>v;
    if(A<=0) return v;
    for(int i=0;i<A;i++)
    {  if(((i+1)%3==0) && ((i+1)%5==0))
     v.push_back("FizzBuzz");
        else if((i+1)%3==0)
     v.push_back("Fizz");
     else if((i+1)%5==0)
     v.push_back("Buzz");
    
        else
        { int x=i+1;
        v.push_back(to_string(x));}
    }
    return v;
}
