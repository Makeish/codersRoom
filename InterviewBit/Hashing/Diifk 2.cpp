int Solution::diffPossible(const vector<int> &a, int k) {
    
    unordered_map < int , int > mp ;
    
    for(int i = 0 ; i < a.size() ; ++i) {
        if(mp[a[i] - k] or mp[k + a[i]]) return 1 ;
        mp[a[i]]++ ; 
    }
    
    return 0 ;
}
