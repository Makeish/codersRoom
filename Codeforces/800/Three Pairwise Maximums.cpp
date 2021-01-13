#include <bits/stdc++.h>
#define ll long long 

using namespace std ;

int main()
{
    int testcases = 1 ;
    
    cin >> testcases ;
    
    while(testcases --){
        
        vector <int> a ;
        
        int x , y , z ;
        
        cin >> x >> y >> z ;
        
        if(x == y and x >= z){
            a.push_back(x) ;
            a.push_back(z) ;
            a.push_back(z) ;
        }
        else if(y == z and y >= x){
            a.push_back(z) ;
            a.push_back(x) ;
            a.push_back(x) ;
        }
        else if(x == z and x >= y){
            a.push_back(z) ;
            a.push_back(y) ;
            a.push_back(y) ;
        }
        
        if(a.size() == 3){
            cout << "YES\n";
            cout << a[0] << " " << a[1] << " " << a[2] << "\n" ;
        }
        else{
            cout << "NO\n";
        }
        
    }
    return 0;
}