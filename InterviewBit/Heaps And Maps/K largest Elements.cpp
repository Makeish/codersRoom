vector<int> Solution::solve(vector<int> &a, int k) {
    
    int count = 0 ;
    
    map < int , int , greater<int> > mp ; 
    
    vector < int > ans ;
    
    for(int i = 0 ; i < a.size() ; ++i) {
       mp[a[i]]++ ;
    }
    
    for(auto x:mp) {
        if(count == k) return ans ;
        else {
            while(x.second--)
            {
                ans.push_back(x.first) ;
                count++ ;
                if(count == k) return ans ;
            }
        }
    }
    
    return ans ; 
}
