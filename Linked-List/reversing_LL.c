struct node {
    int i;
    struct node *next;
};

struct node reverse(struct node *cur) {
    struct node *prev = NULL, *nextNode = NULL;

    while(cur) {
        nextNode = cur->next;
        cur->next = prev;
        prev = cur;
        cur =  nextNode;
    }
    return prev;
}