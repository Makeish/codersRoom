vector <int> countDistinct (int a[], int n, int k)
{
    
    vector < int > ans ;
    
    unordered_map < int , int > mp ;
    
    for(int i = 0 ; i < k ; ++i) {
        mp[a[i]]++ ;
    }
    
    ans.push_back(mp.size()) ; 
    
    for(int i = k ; i < n ; ++i) {
        if(mp[a[i -k]] > 1) {
            mp[a[i-k]]-- ;
        }
        else
        mp.erase(a[i - k]) ; 
        
        mp[a[i]]++ ;
        
        ans.push_back(mp.size()) ;
    }
    
    return ans ;

}