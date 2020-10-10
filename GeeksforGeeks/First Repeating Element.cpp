int firstRepeated(int a[], int n) {
    
    map < int , int > mp ;
    
    for(int i = 0 ; i < n ; ++i) {
        mp[a[i]]++ ;
    }
    
    for(int i = 0 ; i < n ; ++i) {
        if(mp[a[i]] > 1) {
            return i+1 ; 
        }
    }
    
    return -1 ; 
}