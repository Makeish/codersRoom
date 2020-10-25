int Solution::solve(string A) {
    
    int openCount = 0 , closedCount = 0 , e = 0 ;
    
    for(int i = 0 ; i < A.length() ; ++i) {
        if(A[i] == '(') openCount++ ;
        else {
            if(openCount > closedCount) {
                closedCount++ ;
            }
            else {
                e++ ; 
            }
        }
    }
    
    return abs(openCount - closedCount) + e ; 
    
}
