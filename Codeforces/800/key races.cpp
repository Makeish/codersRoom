#include <iostream>
using namespace std;
int main()
{
    int s,t1,v1,t2,v2;
    cin>>s>>v1>>v2>>t1>>t2;
    int a=2*t1+v1*s;
    int b=2*t2+v2*s;
    if(a<b){
        cout<<"First";
    }
    else if(a==b){
        cout<<"Friendship";
    }
    else{
        cout<<"Second";
    }
    return 0;
}