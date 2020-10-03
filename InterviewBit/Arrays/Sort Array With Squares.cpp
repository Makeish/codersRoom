vector<int> Solution::solve(vector<int> &a) {
    vector < int > ans(a.size()) ;
    
    int j = a.size() - 1 ; 
    
    int start = 0 , end = a.size() - 1 ; 
    
    while(start <= end) {
        
        int p = a[start]*a[start] ;
        
        int q = a[end]*a[end] ; 
        
        if(p >= q) {
            ans[j] = p ;
            start++ ;
        }
        else {
            ans[j] = q ;
            end-- ; 
        }
        
        j-- ; 
    }
    
    return ans ; 
}
