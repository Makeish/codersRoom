    #include <bits/stdc++.h>
     
    using namespace std ;
     
    int main()
    {
        int n , l , mini = -1;
     
        cin >> n >> l ;
     
        int a[n] ;
     
        for(int i = 0 ; i < n ; ++i){
            cin >> a[i] ;
        }
     
        sort(a , a + n) ;
     
        int min_ele = *min_element(a , a + n) ;
     
        int max_ele = *max_element(a , a + n) ;
     
        for(int i = 1 ; i < n ; i++){
            mini = max(mini , a[i] - a[i-1]) ;
        }
        
        int ans1 = max(min_ele , l - max_ele) ;
     
        double final_ans ;
     
        if(ans1 > (float)mini/2){
            final_ans = ans1 ;
        }
        else{
            final_ans = (float)mini/2 ;
        }
        cout << fixed << setprecision(9) << final_ans ;
     
        return 0 ;
    }