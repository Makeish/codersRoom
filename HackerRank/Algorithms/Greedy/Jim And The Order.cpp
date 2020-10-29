#include <bits/stdc++.h>

using namespace std ;

bool mycompare(pair < int , int > p1 , pair < int , int > p2)
{
    if(p1.second == p2.second) 
    return p1.first < p2.first ; 

    return p1.second < p2.second ; 
}

int main()
{
    int n ; 

    cin >> n ; 

    vector < pair < int , int > > vect ;

    for(int i = 1 ; i <= n ; ++i) {
        
        int a , b ; 

        cin >> a >> b ; 

        vect.push_back({i , a + b}) ;
    
    }

    sort(vect.begin() , vect.end() , mycompare) ;

    for(auto x:vect) cout << x.first << " " ;

    return 0 ;
}