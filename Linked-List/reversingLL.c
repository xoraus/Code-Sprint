void reverseList(struct node **head_addr) {
    struct node *currPtr, *prevPtr, *nextPtr;

    currPtr = *head_addr;
    prevPtr = NULL;
    
    while(currPtr) {
        nextPtr = currPtr->next;
        currPtr->nextPtr = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
    }
       *head_addr = prevPtr;
}

int main() {
    reverseList(&head);
}