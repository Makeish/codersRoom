#include <bits/stdc++.h>
#define number_of_testcases int t ; cin >> t ; while(t--)
#define ll long long 
#define MOD 1000000007
using namespace std;
 
int power(int x, unsigned int y) 
{ 
    int res = 1;     // Initialize result 
   
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = res*x; 
   
        // y must be even now 
        y = y>>1; // y = y/2 
        x = x*x;  // Change x to x^2 
    } 
    return res; 
}
 
 
 
 
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        number_of_testcases
        {
            int n ; 
            cin >> n ; 
            for(int i = 2 ; i <= ceil(log2(n)) ; i++){
                if(n % (power(2 , i) - 1) == 0){
                    cout << n / (power(2 , i) -1 ) << "\n";
                    break;
                }
            }
        }
    return 0;
}