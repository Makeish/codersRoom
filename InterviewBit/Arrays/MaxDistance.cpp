int Solution::maximumGap(const vector<int> &a) {
    
    int n = a.size()  ;
    
    int maxi = INT_MIN;

    vector<pair<int,int> > v;

    for(int i = 0 ; i < n ; i++)
        v.push_back({a[i],i});
    
    sort(v.begin(),v.end());

    int maximum  = INT_MIN;
    
    for(int i = n - 1 ; i >= 0; i--){
        
        maximum = max(maximum,v[i].second);
        
        maxi = max(maxi,maximum-v[i].second);
    }

    return maxi;
    
}
