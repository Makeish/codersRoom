vector<int> Solution::solve(vector<int> &a) {
    
    vector < int > ans ;
    
    int n = a.size() ; 
    ans.push_back(a[n - 1]) ;
    
    int max = a[n - 1] ; 
    
    for(int i = n - 2 ; i >= 0 ; i--) {
        if(a[i] > max) {
            max = a[i] ;
            ans.push_back(max) ;
        }
    }
    
    return ans ;
}
