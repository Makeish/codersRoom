#include <bits/stdc++.h>

#define number_of_testcases int t ; cin >> t ; while(t--)
#define ll long long 
#define MOD 1000000007
using namespace std;


double distance(int x1_coordinate , int y1_coordinate , int x2_coordinate , int y2_coordinate)
{
    return (sqrt(pow(x2_coordinate-x1_coordinate,2)+pow(y2_coordinate-y1_coordinate,2)));
}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       
            string a  ;
            cin >> a ;
            int cnt1 = 0 , cnt2 = 0 , cnt3 = 0, cnt4 = 0;
            for(int i = 0 ; i < a.length() ; i++)
            {
                if(a[i] == '1')
                cnt1++;
                else if(a[i] == '2')
                cnt2++;
                else if(a[i] == '3')
                cnt3++;
                else
                cnt4++;
            }
            while(cnt1 !=0)
            {
                cout <<"1";
                if(cnt4 != 0)
                {
                cout <<"+";
                cnt4--;
                }
                cnt1--;
            }
            while(cnt2 !=0)
            {
                cout <<"2";
                if(cnt4 != 0)
                {
                cout <<"+";
                cnt4--;
                }
                cnt2--;
            }
            while(cnt3 !=0)
            {
                cout <<"3";
                if(cnt4 != 0)
                {
                cout <<"+";
                cnt4--;
                }
                cnt3--;
            }
            
    return 0;
}