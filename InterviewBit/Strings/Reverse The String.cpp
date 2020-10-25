string Solution::solve(string A) {
    
    stack < string > p ;
    
    stringstream ss(A) ;
    
    string b , ans = "";
    
    while(ss >> b) {
        p.push(b) ;
    }
    
    while(!p.empty()) {
        ans += p.top() ;
        p.pop() ; 
        if(!p.empty())
        ans += " " ;
    }
    
    return ans ;
}
