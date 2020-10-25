vector<int> Solution::twoSum(const vector<int> &a, int k) {
    
    vector < int > ans ;
    
    map < int , int > mp , mp1 ;
    
    for(int i = 0 ; i < a.size() ; ++i) {
        if(mp[k - a[i]]) {
            ans.push_back(mp1[k - a[i]]+1) ;
            ans.push_back(i+1) ; 
            return ans ; 
        }
        else {
            mp[a[i]]++ ;
            mp1.insert({a[i] , i}) ; 
        }
    }
    
    return ans ;
}
