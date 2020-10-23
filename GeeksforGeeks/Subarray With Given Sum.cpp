vector<int> subarraySum(int a[], int n, int s){
    
    vector < int > arr ; 
    
    int sum = 0 , curr_sum = 0 , start = 0 , aux_start = 0 , end ;
    
    for(int i = 0 ; i <= n ; ++i) {
        
        while(curr_sum > s and start < i - 1) {
            curr_sum -= a[start] ;
            start++ ;
        }
        
        if(curr_sum == s) {
            
            arr.push_back(start + 1) ;
            
            arr.push_back(i) ;
            
            return arr ;
        }
        
        if(i < n)
        curr_sum += a[i] ;
        
    }
    
    arr.push_back(-1) ;
    return arr ;  
    
}