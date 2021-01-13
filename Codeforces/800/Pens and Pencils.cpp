    #include <iostream>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--){
            int a,b,c,d,k,x,y,cnt1=1,cnt2=1;
            cin>>a>>b>>c>>d>>k;
            int m=c,n=d;
            if(a<=c)
            x=1;
            else{
                do
                {
                m=m+c;
                cnt1++;
                }while(m<a);
                x=cnt1;
            }
            if(b<=d)
            y=1;
            else{
                do
                {
                n=n+d;
                cnt2++;
                }while(n<b);
                y=cnt2;
            }
            if(x+y<=k)
            cout<<x<<" "<<y<<"\n";
            else
            cout<<"-1"<<"\n";
        }
    }