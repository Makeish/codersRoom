    #include <bits/stdc++.h>
     
    using namespace std ;
     
    int main() 
    {
        int size ; 
        
        cin >> size ;
        
        int array[size+1] , prefix[size + 1];
        
        int result1[size+1] , result2[size+1] ;
        
        cin >> array[1] ;
        
        prefix[1] = array[1] ;
        
        for(int i = 2 ; i <= size ; ++i) {
            cin >> array[i] ;
            prefix[i] = prefix[i - 1] + array[i] ;
        }
        
        int queries ;
        
        cin >> queries ;
        
        while(queries --) {
            
            int input ; 
            
            cin >> input ; 
            
            auto it = lower_bound(prefix + 1 , prefix + size + 1 , input) - (prefix) ;
            
            cout << it << "\n" ; 
        }
        return 0 ;
    }