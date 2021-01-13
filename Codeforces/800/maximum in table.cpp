    #include <iostream>
    using namespace std;
    int main()
    {
            int n,max;
            cin>>n;
            int a[11][11]={};
            for(int i=1;i<=n;i++)
            {
               a[1][i]=1;
            }
            for(int i=1;i<=n;i++)
            {
               a[i][1]=1;
            }
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(a[i][j]!=1)
                    a[i][j]=a[i-1][j]+a[i][j-1];
                }
            }
            max=a[0][0];
             for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(a[i][j]>max)
                    max=a[i][j];
                }
            }    
            cout<<max<<"\n";
        return 0;
    }