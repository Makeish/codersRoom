int Solution::solve(vector<int> &a) {
    
    int n = a.size() , count = 0 ;
    
    int oddSum = 0 , evenSum = 0 , odd[n] = {} , even[n] = {} ;
    
    for(int i = 0 ; i < a.size() ; ++i) {
        
        if(i & 1) oddSum += a[i] ;
        else evenSum += a[i] ; 
        
        odd[i] = oddSum ;
        even[i] = evenSum ; 
    }
    
    for(int i = 0 ; i < a.size() ; ++i) {
        
        int a = odd[n - 1] - odd[i] ;
        
        int b = even[n - 1] - even[i] ;
        
        if(i == 0 and a == b) count++ ;
        else if(b + odd[i - 1] == a + even[i - 1]) count++ ;
    }
    
    return count ; 
}
