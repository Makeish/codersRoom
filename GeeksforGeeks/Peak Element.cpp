int findpeak(int a[] , int low , int high , int n)
{
    int mid = low + (high - low)/2 ;
    
    if((mid == 0 or a[mid] >= a[mid -1] ) and (mid == n - 1 or a[mid] >= a[mid+1]))
    return mid ;
    else if((mid > 0 and a[mid] < a[mid -1] ))
    return findpeak(a , low , mid - 1 , n) ;
    else
    return findpeak(a , mid + 1, high , n) ;
    
}
int peakElement(int a[], int n)
{
   return findpeak(a , 0 , n - 1 , n) ;
}