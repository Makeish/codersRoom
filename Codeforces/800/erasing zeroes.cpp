#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t ;
	while(t--)
	{
	    string a ;
	    cin >> a ;
	    int cnt = 0 , i , j;
         for(i = 0 ; i < a.length() ; i++)
         {
             if(a[i] == '1')
            break;
         }
         for(j = a.length()-1 ; j >= 0 ; j--)
         {
             if(a[j] == '1')
            break;
         }
         for(int k = i+1 ; k <= j-1 ; k++)
         {
             if(a[k] == '0')
             cnt++;
         }
         cout << cnt << "\n";
	}
	return 0;
}