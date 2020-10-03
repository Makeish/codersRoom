vector < int > solving(vector < int > a)
{
    int n = a.size() , j = n , i = n - 1 ;
    
    vector < int > b(n+1);
    
    if((a[n-1] + 1) < 10) {
        
        int cnt = 0 ;
        
        a[n-1] += 1 ;
        for(int i = 0 ; i < n ; ++i) {
            if(a[i] == 0) {
                cnt++;
            }
            else {
                break ; 
            }
        }
        
        for(int i = 1 ; i <= cnt ; ++i) {
            for(int j = 0 ; j < a.size() ; ++j) {
                a[j] = a[j+1] ;
            }
            a.pop_back() ; 
        }
        
        return a ;
    }
    else {
        
        b[j] = a[i] + 1 ;
        
        while(true) {
            if(b[j] >= 10) {
                b[j] = b[j] % 10 ;
                i-- ;
                b[j - 1] = a[i] + 1 ;
                j-- ;
            }
            else {
                i-- ;
                j-- ;
                
                while(i >= 0) {
                    b[j--] = a[i--] ; 
                }
                break;
            }
        }
        
        int cnt = 0 ;
        
        for(int i = 0 ; i <= n ; ++i) {
            if(b[i] == 0) {
                cnt++;
            }
            else {
                break ; 
            }
        }
        
        for(int i = 1 ; i <= cnt ; ++i) {
            for(int j = 0 ; j < b.size() ; ++j) {
                b[j] = b[j+1] ;
            }
            b.pop_back() ; 
        }
        
        return b ; 
    }
}