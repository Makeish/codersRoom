vector<int> Solution::prevSmaller(vector<int> &a) {
    stack < int > s ;
    
    vector < int > ans ;
    
    for(int i = 0 ; i < a.size() ; ++i) {

        while(!s.empty() and s.top() >= a[i]) {
            s.pop() ;
        }
        
        if(!s.empty()) {
            ans.push_back(s.top()) ;
        }
        else{
            ans.push_back(-1) ; 
        }
        s.push(a[i]) ; 
    }
    
    return ans ;
}
