int Solution::solve(string a) {
     int i = 0 , j = a.length() - 1 , cnt = 0;
    
    while(i < j) {
        if(a[i] != a[j]) {
            
            if(a[i] == a[j - 1]) {
                j--;
                cnt++ ;
            }
            else if(a[i + 1] == a[j]) {
                i++ ;
                cnt++ ; 
            }
            else{
                return 0 ;
            }
        }
        else{
            i++ ;
            j-- ;
        }
        
        if(cnt >= 2) {
            return 0 ;
        }
    }
    
    return 1 ;
}
