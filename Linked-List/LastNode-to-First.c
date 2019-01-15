typedef struct node {
    int value;
    struct node *next;
}Node;

Node * move_to_front(Node * head) {
    Node *p, *q;
    if(!head || !head->next) return head;
    q = NULL;
    p = head;
    while(p->next) {
        q = p;
        p = p->next;
    }
    // logic to move th node to the front
    p->next = head;  // make the last node point to head
    head = p; // make the head point to p;
    q->next = NULL; //make the last node point to null
    return head;
}

