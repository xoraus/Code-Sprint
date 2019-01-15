struct node * head;

void reverse(struct node *prev, struct node *cur) {
    if(cur) {
        reverse(cur, cur->link);
    }
    else {
        head = prev;
    }
}

void main(int argc, char const *argv[])
{
    reverse(NULL, head);
    return 0;
}
