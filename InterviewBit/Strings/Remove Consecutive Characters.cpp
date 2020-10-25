string Solution::solve(string a, int B) {
    
    string b = "" , ans = "" ;
    
    int cnt = 0 ;
    
    for(int i = 0 ; i < a.length() ; ++i) {
        
        b += a[i] ;
        
        while(i < a.length() - 1 and a[i] == a[i + 1]) {
            cnt++ ;
            i++ ;
            b += a[i] ;
        }
        
        cnt += 1 ;
        
        if(cnt != B) {
            ans += b ;
        }
        
        cnt = 0 ;
        
        b = "" ; 
    }
    
    return ans ; 
}
