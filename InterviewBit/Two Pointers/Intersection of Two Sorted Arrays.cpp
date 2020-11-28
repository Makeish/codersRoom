vector<int> Solution::intersect(const vector<int> &a, const vector<int> &b) {
    
    vector < int > k ;
    
    int n = a.size() , m = b.size() ; 
    
    int i = 0 , j = 0 ;
    
    while(i < n and j < m) {
        
        if(a[i] == b[j]) {
            k.push_back(a[i]) ;
            i++ ;
            j++ ;
        }
        else if(a[i] > b[j]) {
            j++ ;
        }
        else{
            i++ ;
        }
    }
    return k ; 
}
