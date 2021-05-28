#include <bits/stdc++.h>
using namespace std;

void computeLPSArray(string pat, vector<int> lps)
{
    int M = lps.size();
    int len = 0;
    lps[0] = 0;

    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int KMPSearch(string pat, string txt)
{
    int M = pat.size();
    int N = txt.size();

    vector<int> lps(M, 0);

    computeLPSArray(pat, lps);

    int i = 0;
    int j = 0;
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }

        if (j == M)
        {
            return i - j;
            j = lps[j - 1];
        }

        else if (i < N && pat[j] != txt[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return -1;
}

class Solution
{
private:
    /* data */
public:
    Solution(/* args */);
    ~Solution();
    int strStr(const string A, const string B);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

int Solution::strStr(const string A, const string B)
{
    return KMPSearch(B, A);
}
// Driver program to test above function
int main()
{
    char txt[] = "ABABDABACDABABCABAB";
    char pat[] = "ABABCABAB";
    KMPSearch(pat, txt);
    return 0;
}