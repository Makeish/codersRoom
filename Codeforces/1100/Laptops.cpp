#include <bits/stdc++.h>

using namespace std;

/* Hint 1 : check if sorting helps in some way */
/* Hint 2 : sort pair of numbers wrt first array and compare(think this what we should compare) */

string solve(vector <pair<int,int>> a)
{
    int count = 0 ;
    
    for(int i = 0 ; i < a.size() - 1  ; ++i) {
        if(a[i].second > a[i+1].second)
           return "Happy Alex";
    }
    return "Poor Alex" ; 
}

int main() {
	
	int n , count = 0 ;
	cin >> n ; 
	
	int a[n] , b[n] ;
	
	vector < pair<int,int> > v ;
	
	for(int i = 0 ; i < n ; ++i ) {
	    cin >> a[i] >> b[i] ;
	    v.push_back(make_pair(a[i] , b[i]));
	}
	
	sort(v.begin() , v.end()) ;
	
	cout << solve(v) ;
	
	return 0;
}
