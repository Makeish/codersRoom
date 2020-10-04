vector<int> Solution::getRow(int n) {
    
    n = n + 1 ;
    
    vector < int > b ;
    
    int c = 1 ;
    
    for(int i = 1 ; i <= n ; ++i) {
        b.push_back(c) ;
        c = c * (n - i) / i ;
    }
    
    return b ;
}
