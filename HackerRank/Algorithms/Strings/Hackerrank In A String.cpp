#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test ; 

    cin >> test ;

    while(test--) {

    string a , ans = "";

    cin >> a ;

    int i = 0 ;

    while((i < a.length() - 1 ) and (a[i] != 'h'))
    i++ ;

    if(i < a.length() and a[i] == 'h') {
        ans += 'h' ; 
        i++;
    }

    while((i < a.length() - 1 ) and (a[i] != 'a'))
    i++ ;

    if(i < a.length() and a[i] == 'a') {
        ans += 'a' ; 
        i++;
    }

    while((i < a.length() - 1 ) and (a[i] != 'c'))
    i++ ;

    if(i < a.length() and a[i] == 'c') {
        ans += 'c' ; 
        i++;
    }

    while((i < a.length() - 1 ) and (a[i] != 'k'))
    i++ ;

    if(i < a.length() and a[i] == 'k') {
        ans += 'k' ;
        i++; 
    }

    while((i < a.length() - 1 ) and (a[i] != 'e'))
    i++ ;

    if(i < a.length() and a[i] == 'e') {
        ans += 'e' ;
        i++; 
    }

    while((i < a.length() - 1 ) and (a[i] != 'r'))
    i++ ;

    if(i < a.length() and a[i] == 'r') {
        ans += 'r' ; 
        i++;
    }

    while((i < a.length() - 1 ) and (a[i] != 'r'))
    i++ ;

    if(i < a.length() and a[i] == 'r') {
        ans += 'r' ;
        i++; 
    }

    while((i < a.length() - 1 ) and (a[i] != 'a'))
    i++ ;

    if(i < a.length() and a[i] == 'a') {
        ans += 'a' ; 
        i++;
    }

    while((i < a.length() - 1 ) and (a[i] != 'n'))
    i++ ;

    if(i < a.length() and a[i] == 'n') {
        ans += 'n' ; 
        i++;
    }

    while((i < a.length() - 1 ) and (a[i] != 'k'))
    i++ ;

    if(i < a.length() and a[i] == 'k') {
        ans += 'k' ;
        i++; 
    }

    (ans == "hackerrank") ? cout << "YES\n" : cout << "NO\n" ;

  }

    return 0 ;
}