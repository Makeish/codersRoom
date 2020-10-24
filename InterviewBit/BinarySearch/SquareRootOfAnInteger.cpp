int squareRoot(int n) 
{
    int low = 1 , high = n , ans = 0 ;
    
    while(low <= high) {
        
        int mid = low + (high - low) / 2 ;
        
        long long int sq = (1ll)*mid*mid ;
        
        if(sq == n) return mid ;
        else if(sq > n) high = mid - 1 ;
        else {
            low = mid + 1 ; 
            ans = mid ;
        }
    }
    
    return ans ; 
}

int Solution::sqrt(int A) {
    return squareRoot(A) ;  
}
