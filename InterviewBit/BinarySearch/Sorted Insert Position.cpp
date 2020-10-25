int Solution::searchInsert(vector<int> &a, int b) {
    
    int n = a.size() ;
    
    int ans = -1 ;
    
    int low = 0 , high = n - 1 ;
    
    while(low <= high) 
    {
        int mid = low + (high - low) / 2 ;
        
        if(a[mid] == b) return mid ;
        else if(a[mid] > b) {
            ans = mid ;
            high = mid - 1 ;
        }
        else {
            low = mid + 1 ;
        }
    }
    
    if(ans == -1) ans = n ; 
    
    return ans ;
}
