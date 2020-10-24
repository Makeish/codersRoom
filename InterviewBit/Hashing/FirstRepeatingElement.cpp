int Solution::solve(vector<int> &a) {
    map < int , int > mp ;
    
    for(int i = 0 ; i < a.size() ; ++i) {
        mp[a[i]]++ ;
    }
    
    for(int i = 0 ; i < a.size() ; ++i) {
        if(mp[a[i]] >= 2) {
            return a[i] ; 
        }
    }
    
    return -1 ;
}
