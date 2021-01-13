#include <bits/stdc++.h>
#define ll long long 

using namespace std ;

int main()
{
    int testcases = 1 ;
    
    cin >> testcases ;
    
    while(testcases --){
        
       int k ; 
       
       cin >> k ; 
       
       k = 2*k ;
       
       vector <int> b ;
       
       map < int , int > mp ;
       
       int input ;
       
       while(k--){
           cin >> input;
           mp[input]++;
           if(mp[input] == 1){
               b.push_back(input);
           }
       }
       
       for(int i = 0 ; i < b.size() ; ++i){
           cout << b[i] << " " ;
       }
        cout << "\n";       
        
    }
    return 0;
}