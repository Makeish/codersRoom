#include <bits/stdc++.h>

using namespace std ;

int top = - 1 ;

int s[100001] ;

void push(int n)
{
    s[++top] = n ;
}

int pop()
{
    return s[top--] ; 
}

int main()
{
    int t ;
    
    cin >> t ; 
    
    while(t--) {
        
        string str ; 
        
        cin >> str ; 
        
        if(str == "push") {
            
            int ele ; 
            
            cin >> ele ; 
            
            push(ele) ;
        }
        else {
            
            if(top == -1) {
                cout << "Empty\n" ;
            }
            else {
                cout << pop() << "\n" ; 
            }
        }
    }
    return 0 ;
}