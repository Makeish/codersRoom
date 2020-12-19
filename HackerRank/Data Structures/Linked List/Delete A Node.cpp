SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {

    if(head == NULL or head -> next == NULL) return NULL ;
    
    int i = 0 ;
    
    SinglyLinkedListNode *temp = head , *temp1;
    
    if(position == 0) return head->next ; 
    
    while(i < position - 1) {
        
        temp = temp -> next ;
        
        ++i ;
    }
    
    temp1 = temp -> next ;
    
    temp -> next = temp -> next -> next ;
    
    return head ; 
}