#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ; 
    
    cin >> testcases ; 
    
    while(testcases--) {
        
        int n ; cin >> n ;
        
        int a[n] ;
        
        for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
        
        int sum = INT_MIN , curr_sum = 0 , start = 0 , end , aux_start = 0 ;
        
        for(int i = 0 ; i < n ; ++i) {
            
            curr_sum += a[i] ;
            
            if(curr_sum > sum) {
                sum = curr_sum ; 
                end = i ;
                start = aux_start ;
            }
            
            if(curr_sum < 0) {
                curr_sum = 0;
                aux_start = i + 1 ;
            }
        }
        
        cout << sum << " "<< start << " " << end << "\n" ; 
    }
    return 0 ;
}