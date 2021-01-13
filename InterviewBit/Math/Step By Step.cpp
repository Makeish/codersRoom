int Solution::solve(int A) {
    
    A = abs(A) ;
    
    int sum = 0 , step_count = 0 ;
    
    while((sum < A) or ((sum - A) & 1)) {
        step_count++ ;
        sum += step_count ;
    }
    
    return step_count ;
}
