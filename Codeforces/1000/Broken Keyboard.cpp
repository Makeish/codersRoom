#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        char b[501];
        cin >> a;
        int n=0;
        for(int i=0;a[i]!='\0';i++)
        n++;
        int j=0;
        for(int i=0;i<n;)
        {
            if(a[i]!=a[i+1])
            {
                b[j]=a[i];
                j++;
                i++;
            }
            else
            {
                i+=2;
            }
        }
        sort(b,b+j);
        
        int k;
        for (int i=0; i<j; i++) 
    { 
    
        int j; 
        for ( k=0; k<i; k++) 
        if (b[i] == b[k]) 
           break; 
        if (i == k) 
        cout << b[i]; 
    } 
        printf("\n");
    }
	return 0;
}