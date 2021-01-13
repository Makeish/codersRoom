#include <iostream>
using namespace std;

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);
      int a;
      cin>>a;
      int i=0,k=1,cnt=0;
      while(i<=a)
      {
          for(int j=5;j>=1;)
          {
              i=i+j;
              if(i>a)
              {
                  i=i-j;
                  j--;
              }
              else if(i==a)
              {
              cnt++;
              break;
              }
              else
              cnt++;
          }
          if(i==a)
          break;
      }
      cout<<cnt<<"\n";
	return 0;
}