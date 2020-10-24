int Solution::singleNumber(const vector<int> &A) {
    int n = A.size() , xori = 0 ;
    
    for(int i = 0 ; i < A.size() ; ++i) xori ^= A[i] ;
    
    return xori ; 
}
