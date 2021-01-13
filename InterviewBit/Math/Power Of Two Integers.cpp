int Solution::isPower(int n) {
    
    if(n == 1) return 1 ;
        
    for(int i = 2 ; i <= n ; i++) {
           
        int p = n ; 
        
        while(p % i == 0) {
            
            p /= i ;
        }
        
        if(p == 1) return 1 ;
    } 
    return 0 ;
}
