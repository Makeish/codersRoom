#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int length , k ; 

    string a ; 

    cin >> length >> a >> k ;

    for(int i = 0 ; i < (int)a.length() ; ++i) {
        if(isalpha(a[i])) {
            if(isupper(a[i])) {
                a[i] = (char)(a[i] - 'A' + k ) % 26 + 65 ;
            }
            else {
                a[i] = (char)(a[i] - 'a' + k ) % 26 + 97 ;
            }
        }
    }

    cout << a ; 

    return 0 ;
}