vector<vector<int> > Solution::fourSum(vector<int> &a, int b) {
    int n = a.size();
map<int, vector<pair<int, int> > > m;
vector<vector<int> > v;
for(int i = 0; i < n-1; i++)
{
    for(int j = i+1; j < n; j++)
    {
        int sum = a[i]+a[j];

        if(m.find(b-sum) != m.end())
        {

            for(int k = 0; k < m[b-sum].size(); k++)
            {
                if(m[b-sum][k].first < i && m[b-sum][k].second != i && m[b-sum][k].second < j)
                {
                    vector<int> temp;
                    temp.push_back(a[m[b-sum][k].first]);
                    temp.push_back(a[m[b-sum][k].second]);
                    temp.push_back(a[i]);
                    temp.push_back(a[j]);
                    sort(temp.begin(), temp.end());
                    if(find(v.begin(), v.end(), temp) == v.end())
                    {
                        v.push_back(temp);
                    }
                }


            }


        }
        
            m[sum].push_back(make_pair(i, j));
        
    }
}


sort(v.begin(), v.end());
return v;
}
