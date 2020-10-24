#include <bits/stdc++.h>

using namespace std ;

int squareRoot(int n)  // Brute Force
{
    int i = 1 ; 
    
    while(i*i <= n)
    i++ ;
    
    return i - 1 ;
}

int squareRootEffi(int n)   // Efficient Approach
{
    int low = 1 , high = n , ans = -1 ;
    
    while(low <= high) {
        
        int mid = (low + high) / 2 ;
        
        int sq = mid*mid ;
        
        if(sq == n) {
            return mid ;
        }
        else if(sq > n) {
            high = mid - 1 ;
        }
        else {
            low = mid + 1 ;
            ans = mid ;
        }
    }
    
    return ans ;
}

int main()
{
    int n ; 
    
    cin >> n ; 
    
    cout << squareRoot(n) << " " << squareRootEffi(n) << " " ;
    
    return 0 ; 
}