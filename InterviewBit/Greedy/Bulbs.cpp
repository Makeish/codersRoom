int Solution::bulbs(vector<int> &a) {
    int ans = 0 , n = a.size();
    
    if(a.size() == 0) return 0 ;
    
    if(a[0] == 0) ans++ ;
    
    for(int i = 1 ; i < n ; ++i) {
        
        if(a[i] != a[i - 1]) ans++ ;
    }
    
    return ans ;
}
