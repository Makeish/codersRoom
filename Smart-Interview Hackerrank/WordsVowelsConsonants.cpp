#include <bits/stdc++.h>

using namespace std ;

int main()
{
    ios_base :: sync_with_stdio(false) ;
    
    cin.tie(NULL) ;
    
    cout.tie(NULL) ; 
    
    int testcases ;
    
    cin >> testcases ; 
    
    cin >> ws ; 
    
    while(testcases--) {
        
        string a , b ; 
        
        getline(cin , a) ; 
        
        int vowel_count = 0 , conso_count = 0 , word_count = 0 ;
        
        for(int i = 0 ; i < (int) a.length() ; ++i) {
            
            if(isalpha(a[i])) {
                
                a[i] = tolower(a[i]) ;
            
                if(a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u') vowel_count++ ;
                else conso_count++ ;
                
            }
            
        }
        
        stringstream ss(a) ;
        
        while(ss >> b) word_count++ ; 
        
        cout << word_count << " " << vowel_count << " " << conso_count << "\n" ; 
        
    }
    return 0 ;
}