int Solution::trap(const vector<int> &a) {
    
    int n = a.size() ;
    
    int l[n] , r[n] , ans = 0 ;
    
    l[0] = a[0] , r[n - 1] = a[n - 1] ;
    
    for(int i = 1 ; i < n ; ++i) l[i] = max(l[i - 1] , a[i]) ;
    for(int i = n - 2 ; i >= 0 ; --i) r[i] = max(r[i + 1] , a[i]) ;
    
    for(int i = 1 ; i < n - 1 ; ++i) ans += min(l[i] , r[i]) - a[i] ;
    
    return ans ;
}
