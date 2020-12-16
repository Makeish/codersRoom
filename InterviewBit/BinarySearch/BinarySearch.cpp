int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    
    for(int i = 0 ; i < A.size() ; ++i) {
        if(binary_search(A[i].begin() , A[i].end() , B)) return 1 ;
    }
    
    return 0 ;
}
