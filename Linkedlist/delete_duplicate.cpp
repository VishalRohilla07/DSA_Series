Node *removeDuplicates(Node *head) {
    //corner case
    if(head == NULL) {
        return head;
    }
    
    Node *curr = head -> next;
    Node *ptr = head;
    
    while(curr){
        if(curr -> data == ptr -> data) {
            if(curr -> next == NULL) {
                ptr -> next = NULL;
            }
                curr = curr -> next;
        } else {
        	ptr -> next = curr;
        	ptr = curr;
        	curr = curr -> next;
        }
    }
    
    return head;
}