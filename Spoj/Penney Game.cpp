#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ; 
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n ; 
        
        cin >> n ; 
        
        string a ; 
        
        cin >> a ; 
        
        map < string , int > mp ;
        
        for(int i = 0 ; i < 38 ; ++i) {
            
            if(a[i] == 'T' and a[i + 1] == 'T' and a[i + 2] == 'T') {
                mp["TTT"]++ ;
            }
            else if(a[i] == 'T' and a[i + 1] == 'T' and a[i + 2] == 'H') {
                mp["TTH"]++ ;
            }
            else if(a[i] == 'T' and a[i + 1] == 'H' and a[i + 2] == 'T') {
                mp["THT"]++ ;
            }
            else if(a[i] == 'T' and a[i + 1] == 'H' and a[i + 2] == 'H') {
                mp["THH"]++ ;
            }
            else if(a[i] == 'H' and a[i + 1] == 'T' and a[i + 2] == 'T') {
                mp["HTT"]++ ;
            }
            else if(a[i] == 'H' and a[i + 1] == 'T' and a[i + 2] == 'H') {
                mp["HTH"]++ ;
            }
            else if(a[i] == 'H' and a[i + 1] == 'H' and a[i + 2] == 'T') {
                mp["HHT"]++ ;
            }
            else {
                mp["HHH"]++ ; 
            }
        }
        
        cout << n << " " ;
        
        cout << mp["TTT"] << " " << mp["TTH"] << " " << mp["THT"] << " " << mp["THH"] << " " ;
        
        cout << mp["HTT"] << " " << mp["HTH"] << " " << mp["HHT"] << " " << mp["HHH"] ;
        
        cout << "\n" ; 
    }
    return 0 ;
}