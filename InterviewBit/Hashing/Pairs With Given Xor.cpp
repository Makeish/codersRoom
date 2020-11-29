int Solution::solve(vector<int> &a, int b) {
    
    int cnt = 0 , n = a.size();
    
    sort(a.begin() , a.end()) ;
    
    for(int i = 0 ; i < n ; ++i) {
        if(binary_search(a.begin()+ i + 1 , a.end() , b^a[i])) {
            cnt++ ;
        }
    }
    
    return cnt ;
    
}
