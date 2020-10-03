int Solution::maxSubArray(const vector<int> &A) {
    int sum = 0 , maxi = INT_MIN;
    
    for(int i = 0 ; i < A.size() ; ++i) {
        sum += A[i] ;
        
        maxi = max(maxi , sum) ; 
        
        if(sum < 0) {
            sum = 0 ;
        }
    }
    
    if(maxi == INT_MIN) {
        return *max_element(A.begin() , A.end()) ;
    }
    else {
        return maxi ; 
    }
    
}
