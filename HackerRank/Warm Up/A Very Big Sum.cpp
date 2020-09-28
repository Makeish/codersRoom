#include <bits/stdc++.h>

using namespace std ;

void solve()
{
    int size ; 

    cin >> size ;

    int arr[size] ;

    unsigned long long sum = 0 ;

    for(int i = 0 ; i < size ; ++i) {
        cin >> arr[i] ;
        sum += arr[i] ; 
    }

    cout << sum ;
}

int main()
{
    int testcases = 1 ; 

    // cin >> testcases ;

    while( testcases-- ) {
        solve() ; 
    }
    return 0 ;
}
