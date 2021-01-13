#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[4];
    map<int,int>mp;
    for(int i = 0 ; i < 4 ; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    long sum = 0;
    for(auto x:mp)
    {
        if(x.second > 1)
        sum+=x.second-1;
    }
    cout << sum << "\n";
	return 0;
}