#include <bits/stdc++.h>

using namespace std ;

bool isprime(int n)
{
    if(n == 1) return false ;

    for(int i = 2 ; i*i <= n ; ++i) {
        if(n % i == 0) return false ;
    }

    return true ;
}

int main()
{
    int t ; 

    cin >> t ; 

    while(t--) {
        
        int n ; cin >> n ; 

        (isprime(n) == true) ? cout << "Prime\n" : cout << "Not prime\n" ; 

    }

        return 0 ;
}