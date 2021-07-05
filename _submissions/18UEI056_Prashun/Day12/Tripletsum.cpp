int Solution::solve(vector<string> &arr) {
   int n = arr.size(), i;
    vector<float> v;
    for (i = 0; i < n; i++) {
        v.push_back(stof(arr[i]));
    }
    float a = v[0], b = v[1], c = v[2];

    float mx = 0;
    for (i = 3; i < n; i++) {
        if (a + b + c < 2 && a + b + c > 1)
            return 1;
        else if (a + b + c > 2) {
            float x=max(a,max(b,c));
            if(x==a)a=v[i];
            else if(x==b) b=v[i];
            else c=v[i];
        } else {
            if (a < b && a < c)
                a = v[i];
            else if (b < a && b < c)
                b = v[i];
            else
                c = v[i];
        }
    }
    if (a + b + c > 1 && a + b + c < 2)
        return 1;
    else
        return 0;
}
