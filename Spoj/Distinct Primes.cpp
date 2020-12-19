#include <bits/stdc++.h>

using namespace std ;

vector < int > a ; 

void solve()
{
    int i = 6 ;
    
    while(a.size() <= 1001) {
        
        int n = i , flag = 0 , cnt = 0 ;
        
        while(n % 2 == 0) {
            n /= 2 ;
            flag = 1 ;
        }
        
        if(flag) cnt++ ;
        
        for(int i = 3 ; i * i <= n ; i += 2) {
            
            flag = 0 ;
            
            while(n % i == 0) {
                n /= i ;
                flag = 1 ;
            }
            
            if(flag == 1) cnt++ ;
        }
        
        if(n >= 2) cnt++ ;
        
        if(cnt >= 3) a.push_back(i) ;
        
        ++i ;
    }
}

int main()
{
    int testcases ; 
    
    cin >> testcases ;
    
    solve() ; 
    
    while(testcases--) {
        
        int n , cnt = 0 , flag = 1 ;
        
        cin >> n ; 
        
        cout << a[n - 1] << "\n" ; 
    }
    return 0 ;
}