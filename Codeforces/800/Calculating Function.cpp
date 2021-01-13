    #include <bits/stdc++.h>
    #define number_of_testcases int t ; cin >> t ; while(t--)
    #define ll long long 
    #define MOD 1000000007
    using namespace std;
     
    ll int power(int a , int n)
    {
        if(n == 0 )
        return 1;
        if(n == 1)
        return a;
        ll t = pow(a,n/2);
        return t*t*pow(a,n%2);
    }
     
    double distance(int x1_coordinate , int y1_coordinate , int x2_coordinate , int y2_coordinate)
    {
        return (sqrt(pow(x2_coordinate-x1_coordinate,2)+pow(y2_coordinate-y1_coordinate,2)));
    }
     
    int main()
    {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            long long int n ;
            cin >> n ;
            if(n & 1){
                ll int p = n/2 + 1 ;
                ll int q = n/2;
                cout << (q*(q+1)) - (p*p);
            }
            else{
                ll int q = n/2;
                cout << (q*(q+1)) - (q*q);
            }
            return 0;
    }