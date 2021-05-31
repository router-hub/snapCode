int Solution::colorful(int n) {
    vector<int> dig;
    int k = n;
    while(k != 0) {
        dig.push_back(k % 10);
        k /= 10;
    }
    reverse(dig.begin(), dig.end());
    unordered_set<int> us;
    
    for(int i=0; i<dig.size(); ++i) {
        int mult = 1;
        for(int j=i; j<dig.size(); ++j) {
            mult *= dig[j];
            if(us.find(mult) != us.end()) {
                return 0;
            }
            else {
                us.insert(mult);
            }
        }
    }
    return 1;
}
