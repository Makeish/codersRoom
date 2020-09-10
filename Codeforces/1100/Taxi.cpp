#include <bits/stdc++.h>

using namespace std ;

/* hint1: Try to maximize combination of 3 and 1 */
/* hint2: Try to combine 2's with themselves , if left combine them with 1's if any */


int main()
{
    int groups , cntOf1 = 0 , cntOf2 = 0 , cntOf3 = 0 , cntOf4 = 0 ;
    
    cin >> groups ;
    
    while(groups --){
        
        int groupSize ;
        
        cin >> groupSize ;
        
        if(groupSize == 1)
            cntOf1++;
        else if(groupSize == 2)
            cntOf2++;
        else if(groupSize == 3)
            cntOf3++;
        else
            cntOf4++;
    }
    
    // Initial ans is no of 4's
    
    int ans = cntOf4 ;
    
    // Maximizing 1 with 3
    
    if(cntOf3 >= cntOf1){
        ans += cntOf3 ;
        cntOf1 = 0 ;
    }
    else{
        ans += cntOf3 ;
        cntOf1 -= cntOf3 ;
        cntOf3 = 0 ;
        
    }
    
    // combining 2 with themselves
    
    ans += cntOf2/2 ;
    
    // combining remaining 2's with 1's
    
    if(cntOf2 % 2 == 1){
        ans += 1 ;
        cntOf2 = 0 ;
        if(cntOf1 >= 2)
        cntOf1 -= 2 ;
        else
        cntOf1 = 0 ;
    }
    
    //Adding remaining 1's 
    
    if(cntOf1 % 4 != 0){
        ans += cntOf1/4 + 1 ;
    }
    else{
        ans += cntOf1/4 ;
    }
    
    cout << ans ;
    return 0 ;
}