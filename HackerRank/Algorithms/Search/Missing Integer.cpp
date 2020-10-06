#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n1 , n2 , input ;

    map < int , int > mp1 , mp2 ; 

    cin >> n1 ; 

    for(int i = 1 ; i <= n1 ; ++i) {
        
        cin >> input ;

        mp1[input]++ ;

    }

    cin >> n2 ;

    for(int i = 1 ; i <= n2 ; ++i) {
        
        cin >> input ;

        mp2[input]++ ;

    }

    for(auto x:mp2) {
        if(x.second > mp1[x.first]) {
            cout << x.first << " " ; 
        }
    }




    return 0 ;
}