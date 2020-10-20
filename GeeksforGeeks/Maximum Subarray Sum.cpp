int maxSubArray(vector<int> array) {
    
    int sum = 0 , maxi = INT_MIN ;
    
    for(int i = 0 ; i < array.size() ; ++i) {
        
        sum += array[i] ;
        maxi = max(maxi , sum) ;
        
        if(sum < 0) sum = 0 ; 
    }
    
    return maxi ; 
}