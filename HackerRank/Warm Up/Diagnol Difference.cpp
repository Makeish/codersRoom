#include <iostream>
using namespace std;

int main() {
	// your code goes here
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , sum1 = 0 , sum2 = 0 ; 

    cin >> n ; 

    int x ;

    for(int i = 0 ; i < n ; ++i) {
        for(int j = 0 ; j < n ; ++j) {
            cin >> x ;

            if(i == j) {
                sum1 += x ;
            }
            if((n - i - 1) == j) {
                sum2 += x ;
            }
        }
    } 

    cout << abs(sum1 - sum2)  ; 

    return 0 ;
}
