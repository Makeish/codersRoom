vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    unordered_map < int , int > mp1 , mp2 , mp3;
    map < int , int > mp ; 
    
    vector < int > ans ;
    
    for(int i = 0 ; i < A.size() ; ++i) {
        if(!mp1[A[i]])
        mp[A[i]]++ ; 
        
        mp1[A[i]]++ ;
    }
    for(int i = 0 ; i < B.size() ; ++i) {
        if(!mp2[B[i]])
        mp[B[i]]++ ; 
        
        mp2[B[i]]++ ;
    }
    for(int i = 0 ; i < C.size() ; ++i) {
        if(!mp3[C[i]])
        mp[C[i]]++ ; 
        mp3[C[i]]++ ;
    }
    
    for(auto x:mp) {
        if(x.second >= 2) ans.push_back(x.first) ;
    }
    
    return ans ;
}
