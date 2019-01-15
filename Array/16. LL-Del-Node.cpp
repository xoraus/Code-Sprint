// We are given the pointer to the head node of a linked list and the position of a node to delete. We need to find the previous node to update it's next pointer and free the given node.

// Pseudocode:

// count=0
// prev=NULL   //Pointer to the previous node
// cur=head
// while(cur is not NULL and count<pos)
//     count=count+1
//     prev=cur
//     cur=(*cur).next


// if count!=pos
//     Not enough nodes in the list!
// else

//     if count is NULL
//         Empty list! Nothing to delete
//     else

//         if prev is NULL             //Delete the head
//             temp=cur
//             cur=(*cur).next
//             free the memory referenced by temp
//         else                        //Delete from any other position
//             (*prev).next=*(*prev.next).next
//             free the memory referenced by cur pointer


#include <iostream>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    struct SinglyLinkedListNode *tmp = NULL;
    if(position == 0)
    {
        tmp = head;
        head = tmp->next;
        free(tmp);
    }
    else
    if(position == 1)
    {
        tmp = head->next;
        head->next = tmp->next;
        free(tmp);
    }
    else
    {
        struct SinglyLinkedListNode *tofree = NULL;
        tmp = head;

        for(size_t i = 0; i < (position - 1); i++)
            tmp = tmp->next;

        tofree = tmp->next;

        if(tofree->next == NULL)
            // it is a tail
            tmp->next = NULL;
        else
            tmp->next = tofree->next;

        free(tofree);
        tofree = tmp = NULL;

    }
    return head;
}

int main()