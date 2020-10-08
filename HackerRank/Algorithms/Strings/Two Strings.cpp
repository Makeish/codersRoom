#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2) {

    map < char , int > mp1 , mp2 ;

    for(auto x:s1) {
        mp1[x]++ ;
    }

    for(auto x:s2) {
        mp2[x]++ ;
    }

    for(auto x:mp1) {
        if(x.second > 0 and  mp2[x.first] > 0) {
            return "YES" ;
        }
    }

    return "NO" ; 

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
