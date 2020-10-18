#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int  t ;

    cin >> t ;

    while(t--) {
        
        unsigned long long int black , white , bcost , wcost , c; 

        cin >> black >> white >> bcost >> wcost >> c ;

        if(bcost == wcost) {
            cout << black * bcost + white * wcost ;
        } 
        else if(bcost > wcost) {
            cout << 1ll * min(black*bcost+white*wcost,black*(wcost+c)+white*wcost) ;
        }
        else {
            cout << 1ll * min(black*bcost+white*wcost,black*bcost+white*(bcost+c)) ;
        }

        cout << "\n" ; 
    }
    return 0 ;
}