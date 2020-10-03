int Solution::reverse(int A) {
    
    long long int p = 0 ;
    
    if(A > INT_MAX or A < INT_MIN) {
        return 0 ;
    }
    
    while(A != 0) {
        p =  p * 10 + (A % 10) ;
        A /= 10 ; 
    }
    
    if(p > INT_MAX or p < INT_MIN) {
        return 0 ;
    }
    
    return p ;
    
}
