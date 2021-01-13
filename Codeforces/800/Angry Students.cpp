#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string a;
	    cin >> a;
	    int s=0,cnt,j=1;
	    for(int i = 0 ; i <a.length();)
	    {
	        cnt = 0;
	        if(a[i]=='A')
	        {
	           for(j = i+1 ; j < a.length() ; j++)
	             {
	               if(a[j] == 'P')
	               cnt++;
	               else
	               break;
	             }
	             if(cnt > s)
	             s = cnt;
	             i=j;
	        }
	        else
	        i++;
	    }
	    cout << s << "\n";
	}
	return 0;
}