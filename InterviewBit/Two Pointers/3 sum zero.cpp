vector<vector<int> > Solution::threeSum(vector<int> &a) {
    
    vector < vector < int > > pika ;
    
    set < vector < int > > s ; 
    
    int index = 0 , n = a.size() ;
    
    sort(a.begin() , a.end()) ;
    
    for(int i = 0 ; i  < n - 1 ; ++i) {
        
        if(i > 0 and a[i] == a[i - 1]) continue ;
        
        int p = i + 1 , q = n - 1 ; 
        
        while(p < q) {
            
            long long int sum = (long long)a[i] + (long long)a[p] + (long long)a[q] ;
            
            if(sum == 0) {
                s.insert({a[i] , a[p] , a[q]}) ;
                q-- ; 
            }
            else if(sum > 0) q-- ;
            else p++ ;
        }
    }
    
    for(auto i = s.begin();i!=s.end();i++)
        pika.push_back(*i);
    
    return pika; 
}
