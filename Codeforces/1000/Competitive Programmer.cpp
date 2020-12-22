#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int t = 1 ;
//    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        string a;
       
        for(int j = 0 ; j < n ; j++)
        {
            cin >> a;
            int cnt = 0 , sum = 0 , m = 0;
            for(int i = 0 ; i < a.length() ; i++)
            {
                if(a[i] == '0')
                {
                cnt++;
                m++;
                }
                else if(a[i] == '1')
                sum+=1;
                else if(a[i] == '2')
                {
                    sum+=2;
                    m++;}
                else if(a[i] == '3')
                sum+=3;
                else if(a[i] == '4')
                {
                    sum+=4;
                m++;
                }
                else if(a[i] == '5')
                sum+=5;
                else if(a[i] == '6')
                {
                    sum+=6;
                    m++;
                }
                else if(a[i] == '7')
                sum+=7;
                else if(a[i] == '8')
                {
                    sum+=8;
                    m++;
                }
                else if(a[i] == '9')
                sum+=9;
            }
            if(sum%3 == 0 and cnt>=1 and m >= 2)
            cout <<"red\n";
            else
            cout << "cyan\n";
        }
    }
	return 0;
}