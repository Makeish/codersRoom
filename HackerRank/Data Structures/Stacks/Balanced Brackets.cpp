#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ; 
    
    cin >> testcases ;
    
    while(testcases--) {
        
        string a ; 
    
        cin >> a ; 
    
        stack < char > s ; 
    
        bool flag = true ;
        
        for(int i = 0 ; i < a.length() ; ++i) {
            if(a[i] == '{' or a[i] == '[' or a[i] == '(') {
               s.push(a[i]) ;
            }
            else {
                if(!s.empty()) {
                    if((s.top() == '(' and a[i] == ')') or 
                    (s.top() == '{' and a[i] == '}') or
                    (s.top() == '[' and a[i] == ']')) s.pop() ;
                    else {
                        flag = false ;
                        break ;
                    }
                }
                else {
                    flag = false;
                    break ;
                }
            }
        }
    
        if(flag == true and s.empty()) cout << "YES\n" ;
        else cout << "NO\n" ;
        
        }
    return 0 ;
}