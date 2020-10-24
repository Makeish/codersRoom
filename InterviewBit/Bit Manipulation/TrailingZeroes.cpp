int Solution::solve(int n) {
    int count = 0 ;
    
    while(n) {
        if(n % 2 == 0) count++ ;
        else break ;
        n >>= 1 ;
    }
    
    return count ;
}
