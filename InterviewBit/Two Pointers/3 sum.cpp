int Solution::threeSumClosest(vector<int> &a, int x) {
    
    int n = a.size() ;
    
    long long final_ans = 1e17 ;
    
    sort(a.begin() , a.end()) ;
    
    for(int i = 0 ; i  < n - 2 ; ++i) {
        
        int p = i + 1 , q = n - 1 ; 
        
        while(p < q) {
            
            long long int sum = a[i] + a[p] + a[q] ;
            if(abs(sum - x) < abs(final_ans - x)) {
                final_ans = sum ;
            } 
            
            if(sum > x) q-- ;
            else p++ ;
        }
    }
    
    // if(final_ans == 1e17) return -1 ;
    
    return final_ans ;
}
