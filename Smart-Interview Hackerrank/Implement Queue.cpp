#include <bits/stdc++.h>

using namespace std ;

int front = 0 , rear = - 1 ;

int q[100001] ; 

void enqueu(int ele)
{
    q[++rear] = ele ;
}

int dequ()
{
    return q[front++] ; 
}

int main()
{
    int queries ; 
    
    cin >> queries ;
    
    while(queries--) {
        
        string str ; 
        
        cin >> str ;
        
        if(str == "Enqueue") {
            
            int ele ; 
            
            cin >> ele ; 
            
            enqueu(ele) ;
        }
        else {
            if(front == rear + 1) {
                cout << "Empty\n" ; 
            }
            else {
                cout << dequ() << "\n" ; 
            }
        }
    }
    return 0 ;
}