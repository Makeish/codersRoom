#include <bits/stdc++.h>

using namespace std ;

long long int gcd(long long int a , long long int b)
{
    if(b == 0) return a ;
    else return gcd(b , a % b) ; 
}

int main()
{
    long long int a , b , c ; 
    
    cin >> a >> b >> c ; 
    
    cout << gcd(gcd(a , b)  , c) << "\n" ;
    
    return 0 ;
}