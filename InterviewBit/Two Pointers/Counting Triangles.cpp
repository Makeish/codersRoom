int Solution::nTriang(vector<int> &a) {
    
    int n = a.size() , cnt = 0 ; 
    
    sort(a.begin() , a.end()) ;
    
    for(int i = n - 1 ; i >= 1 ; --i) {
        
        int j = 0 , k = i - 1 ;
        
        while(j < k) {
            
            if(a[j] + a[k] > a[i]) {
                cnt += (k - j) ;
                k-- ;
            }
            else {
                ++j ;
            }
            
            cnt = cnt % 1000000007 ;
        }
    }
    
    return cnt ;
}
