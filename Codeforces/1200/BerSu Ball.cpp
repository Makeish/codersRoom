    #include <bits/stdc++.h>
     
    using namespace std ;
     
    int main() 
    {
        int boys , girls ; 
        
        cin >> boys ; 
        
        int Boys[boys] ;
        
        for(int i = 0 ; i < boys ; ++i) {
            cin >> Boys[i] ;
        }
        
        cin >> girls ;
        
        int Girls[girls] ;
        
        for(int i = 0 ; i < girls ; ++i) {
            cin >> Girls[i] ;
        }
        
        sort(Boys , Boys + boys) ;
        
        sort(Girls , Girls + girls) ;
        
        int cnt = 0 ;
        
        for(int i = 0 , j = 0 ; i < boys and j < girls ; ){
            
            if(abs(Boys[i] - Girls[j]) <= 1){
                cnt++;
                i++;
                j++;
            }
            else if(Boys[i] > Girls[j]) {
                j++;
            }
            else{
                i++;
            }
        }
        
        cout << cnt << "\n" ; 
        return 0 ;
    }