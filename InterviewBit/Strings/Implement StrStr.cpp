int Solution::strStr(const string A, const string B) {
    
    if(A.find(B) != string::npos) {
        return A.find(B) ;
    }
    else return -1 ; 
}
