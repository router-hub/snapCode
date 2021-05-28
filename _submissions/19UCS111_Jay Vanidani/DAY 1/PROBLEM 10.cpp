/*
DAY-1:
PROBLEM 10:COLORFUL NUMBER
LINK:https://www.interviewbit.com/problems/colorful-number/
*/
int Solution::colorful(int A)
{
    vector<int> num;
    while(A!=0)
    {
        num.push_back(A%10);
        A=A/10;
    }
    reverse(num.begin(),num.end());
    int n=num.size();
    unordered_set<int> st;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int product=1;
            for(int k=i;k<=j;k++)
            {
                product*=num[k];
            }
            if(st.find(product)!=st.end())
            {
                return 0;
            }
            st.insert(product);
        }
    }
    return 1;
}
