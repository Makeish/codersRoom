SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {

    SinglyLinkedListNode *temp = head , *p = head -> next ; 
    
    while(p != NULL) {
        
        while(p != NULL and temp -> data == p -> data) {
            p = p -> next ;
        }
        
        temp -> next = p ;
        temp = p ;
        if(p != NULL) {
            p = p -> next ;
        }
    }
    
    return head ; 
}