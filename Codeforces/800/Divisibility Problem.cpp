#include <bits/stdc++.h>
#define number_of_testcases int t ; cin >> t ; while(t--)
#define ll long long 
#define MOD 1000000007
using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        number_of_testcases
        {
            int a , b ;
            cin >> a >> b ;
            if(a % b == 0)
            cout << "0\n";
            else
            cout << b - a%b << "\n";
        }
    return 0;
}