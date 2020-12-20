SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode *third ; 
    
    if(head1 -> data <= head2 -> data) {
        third = head1 ;
        head1 = head1 -> next ;
    }
    else {
        third = head2 ;
        head2 = head2 -> next ; 
    }
    
    SinglyLinkedListNode *temp = third ;
    
    while(head1 != NULL and head2 != NULL) {
        
        if(head1 -> data <= head2 -> data) {
            third -> next = head1 ;
            third = head1 ;
            head1 = head1 -> next ;
        }
        else {
            third -> next = head2 ;
            third = head2 ;
            head2 = head2 -> next ; 
        }
        
    }
    
    while(head1 != NULL) {
        third -> next = head1 ;
        third = head1 ;
        head1 = head1 -> next ;
    }
    
    while(head2 != NULL) {
        third -> next = head2 ;
        third = head2 ;
        head2 = head2 -> next ;
    }
    
    return temp ; 
}
