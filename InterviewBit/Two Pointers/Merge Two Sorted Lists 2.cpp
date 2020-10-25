void Solution::merge(vector<int> &a, vector<int> &b) {
    
    int n = a.size() , m = b.size() ; 
    a.resize(n+m) ;
    
    int k = a.size() - 1 , i = n - 1 , j = m - 1 ;
    
    while(i >= 0 and j >= 0) {
        if(a[i] >= b[j]) {
            a[k--] = a[i--] ; 
        }
        else {
            a[k--] = b[j--] ;
        }
    }
    
    while(i >= 0) a[k--] = a[i--] ;
    
    while(j >= 0) a[k--] = b[j--] ;
    
}
