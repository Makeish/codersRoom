int remove_duplicate(int a[],int N)
{
    int temp[10001] , i = 0 ;
    
    for(int j = 0 ; j < N - 1 ; ) {
        
        temp[i] = a[j] ;
        
        while(a[j] == a[j+1])
        j++ ;
        
        ++i ; 
        ++j ;
    }
    
    if(a[N - 1] != a[N -2]) {
        temp[i] = a[N - 1] ;
        i++ ;
    }
    
    for(int j = 0 ; j < i ; ++j) {
        a[j] = temp[j] ; 
    }
    
    return i ; 
}