int immediateSmaller(int a[], int n, int x)
{
    int ans = -1 ;
    
    for(int i = 0 ; i < n ; ++i) {
        if(a[i] < x and a[i] > ans) {
            ans = a[i] ;
        }
    }
    
    return ans ; 
    
}