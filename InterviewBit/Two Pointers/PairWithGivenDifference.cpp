int Solution::solve(vector<int> &a, int k) {
    sort(a.begin() , a.end()) ;
    
    int left = 0 , right = 1 , n = a.size() ;
    
    while(left < n and right < n){
        if(right != left and a[right] - a[left] == k) return 1 ;
        else if(a[right] - a[left] > k) left++;
        else right++ ;
    }
    
    return 0 ;
}
