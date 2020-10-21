int Solution::maxArr(vector<int> &a) {
    int ans = INT_MIN ;
    
    int max1 = INT_MIN , max2 = INT_MIN , max3 = INT_MIN , max4 = INT_MIN ;
    
    int min1 = INT_MAX , min2 = INT_MAX , min3 = INT_MAX , min4 = INT_MAX ;
    
    for(int i = 0 ; i < a.size() ; ++i) {
        
        max1 = max(max1 , a[i] + i ) ; 
        max2 = max(max2 , a[i] - i ) ; 
        max3 = max(max3 , - a[i] + i ) ; 
        max4 = max(max4 , -a[i] - i ) ; 
        
        min1 = min(min1 , a[i] + i ) ; 
        min2 = min(min2 , a[i] - i ) ; 
        min3 = min(min3 , - a[i] + i ) ; 
        min4 = min(min4 , -a[i] - i ) ; 
    
    }
    
    ans = max(max1 - min1 , ans) ; 
    ans = max(max2 - min2 , ans) ; 
    ans = max(max3 - min3 , ans) ; 
    ans = max(max4 - min4 , ans) ; 
    
    return ans ; 
}
