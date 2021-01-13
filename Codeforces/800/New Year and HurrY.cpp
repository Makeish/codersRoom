#include <iostream>
using namespace std;

int main() {
    int n , k , i = 1 , cnt  = 0;
    cin >> n >> k ;
    int p = 240 - k;
    while(p > 0 and i <= n)
    {
        p = p - 5*i;
        i++;
        if(p >= 0)
        cnt++;
    }
    cout << cnt ;
	return 0;
}