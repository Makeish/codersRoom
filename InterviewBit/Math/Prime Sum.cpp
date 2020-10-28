vector<int> Solution::primesum(int n) {
    
    bool prime[n] ;

    memset(prime , true , sizeof(prime)) ;

    prime[0] = 0 , prime[1] = 0 ;

    for(int i = 2 ; i * i <= n ; ++i) 
    {
        if(prime[i]) {
            for(int j = i * i ; j <= n ; j += i) {
                prime[j] = false ; 
            }
        }
    }
    
    vector < int > ans ;
    
    for(int i = 2 ; ; ++i) {
        if(prime[i] and prime[n - i]) {
            ans.push_back(i) ;
            ans.push_back(n - i) ; 
            break ; 
        }
    }
    
    return ans ;
}
