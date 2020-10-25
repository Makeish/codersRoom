int Solution::majorityElement(const vector<int> &a) {
    int res = 0 , count = 1 , n = a.size();
    
    for(int i = 0 ; i < n ; ++i) {
        if(a[i] == a[res]) 
        count++ ;
        else
        count-- ;
        
        if(count == 0) {
            res = i ;
            count = 1 ; 
        }
    }
    
    return a[res] ; 
}
