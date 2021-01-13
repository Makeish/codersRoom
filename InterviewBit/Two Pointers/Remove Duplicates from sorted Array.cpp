int Solution::removeDuplicates(vector<int> &a) {
    
    int count = 1 ;
    
    for(int i = 1 ; i < a.size() ; ++i) {
        if(a[i] != a[i - 1]) {
            a[count] = a[i] ; 
            count++ ;
        }
    }
    
    return count ;
}
