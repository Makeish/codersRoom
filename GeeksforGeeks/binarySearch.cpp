int bin_search(int a[], int left, int right, int k)
{
    if(left > right) {
        return -1 ;
    }
    
    int mid = left + (right - left) / 2 ;
    
    if(a[mid] == k) return mid ;
    else if(a[mid] > k) 
    return bin_search(a , left , mid - 1 , k) ;
    else
    return bin_search(a , mid + 1 , right , k) ; 
}