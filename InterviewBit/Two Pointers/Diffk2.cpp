int Solution::diffPossible(vector<int> &a, int k) {
    if(a.size() == 0 or a.size() == 1) return 0 ; 
    
    int start = 0 , end = 1 , n = a.size(); 
    
    while(start < n and end < n)
    {
        if(end != start and a[end] - a[start] == k) return 1 ;
        else if(a[end] - a[start] > k) start++ ;
        else end++ ;
    }
    return 0 ; 
}
