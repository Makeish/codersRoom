#include <bits/stdc++.h>

using namespace std ;

void solve()
{
    int size ;
    double cnt1 = 0 , cnt2 = 0 , cnt3 = 0; 

    cin >> size ;

    int arr[size] ;

    for(int i = 0 ; i < size ; ++i) {
        cin >> arr[i] ;
    }

    for(int i = 0 ; i < size ; ++i) {
        if(arr[i] > 0) {
            ++cnt1 ;
        }
        else if(arr[i] < 0) {
            ++cnt2 ;
        }
        else {
            ++cnt3 ;
        }
    }

    cout << fixed << setprecision(6) << cnt1/size << endl ;
    cout << fixed << setprecision(6) << cnt2/size << endl ;
    cout << fixed << setprecision(6) << cnt3/size << endl ;

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
