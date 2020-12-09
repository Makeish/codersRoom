int Solution::solve(vector<int> &a, int b) {
    
    int n = a.size() ;
    
    int low = 0 , high = n - 1 , ans = -1 ;
    
    while(low <= high) {
        
        int mid = low + (high - low)/2 ;
        
        if(a[mid] <= b) {
            ans = mid ;
            low = mid + 1 ;
        }
        else {
            high = mid - 1 ;
        }
    }
    
    return ans + 1 ;
}
