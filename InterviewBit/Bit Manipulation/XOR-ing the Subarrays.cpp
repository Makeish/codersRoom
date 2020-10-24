int Solution::solve(vector<int> &A) {
    
    int n = A.size() , xori = 0 ;
    
    if(n % 2 == 0) return 0 ;
    
    for(int i = 0 ; i < A.size() ; i += 2) xori ^= A[i] ;
    
    return xori ; 
}
