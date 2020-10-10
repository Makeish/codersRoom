vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    for(int i = 0 ; i < mv.size() ; i += k)
    {
        int start = i , end = min(i + k - 1, n - 1) ;
        
        while(start < end) {
            swap(mv[start++] , mv[end--]) ; 
        }
    }
    
    return mv ; 
    
}