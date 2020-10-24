int firstOccurenceOfX(vector < int > a , int n , int x)
{
    int low = 0 , high = n - 1 , ans = -1 ;
    
    while(low <= high) {
        
        int mid = low + (high - low) / 2 ;
        
        if(a[mid] >= x) {
            if(a[mid] == x) ans = mid ;
            high = mid - 1 ;
        }
        else {
            low = mid + 1 ;
        }
    }
    
    return ans ;
}

int LastOccurenceOfX(vector < int > a , int n , int x)
{
    int low = 0 , high = n - 1 , ans = -1 ;
    
    while(low <= high) {
        
        int mid = low + (high - low) / 2 ;
        
        if(a[mid] <= x) {
            if(a[mid] == x) ans = mid ;
            low = mid + 1 ;
        }
        else {
            high = mid - 1 ;
        }
    }
    
    return ans ;
}

vector<int> Solution::searchRange(const vector<int> &a, int x) {
    
    vector < int > ans ;
    
    int n = a.size() ; 
    
    int ans1 = firstOccurenceOfX(a , n , x) ;
    
    int ans2 = LastOccurenceOfX(a , n , x) ;
    
    ans.push_back(ans1) ;
    ans.push_back(ans2) ; 
    
    return ans ;
}
