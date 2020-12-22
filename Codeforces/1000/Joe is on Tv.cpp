#include <bits/stdc++.h>
using namespace std;
 
int main()
{
        int n;
        cin >> n;
        double s = 0;
        int k = 1;
        while(k <= n)
        {
            s = s + (double)1/k;
            k++;
        }
        cout << fixed << setprecision(12) << s;
    return 0;
}