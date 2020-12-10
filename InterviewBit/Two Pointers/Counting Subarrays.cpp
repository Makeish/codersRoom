

    int Solution::solve(vector<int> &a, int b) {
        
        int ans = 0 , n = a.size() ;
        
        for(int i = 0 ; i < n ; ++i) {
            
            if(a[i] < b) {
                
                int sum = 0 ;
                
                for(int j = i ; j < n ; ++j) {
                    
                    sum += a[j] ;
                    
                    if(sum < b) ans++ ;
                    else break ;
                }
            }
        }
        return ans ;
    }

