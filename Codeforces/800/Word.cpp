#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string a ;
    cin >> a;
    int cnt1 = 0 , cnt2 = 0 ;
    for(int i = 0 ; i < a.length() ; i++)
    {
        if(isupper(a[i]))
        cnt1++;
        else
        cnt2++;
    }
    if(cnt1 > cnt2)
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    else 
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    cout << a ;
	return 0;
}