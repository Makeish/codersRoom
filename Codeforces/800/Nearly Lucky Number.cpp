#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n , cnt = 0;
    cin >> n ;
    while(n != 0)
    {
        int r = n%10;
        if(r == 4 || r == 7)
        cnt++;
        n/=10;
    }
    if(cnt == 4 || cnt == 7)
    cout <<"YES";
    else
    cout <<"NO";
	return 0;
}