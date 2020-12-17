#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

int a[10000001] ;

using namespace std ;

ll int merge(int a[] , int low , int mid , int high)
{
    int n1 = mid - low + 1 , n2 = high - mid ;
    
    int p[n1] , q[n2] ;
    
    ll int cnt = 0 ;
    
    for(int i = 0 ; i < n1 ; ++i) {
        p[i] = a[low + i] ;
    }
    
    for(int i = 0 ; i < n2 ; ++i) {
        q[i] = a[mid + 1 + i] ;
    }
    
    int i = 0 , j = 0 , k = low ; 
    
    while(i < n1 and j < n2) {
        
        if(p[i] <= q[j]) {
            a[k++] = p[i++] ;
        }
        else {
            cnt += n1 - i ;
            a[k++] = q[j++] ;
        }
    }
    
    while(i < n1) a[k++] = p[i++] ;
    while(j < n2) a[k++] = q[j++] ; 
    
    return cnt ; 
}

ll int mergeSort(int a[] , int low , int high)
{
    ll int res = 0 ;
    
    if(low < high) {
        
        int mid = low + (high - low)/2 ; 
        
        res += mergeSort(a , low , mid) ;
        res += mergeSort(a , mid + 1 , high) ;
        res += merge(a , low , mid , high) ;
    }
    
    return res ;
}


void solve()
{
    int n ; 
    
    cin >> n ; 
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    cout << 1ll * mergeSort(a , 0 , n - 1) << "\n" ; 
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    return 0 ; 
}