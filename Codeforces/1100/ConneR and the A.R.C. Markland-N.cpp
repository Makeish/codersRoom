#include <bits/stdc++.h>

using namespace std ;

int search1(int a[] , int blocked_floors , int curr_floor, int no_floors)
{
    int cnt1 = 0 ;
    
    for(int i = curr_floor ; i <= no_floors ; i++) {
        if(binary_search(a , a + blocked_floors , i)) {
            cnt1++;
        }
        else{
            return cnt1;
        }
    }
    
    return 1e9;
}

int search2(int a[] , int blocked_floors , int curr_floor)
{
    int cnt2 = 0 ;
    
    for(int i = curr_floor ; i > 0 ; i--) {
        if(binary_search(a , a + blocked_floors , i)) {
            cnt2++;
        }
        else{
            return cnt2;
        }
    }
    
    return 1e9 ; 
}

int main() 
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int no_floors , curr_floor , blocked_floors , cnt1 = 0 , cnt2 = 0 ;
        
        cin >> no_floors >> curr_floor >> blocked_floors ;
        
        int a[blocked_floors] ;
        
        for(int i = 0 ; i < blocked_floors ; ++i) {
            cin >> a[i] ;
        }
        
        sort(a , a+blocked_floors) ;
        
        int ans1 = search1(a , blocked_floors , curr_floor , no_floors) ;
        int ans2 = search2(a , blocked_floors , curr_floor) ;
        
        cout << min(ans1 , ans2) << "\n" ;
    }
    return 0 ;
}