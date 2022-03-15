Node *appendLastNToFirst(Node *head, int n){
    //Write your code here	
    
    //corner case
   	if(n == 0 or head == NULL) {
        return head;
    }
    
    Node *tail = head;
    Node *ptr  = head;
    
    int length = 1;
    
    while(tail -> next) {
        tail = tail -> next;
        length++;
    }
    
    int counter = 1;
    
    while(counter < length - n) {
        ptr = ptr -> next;
        counter++;
    }
    
    // to append
    tail -> next = head;
    head = ptr -> next;
    ptr -> next = NULL;
    
    return head;

}

// Time Complexity : O(n)
// Auxillary Space : O(1)