struct node {
    int val;
    struct node *next;
};

// Input:  1 2 3 4 5 6 7
// Output: 2 1 4 3 6 5 7 

void rearrange(struct node *list) {
    struct node *p, *q;
    int temp;
    if(!list || !list->next) return;
    p=list; q=list->next;

    while(q) {
        temp = p->val;
        p->val = q->val;
        q->val = temp;

        p = q->next;
        q = p?p->next:0;
    }
}
