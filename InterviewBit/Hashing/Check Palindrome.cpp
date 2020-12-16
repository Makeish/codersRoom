int Solution::solve(string A) {
    
    map < char , int > mp ;
    
    for(int i = 0 ; i < A.length() ; ++i) mp[A[i]]++ ;
    
    int cnt = 0 ;
    
    for(auto x:mp) if(x.second & 1) cnt++ ;
    
    if(cnt > 1) return 0 ;
    else return 1 ;
}
