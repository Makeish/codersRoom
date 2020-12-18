SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
	
    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data) ;
    
    if(llist == NULL) {
        llist = temp ;
    }
    else {
        
        temp -> next = llist ;
        
        llist = temp ;
    }
    
    return llist ;
}