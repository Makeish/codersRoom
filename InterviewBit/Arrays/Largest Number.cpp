#include <bits/stdc++.h>

bool mycomp(long long int x ,long long int y)
{
    long long int  ab =  stoll(to_string(x) + to_string(y)) ;
    
    long long int  ba =  stoll(to_string(y) + to_string(x)) ;
    
    return ab >= ba ;
}

string Solution::largestNumber(const vector<int> &A) {
    
    string ans = "" ;
    
    vector < int > B(A) ; 
    
    sort(B.begin() , B.end() , mycomp) ;
    
    for(auto x:B) {
        ans += to_string(x) ;
    }
    
    if(ans[0] == '0') {
        return "0" ;
    }
    
    return ans ;
}
