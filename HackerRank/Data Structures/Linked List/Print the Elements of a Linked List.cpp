void printLinkedList(SinglyLinkedListNode* head) {

    struct SinglyLinkedListNode *temp ;
    
    temp = head ;
    
    while(temp != NULL) {
        
        cout << temp -> data << "\n" ;
        
        temp = temp -> next ;
    }
}