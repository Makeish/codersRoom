#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	cin >> a ;
	int m = 0;
	int cnt[26]={};
	for(int i = 0 ; i < a.length(); i++)
	cnt[a[i]-'a']++;
	for(int i = 0 ; i < 26 ; i++)
	{
	    if(cnt[i] >= 1)
	    m++;
	}
	if(m & 1)
	cout <<"IGNORE HIM!";
	else
	cout <<"CHAT WITH HER!";
	return 0;
}