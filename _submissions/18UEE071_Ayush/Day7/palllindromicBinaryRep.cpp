#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define getT() \
    int t;     \
    cin >> t;  \
    while (t--)
#define lli long long int
#define pii pair<int, int>
#define endl '\n'
#define printArr(arr)     \
    for (auto x : arr)    \
        cout << x << " "; \
    cout << endl;
#define printHashmap(hashmap)                                  \
    for (auto it = hashmap.begin(); it != hashmap.end(); it++) \
    {                                                          \
        cout << it->first << " " << it->second << endl;        \
    }
#define print2DArray(arr)     \
    for (auto x : arr)        \
    {                         \
        for (auto c : x)      \
            cout << c << " "; \
        cout << endl;         \
    }

// _______________________________________________________________________________________________________________________________________________________________________________
// _______________________________________________________________________________________________________________________________________________________________________________
// _______________________________________________________________________________________________________________________________________________________________________________

// bool isPallin(unsigned long long int n)
// {
//     string s = "";
    
//     while(n)
//     {
//         if(n&1) s+="1";
//         else s+="0";
//         n=n>>1;
//     }
//     string temp = s;
//     reverse(s.begin(), s.end());
//     return temp == s;
// }
// int Solution::solve(int k) 
// {
//     int count = 0;
    
//     unsigned long long int i = 1;
    
//     while(count<k)
//     {
//         if(isPallin(i))
//         {
//             count++;
//         }
//         i++;
//     }
//     return --i;
// }

class Solution
{
    public:
    int solve(int k);
};

int bin2num(string s)
{
    int powerOf2 = 0;
    int sum = 0;

    reverse(s.begin(), s.end());

    for(auto x:s)
    {
        if(x == '1')
        {
            sum+=pow(2, powerOf2);
        }
        powerOf2++;
    }

    return sum;
}

int Solution::solve(int k)
{
    if(k == 1)
        return 1;
    
    queue<string> q;
    q.push("11");
    k--;
    while (!q.empty())
    {
        auto curr = q.front();
        q.pop();

        k--;
        if(!k) return bin2num(curr);

        int l = curr.size();

        if(l%2 == 0) // if length is even then I should insert both 0 and 1 in the middle
        {
            string temp1 = curr, temp2 = curr;
            temp1.insert((int)l/2, "0");
            temp2.insert((int)l/2, "1");
            q.push(temp1);
            q.push(temp2);
        }
        else  // if not then i need to insert the middle char next to it
        {
            int mid = (l)/2;
            char midC = curr[mid];
            string midChar = "";
            midChar.push_back(midC);
            curr.insert(mid, midChar);
            q.push(curr);
        }
    }
    return -1;
}


int main()
{
    fast_cin();

    Solution ob;

    cout<<ob.solve(1)<<endl;
    cout<<ob.solve(9)<<endl;
    return 0;
}