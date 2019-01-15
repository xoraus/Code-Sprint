void f(struct node *p) {
    if(p) {
        prinf("%d", p->data);
        f(p->next);
    }
}

void f(struct node *p) {
    if(p) {
        f(p->next);
        prinf("%d", p->data);
    }
}