int transitionPoint(int arr[], int n) {
    auto pos = lower_bound(arr , arr + n , 1) - arr ;
    
    if(pos == n) {
        return -1 ;
    }
    
    return pos ; 
}