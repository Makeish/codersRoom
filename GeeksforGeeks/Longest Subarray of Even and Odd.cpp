int maxEvenOdd(int a[], int n) 
{ 
   int ans = 1 , count = 1 ;
   
   for(int i = 1 ; i < n ; ++i) {
       if(a[i] % 2 != a[i - 1] % 2) {
           count++ ;
       }
       else {
           ans = max(ans , count) ;
           count = 1 ;
       }
   }
   
   return max(ans , count) ;
} 