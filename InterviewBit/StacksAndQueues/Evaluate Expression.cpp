int Solution::evalRPN(vector<string> &a) {
    stack < int > s ;
    
    for(int i = 0 ; i < a.size() ; ++i) {
        
        if(a[i] == "+" or a[i] == "-" or a[i] == "*" or a[i] == "/") {
        
            int ans2 = s.top() ; 
            
            s.pop() ;
            
            int ans1 = s.top() ;
            
            s.pop() ;
            
            switch(a[i][0]) {
                case '+' : s.push(ans1 + ans2) ;
                            break ;
                case '-' : s.push(ans1 - ans2) ;
                            break ;
                case '*' : s.push(ans1 * ans2) ;
                            break ;
                            
                case '/' : s.push(ans1 / ans2) ;
                            break ;
            }
            
        }
        else {
            
            s.push(stoi(a[i])) ;
            
        }
    }
    
    return s.top() ; 
}
