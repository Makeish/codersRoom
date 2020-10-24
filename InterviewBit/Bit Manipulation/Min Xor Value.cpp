int Solution::findMinXor(vector<int> &A) {
    
    sort(A.begin() , A.end()) ;
    
    int xori = INT_MAX ;
    
    for(int i = 1 ; i < A.size() ; ++i) xori = min(xori , A[i]^A[i - 1]) ;
    
    return xori ; 
}
