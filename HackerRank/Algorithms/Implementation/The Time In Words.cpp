#include <bits/stdc++.h>

using namespace std ;

string hour(int h)
{
    if(h == 1) return "one" ;
    else if(h == 2) return "two" ;
    else if(h == 3) return "three" ;
    else if(h == 4) return "four" ;
    else if(h == 5) return "five" ;
    else if(h == 6) return "six" ;
    else if(h == 7) return "seven" ;
    else if(h == 8) return "eight" ;
    else if(h == 9) return "nine" ;
    else if(h == 10) return "ten" ;
    else if(h == 11) return "eleven" ;
    else if(h == 12) return "twelve" ;
    else if(h == 13) return "thirteen" ;
    else if(h == 14) return "fourteen" ;
    else if(h == 16) return "sixteen" ;
    else if(h == 17) return "seventeen" ;
    else if(h == 18) return "eighteen" ;
    else if(h == 19) return "nineteen" ;
    else if(h == 20) return "twenty" ;
    else if(h == 21) return "twenty one" ;
    else if(h == 22) return "twenty two" ;
    else if(h == 23) return "twenty three" ;
    else if(h == 24) return "twenty four" ;
    else if(h == 25) return "twenty five" ;
    else if(h == 26) return "twenty six" ;
    else if(h == 27) return "twenty seven" ;
    else if(h == 28) return "twenty eight" ;
    else if(h == 29) return "twenty nine" ;
    else if(h == 31) return "thirty one" ;
    else if(h == 32) return "thirty two" ;
    else if(h == 33) return "thirty three" ;
    else if(h == 34) return "thirty four" ;
    else if(h == 35) return "thirty five" ;
    else if(h == 36) return "thirty six" ;
    else if(h == 37) return "thirty seven" ;
    else if(h == 38) return "thirty eight" ;
    else if(h == 39) return "thirty nine" ;
    else if(h == 40) return "forty" ;
    else if(h == 41) return "forty one" ;
    else if(h == 42) return "forty two" ;
    else if(h == 43) return "forty three" ;
    else if(h == 44) return "forty four" ;
    else if(h == 46) return "forty six" ;
    else if(h == 47) return "forty seven" ;
    else if(h == 48) return "forty eight" ;
    else if(h == 49) return "forty nine" ;
    else if(h == 50) return "fifty" ;
    else if(h == 51) return "fifty one" ;
    else if(h == 52) return "fifty two" ;
    else if(h == 53) return "fifty three" ;
    else if(h == 54) return "fifty four" ;
    else if(h == 55) return "fifty five" ;
    else if(h == 56) return "fifty six" ;
    else if(h == 57) return "fifty seven" ;
    else if(h == 58) return "fifty eight" ;
    else return "fifty nine" ;

}

int main()
{
    int h , m ; 

    cin >> h >> m ;

    if(m == 15 or m == 45) {
        if(m == 15) {
            cout << "quarter past " << hour(h) ; 
        }
        else {
            cout << "quarter to " << hour(h + 1) ; 
        }
    }
    else if(m == 30) {
        cout << "half past " << hour(h) ;
    }
    else if(m == 0) {
        cout << hour(h) << " o' clock" ;
    }
    else if(m < 30) {
        if(m < 10) {
            cout << hour(m) << " minute past " << hour(h) ;
        }
        else {
            cout << hour(m) << " minutes past " << hour(h) ;
        }
    }
    else if(m > 30) {
        cout << hour(60 - m) << " minutes to " << hour(h + 1) ; 
    }

    return 0 ; 
}