int Solution::isPalindrome(int A) {
    
    string C = to_string(A) , B = C;
    
    reverse(C.begin() , C.end()) ;
    
    if(C.compare(B) == 0) {
        return 1 ;
    }
    
    return 0 ; 
}
