void reverseArray(int a[],int n)
{
   int start = 0 , end = n - 1 ;
   
   while(start < end) {
       swap(a[start++] , a[end--]) ; 
   }
}