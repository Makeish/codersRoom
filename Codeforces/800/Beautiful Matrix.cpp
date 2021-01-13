    #include <iostream>
    using namespace std;
    int main()
    {
            int k;
            int a[6][6];
            for(int i=1;i<=5;i++)
            {
                for(int j=1;j<=5;j++)
                {
                    cin>>a[i][j];
                }
            }
            int flag=0;
            for(int i=1;i<=5;i++)
            {
                for(int j=1;j<=5;j++)
                {
                    if(a[i][j]==1)
                    {
                     k=abs(i-3)+abs(j-3);
                     flag=1;
                     break;
                    }
                }
                if(flag==1)
                break;
            }
            cout<<k;
        return 0;
    }