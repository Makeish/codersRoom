    #include <iostream>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n;
        cin>>n;
        int a[n],b[100],cnt=0;
        for(int i=1;i<=n;i++)
        cin>>a[i];
        for(int i=1;i<=n;i++)
        {
            if(a[i]==1)
            cnt++;
        }
        cout<<cnt<<"\n";
        for(int i=2;i<=n;i++)
        {
            if(a[i]==1)
            cout<<a[i-1]<<" ";
        }
        cout<<a[n];
        return 0;
    }