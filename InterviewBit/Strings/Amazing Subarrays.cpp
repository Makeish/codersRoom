int Solution::solve(string a) {
    
    int cnt = 0 ;
    
    for(int i = 0 ; i < a.length() ; ++i) {
        if(a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u' or
            a[i] == 'A' or a[i] == 'E' or a[i] == 'I' or a[i] == 'O' or a[i] == 'U') {
                cnt += (a.length() - i)%10003 ; 
        }
    }
    
    return cnt%10003 ;
}
