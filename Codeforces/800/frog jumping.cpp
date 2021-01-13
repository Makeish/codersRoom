    #include <iostream>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
            signed long long int a,b,k,x;
            cin>>a>>b>>k;
            if(k%2==0)
            {
            x=(k/2)*(a-b);
            cout<<x<<"\n";
            }
            else
            {
            x=((k/2)*(a-b))+a;
            cout<<x<<"\n";
            }
        }
        return 0;
    }