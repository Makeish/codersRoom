    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    int n ;
    cin >> n ;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    cin >> a[i];
    int m ;
    cin >> m ;
    int b[m];
    for(int i = 0 ; i < m ; i++)
    cin >> b[i];
    cout << *max_element(a,a+n)<<" ";
    cout << *max_element(b,b+m);
    return 0;
    }