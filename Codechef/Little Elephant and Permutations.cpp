#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

int merge(int a[] , int low , int mid , int high)
{
    int n1 = mid - low + 1 , n2 = high - mid ; 
    
    int l[n1] , r[n2] , cnt = 0 ;
    
    for(int i = 0 ; i < n1 ; ++i) l[i] = a[low + i] ;
    for(int i = 0 ; i < n2 ; ++i) r[i] = a[mid + 1 + i] ;
    
    int i = 0 , j = 0 , k = low ;
    
    while(i < n1 and j < n2) {
        
        if(l[i] <= r[j]) {
            a[k++] = l[i++] ;
        }
        else {
            a[k++] = r[j++] ;
            cnt+= n1 - i ; 
        }
    }
    
    while(i < n1) {
        a[k++] = l[i++] ;
    }
    while(j < n2) {
        a[k++] = r[j++] ; 
    }
    
    return cnt ;
}

int localIn(int a[] , int n)
{
    int cnt = 0 ;
    
    for(int i = 0 ; i < n - 1 ; ++i) {
        if(a[i] > a[i + 1]) 
        cnt++ ; 
    }
    
    return cnt ; 
}
int mergeSort(int a[] , int low , int high)
{
    int res = 0 ;
    
    if(low < high) {
        
        int mid = low + (high - low)/2 ;
        
        res += mergeSort(a , low , mid) ;
        res += mergeSort(a , mid + 1, high) ;
        res += merge(a , low , mid , high) ;
    }
    
    return res ;
}

void solve()
{
    int n ; 
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i]  ;
    }
    
    int ans1 = localIn(a , n) ;
    int ans2 = mergeSort(a , 0 , n - 1) ;
    
    // cout << ans1 << " " << ans2 << "\n"; 
    
    if(ans1 == ans2) cout << "YES\n" ;
    else cout << "NO\n" ; 
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