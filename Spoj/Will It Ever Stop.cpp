#include <bits/stdc++.h>

using namespace std ;

int main()
{
    long long int n ; 
    
    cin >> n ; 
    
    if(n <= 0) cout << "NIE" ;
    else if(!(n & (n - 1))) cout << "TAK" ;
    else cout << "NIE" ; 
    return 0 ;
}