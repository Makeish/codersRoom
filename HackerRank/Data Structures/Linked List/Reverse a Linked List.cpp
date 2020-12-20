SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {

    SinglyLinkedListNode *p = head , *q = NULL , *r = NULL ; 
    
    while(p != NULL) {
        
        r = q ; 
        
        q = p ;
        
        p = p -> next ;
        
        q -> next = r ;
    }
    
    head = q ; 
    
    return head ; 
}