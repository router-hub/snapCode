int gcd(int a, int b) 
{ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   
    // base case 
    if (a == b) 
        return a; 
   
    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 
int Solution::solve(vector<string> &A) {
 int n=A.size();
    long long int arr[n];  //to store the time
    for(int i=0;i<A.size();i++)  //Finding time for each string when it becomes same as original 
    {
        long long int val=1;
        long long int sum=1;
        int len=A[i].length();
        while(sum%len!=0)    // string starts to repeat at the time 't' when (1+2+....+t)%length==0 you can easily observe this through multiple examples
        {
            val++;
            sum+=val;
        }
        arr[i]=val;
    }
    long long int ans=1;
    long long int M=1000000007;
    for(int i=0;i<n;i++)   // Calculating LCM
    {
        for(int j=i+1;j<n;j++)
        {   
            arr[j]=arr[j]/gcd(arr[i],arr[j]);
        }
        ans=((ans%M)*(arr[i]%M))%M;
    }
    return (ans)%M;
}
