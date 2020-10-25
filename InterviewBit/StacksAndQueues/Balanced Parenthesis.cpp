int Solution::solve(string a) {
    stack < int > s ;
    
    for(int i = 0 ; i < a.length() ; ++i) {
        if(a[i] == '(') s.push(a[i]) ;
        else {
            if(!s.empty()) {
                if(s.top() == '(') {
                    s.pop() ;
                }
                else {
                    return 0 ;
                }
            }
            else {
                return 0 ;
            }
        }
    }
    
    if(!s.empty()) return 0 ; 
    
    return 1 ;
}
