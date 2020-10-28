int Solution::solve(vector<int> &a, int k) {
    
    int n = a.size() , sum = 0 , ans = 0 ;
    
    for(int i = n - 1 ; i >= n - k ; --i) sum += a[i] ;
    
    ans = sum ; 
    
    for(int i = 0 ; i < k ; ++i) {
        sum += a[i] - a[n - k + i] ; 
        ans = max(ans , sum) ; 
    }
    
    return ans ;
}
