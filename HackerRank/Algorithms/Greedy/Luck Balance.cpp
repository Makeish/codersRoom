#include <bits/stdc++.h>
using namespace std ;

int main()
{
    vector <int> sp ;
    int n , k , ans = 0; 
    cin >> n >> k ; 

    int l[n] , r[n];
    for(int i = 0 ; i < n ; i++){
        cin >> l[i] >> r[i];
        if(r[i] == 1){
            sp.push_back(l[i]);
        }
        else{
            ans += l[i] ;
        }
    }
    
    sort(sp.begin() , sp.end());

    for(int i = sp.size() - 1 ; i >= 0 ; i--){
        if(k > 0){
            ans+=sp[i];
            k--;
        }
        else{
            ans-=sp[i];
        }
    }

    cout << ans << "\n";
    return 0;
}