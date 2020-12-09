int Solution::solve(string a) {
    int vowelcount = 0 , consocount = 0 , ans = 0 ;
    
    for(int i = 0 ; i < a.length() ; ++i) {
        if(a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u') 
        {
            ++vowelcount ;
        }
        else {
            ++consocount ;
        }
    }
    
    for(int i = 0 ; i < a.length() ; ++i) {
        if(a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u') {
            vowelcount-- ;
            ans = fmod(ans + consocount , 1e9+7) ;
        }
        else {
            consocount-- ;
            ans = fmod(ans + vowelcount , 1e9+7) ;
        }
    }
    
    return ans ;
}
