#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test = 1 ;

    while(test--) {
    
        string a , b = "" ;

        getline(cin , a) ;

        for(int i = 0 ; i < a.length() ; ++i) {

            if(!isspace(a[i]))
            b += a[i] ;
        }

        int rows = round(sqrt(b.length())) ;
        int cols;

        if(rows >= sqrt(b.length())) {
            cols = rows ;
        }
        else {
            cols = rows + 1 ; 
        }

        for(int i = 0 ; i < cols ; ++i) {
            for(int j = i ; j < b.length() ; j += cols) {
                cout << b[j] ;
            }
            cout << " " ; 
        }

    }

    return 0 ;
}
