int Solution::singleNumber(const vector<int> &a) {
    
    int result = 0 , x , sum , n = a.size();
    
    for(int i = 0 ; i < 32 ; ++i) {
        
        sum = 0 , x = 1 << i ;
        
        for(int j = 0 ; j < n ; ++j) 
            if(a[j] & x) sum ++ ; 
            
        if(sum % 3 != 0) result |= x ;

    }
    
    return result ;
}
