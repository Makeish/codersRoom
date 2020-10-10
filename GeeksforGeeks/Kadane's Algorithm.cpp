int maxSubarraySum(int arr[], int n){
    
    int sum = 0 , max_so_far = 0 ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        sum += arr[i] ;
        
        max_so_far = max(max_so_far , sum) ;
        
        if(sum < 0) {
            sum = 0 ;
        }
    }
    
    return max_so_far ; 
    
}