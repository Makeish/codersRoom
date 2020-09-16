#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases = 1 ;
    
    // cin >> testcases ;
    
    while(testcases--) {
        
        int input ;
        
        map <int,int> mp ;
        
        for(int i = 0 ; i < 6 ; ++i) {
            
            cin >> input ;
            mp[input]++;
            
        }
        
        if(mp.size() == 1) {
            cout << "Elephant" ;
        }
        else if(mp.size() == 2) {
            
            int cnt1 = 0 , cnt2 = 0 , cnt3 = 0 ;
            
            for(auto x:mp) {
                if(x.second == 4){
                    cnt1++;
                }
                else if(x.second == 2) {
                    cnt2++;
                }
                else if(x.second == 5) {
                    cnt3++;
                }
            }
            
            if(cnt1 == 1 and cnt2 == 1) {
                cout << "Elephant\n" ;
            }
            else if(cnt3 == 1){
                cout << "Bear" ;
            }
            else{
                cout << "Alien" ;
            }
        }
        else if(mp.size() == 3) {
            int cnt1 = 0 , cnt2 = 0  ;
            
            for(auto x:mp) {
                if(x.second == 4){
                    cnt1++;
                }
                if(x.second == 1) {
                    cnt2++;
                }
            }
            
            if(cnt1 == 1 and cnt2 == 2) {
                cout << "Bear\n" ;
            }
            else{
                cout << "Alien" ;
            }
        }
        else{
            cout << "Alien" ; 
        }
        
        
    }
    return 0 ;
}