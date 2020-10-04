vector<vector<int> > Solution::solve(int n) {
    vector < vector < int > > b ; 
    
    for(int i = 0 ; i < n ; ++i) {
        
        vector < int > m ;
        
        for(int j = 0 ; j <= i ; ++j) {
            if((j == 0) or (i == j)) {
                m.push_back(1) ;
            }
            else {
                m.push_back(b[i-1][j] + b[i-1][j-1]) ;
            }
        }
        
        b.push_back(m) ; 
    }
    
    return b ; 
}
