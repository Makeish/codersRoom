/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* head1, ListNode* head2) {
    
    ListNode *third ; 
    
    if(head1 -> val <= head2 -> val) {
        third = head1 ;
        head1 = head1 -> next ;
    }
    else {
        third = head2 ;
        head2 = head2 -> next ; 
    }
    
    ListNode *temp = third ;
    
    while(head1 != NULL and head2 != NULL) {
        
        if(head1 -> val <= head2 -> val) {
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
