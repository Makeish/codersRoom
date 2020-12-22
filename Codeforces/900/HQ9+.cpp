#include <iostream>
using namespace std;
 
int main() {
 
    string a ;
    cin >> a;
    int flag = 0;
    for(int i = 0 ; i < a.length() ; i++)
    {
        if(a[i] == 'H' || a[i] == 'Q' || a[i] == '9'  )
        {
            flag = 1 ;
            break;
        }
    }
    if(flag == 1)
    cout <<"YES\n";
    else
    cout <<"NO\n";
	return 0;
}