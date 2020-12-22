#include <iostream>
using namespace std;
 
int main() {
    int n ;
    cin >> n ;
    char a[n+1];
    for(int i = 1 ; i <= n ; i++)
    cin >> a[i];
    if(n & 1)
    {
        for(int i = n-1 ; i >=2 ; i-=2)
        cout << a[i];
        for(int i = 1 ; i <= n ; i+=2)
        cout << a[i];
    }
    else
    {
        for(int i = n-1 ; i >=1 ; i-=2)
        cout << a[i];
        for(int i = 2 ; i <= n ; i+=2)
        cout << a[i];
    }
	return 0;
}