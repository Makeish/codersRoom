int findMissing(int a[], int n) { 
    
    unordered_map < int , int > mp ; 
    
    for(int i = 0 ; i < n ; ++i) {
        if(a[i] > 0) {
            mp[a[i]]++ ; 
        }
    }
    
    for(int i = 1 ; ; ++i) {
        
        if(!mp[i]) {
            return i ; 
        } 
    }
    
}