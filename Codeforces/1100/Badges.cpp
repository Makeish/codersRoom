#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int b , g , n , cnt = 0  ;

    cin >> b >> g >> n ; 

    cout << min(g , n) - (n - min(b , n)) + 1 ;

    return 0 ;
}