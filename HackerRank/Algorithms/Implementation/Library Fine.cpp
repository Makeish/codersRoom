#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases = 1 ; 

    while(testcases--) {
        
        int d1 , m1 , y1 , d2 , m2 , y2;

        cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2 ;

        if(y1 - y2 >= 0) {
            if(y1 - y2 > 0) {
                cout << "10000" ; 
            }
            else {
                if(m1 - m2 >= 0) {
                    if(m1 - m2 > 0) {
                        cout << (m1 - m2) * 500 ;
                    }
                    else {
                        if(d1 - d2 >= 0) {
                            if(d1 - d2 > 0) {
                                cout << (d1 - d2) * 15 ;
                            }
                            else {
                                cout << "0" ; 
                            }
                        }
                        else {
                            cout << "0" ; 
                        }
                    }
                }
                else {
                    cout << "0" ; 
                }
            }
        }
        else {
            cout << "0" ; 
        }

    }

    return 0 ;
}
