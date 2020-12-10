int Solution::maxp3(vector<int> &a) {
    
    int n = a.size() ;
    
    sort(a.begin() , a.end()) ;
    
    int ans1 = a[0]*a[1]*a[2] ;
    
    int ans2 = a[0] * a[1] * a[n - 1] ;
    
    int ans3 = a[0] * a[n - 2] * a[n - 1] ;
    
    int ans4 = a[n - 3] * a[n - 2] * a[n - 1] ;
    
    return max(ans1 , max(ans2 , max(ans3 , ans4))) ;
}
