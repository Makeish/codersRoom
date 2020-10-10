int equilibriumPoint(long long a[], int n) {

    long long pre[n] ;
    
    pre[0] = a[0] ;
    
    for(int i = 1 ; i < n ; ++i) {
        pre[i] = a[i] + pre[i - 1] ;
    } 
    
    for(int i = 0 ; i < n ; ++i) {
        if(i == 0 or i == n - 1) {
            if(pre[n - 1] - a[i] == 0) {
                return i+1 ;
            }
        }
        else if(pre[i - 1] == pre[n - 1] - pre[i]) {
            return i+1 ; 
        }
    }
    
    return -1;
}