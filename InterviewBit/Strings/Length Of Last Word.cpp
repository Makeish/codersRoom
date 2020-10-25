int Solution::lengthOfLastWord(const string a) {
    stringstream ss(a) ;
    
    string b ;
    
    int cnt = 0 ;
    
    while(ss >> b) {
        cnt = b.length() ;
    }
    
    return cnt ;
}
