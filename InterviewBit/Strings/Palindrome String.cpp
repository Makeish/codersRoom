int Solution::isPalindrome(string a) {
    string b = "" ;
    
    for(int i = 0 ; i < a.length() ; ++i) {
        if(isalpha(a[i]) or isdigit(a[i])) {
            b+=tolower(a[i]) ; ;
        }
    }
    
    for(int i = 0 ; i <= b.length()/2 ; ++i) {
        if(b[i] != b[b.length() - i -1]) return 0 ;
    }
    
    return 1 ;
}
