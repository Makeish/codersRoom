	int findMaxSubarraySum(long long a[], int n, long long sum)
	{
	    long long s = 0 ;
	    long long int maxi = 0 , start = 0 ;
	    
	    for(int i = 0 ; i <= n ; ++i) {
	        
	        while(s > sum and start < i) {
	            s -= a[start] ;
	            start++ ;
	        }
	        
	        maxi = max(maxi , s) ;
	        
	        if(i < n)
	        s += a[i] ;
	        
	    }
	    
	    return maxi ; 
	} 