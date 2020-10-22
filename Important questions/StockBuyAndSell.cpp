#include <bits/stdc++.h>

using namespace std ;

int stockBuyAndSellEffi(int a[] , int n) // Efficient approach
{
    int profit = 0 ;
    
    for(int i = 1 ; i < n ; ++i) {
        if(a[i] > a[i - 1]){
            profit += a[i] - a[i - 1] ; 
        }
    }
    
    return profit ; 
}

int stockBuyAndSell(int price[] , int start , int end)  // Brute force
{
    if(start >= end)
    return 0 ; 
    
    int res = 0 ;
    
    for(int i = start ; i < end ; ++i) {
        for(int j = i+1 ; j <= end ; ++j) {
            if(price[j] > price[i]) {
                int curr_profit = price[j] - price[i] + stockBuyAndSell(price , start , i - 1) + 
                                                        stockBuyAndSell(price , j + 1 , end) ;
                res = max(res , curr_profit) ; 
            }
        }
    }
    
    return res ;
}


void solve(int a[] , int n)
{
    int ans1 = stockBuyAndSell(a , 0 , n - 1) ; 
    int ans2 = stockBuyAndSellEffi(a , n) ;
    cout << ans1 << " " << ans2  ;
}


int main()
{
    int n ; 
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
    }
    
    solve(a , n) ;
    
    return 0 ;
}