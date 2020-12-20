ListNode* Solution::deleteDuplicates(ListNode* head) {
    
    struct ListNode * temp = head , *p = head -> next ;
    
    while(p != NULL) {
        
        while(p != NULL and p -> val == temp -> val) {
            p = p -> next ;
        }
        
        temp -> next = p ;
        
        temp = p ;
        
        if(p != NULL) p = p -> next ;
    }
    
    return head ; 
}