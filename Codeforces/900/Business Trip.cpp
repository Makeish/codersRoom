#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	//freopen("", "r", stdin);freopen("", "w", stdout);
    int n;
    cin >> n;
    int array[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> array[i];
    }
    sort(array, array + 12 , greater<int>());
    if(n == 0)
    cout << "0\n";
    else{
        int sum = 0 , cnt = 0 ;
        for(int i = 0 ; i < 12 ; i++){
            sum+=array[i];
        //    cout << sum << " ";
            cnt++;
            if(sum >= n)
            break;
        }
        if(sum < n)
        cout << "-1\n";
        else
        cout << cnt << "\n";
        
        
    }
    
 
	return 0;
}