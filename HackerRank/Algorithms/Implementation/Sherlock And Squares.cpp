#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test ; cin >> test ;

    while(test--) {
    
        int a , b ;

        cin >> a >> b ;

        cout << floor(sqrt(b)) - ceil(sqrt(a)) + 1<< "\n" ;

    }

    return 0 ;
}