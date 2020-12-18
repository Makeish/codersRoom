SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	
    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data) ;
    
    SinglyLinkedListNode *temp1 = head ;
    
    if(head == NULL) {
        head = temp ;
    }
    else {
        
        while(temp1 -> next != NULL) temp1 = temp1 -> next ;
        
        temp1 -> next = temp ;
    }
    
    return head ; 
}