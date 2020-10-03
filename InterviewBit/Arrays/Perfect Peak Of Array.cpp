#include <bits/stdc++.h>

int Solution::perfectPeak(vector<int> &a) {
    int n = a.size() , pre[n] , suff[n] ;
    
    pre[0] = a[0] ;
    suff[n - 1] = a[n - 1] ;
    
    for(int i = 1 ; i < n ; ++i) {
        pre[i] = max(pre[i - 1] , a[i]) ;
    }
    
    for(int i = n - 2 ; i >= 0 ; i--) {
        suff[i] = min(suff[i+1] , a[i]) ;
    }
    
    for(int i = 1 ; i < n - 1 ; ++i) {
        if(a[i] > pre[i - 1] and a[i] < suff[i+1]) {
            return 1 ;
        }
    }
    return 0 ;
}
