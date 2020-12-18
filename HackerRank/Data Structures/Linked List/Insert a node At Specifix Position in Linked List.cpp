SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {

    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data) ;
    
    SinglyLinkedListNode *temp1 = head ;
    
    if(head == NULL) {
        head = temp ;
        return head ; 
    }
    
    int i = 0 ;
    
    while(i < position - 1) {
        
        temp1 = temp1 -> next ; 
        
        ++i ;
    }
    
    temp -> next = temp1 -> next ;
    
    temp1 -> next = temp ;
    
    return head ; 
}