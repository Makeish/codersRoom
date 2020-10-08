#include <bits/stdc++.h>

using namespace std ;

int main()
{
    string a ;

    getline(cin , a) ; 

    int cnt[26] = {} , flag = 0 ; 

    for(int i = 0 ; i < a.length() ; ++i) {
        
        a[i] = tolower(a[i]) ;
        cnt[a[i] - 'a']++ ;
    }

    for(int i = 0 ; i < 26 ; ++i) {
        if(cnt[i] == 0) {
            flag = 1 ;
            break ;
        }
    }

    (flag == 1) ? cout << "not pangram" : cout << "pangram" ; 

    return 0 ;
}