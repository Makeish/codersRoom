int Solution::removeElement(vector<int> &a, int k) {
    
    int count = 0 ;
    
    for(int i = 0 ; i < a.size() ; ++i) {
        if(a[i] != k) {
            swap(a[i] , a[count]) ;
            count++ ;
        }
    }
    
    return count ;
}
