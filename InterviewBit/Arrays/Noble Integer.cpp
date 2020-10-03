int Solution::solve(vector<int> &A) {
    
    int n=A.size();
    
    if(n==0)
    return -1;
    
    sort(A.begin(),A.end());
    
    for(int i=0;i<n;i++)
    {
        int j=i+1;
        
        while(j<n && A[j]==A[i])
        j++;
        
        if(A[i]==(n-j))
        return 1;
    }
    
    return -1;
}