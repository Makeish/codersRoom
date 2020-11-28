void Solution::sortColors(vector<int> &A) {
    
    int cnt1 = 0 , cnt2 = 0 , cnt3 = 0;
    
    for(int i = 0 ; i < A.size() ; ++i) {
        if(A[i] == 0) cnt1++ ;
        else if(A[i] == 1) cnt2++ ;
        else cnt3++ ;
    }
    
    int i = 0 , j = 0 , k = 0 ;
    
    while(i < cnt1) {
        A[i] = 0 ;
        i++ ;
    }
    
    
    while(j < cnt2) {
        A[i] = 1 ;
        j++ ;
        i++;
    }
    
    while(k < cnt3) {
        A[i] = 2 ;
        k++ ;
        i++ ;
    }
    
}
