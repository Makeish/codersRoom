#include <iostream>
using namespace std;

int main() {
	int n ,cnt = 0,sum;
	cin >> n ;
	int a[n];
	for(int i = 0 ; i < n ; i++)
	{
	    cin >> a[i];
	}
	for(int i = 0 ; i < n-1 ; i++)
	{
	    sum = 0;
	    for(int j = i+1 ; j < n ; j++)
	    {
	        if(a[i] == a[j])
	        sum++;
	    }
	    if(sum > cnt)
	    cnt = sum;
	}
	cout << cnt+1;
	return 0;
}