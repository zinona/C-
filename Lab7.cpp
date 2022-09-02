#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data1;
    struct Node* next;
};

static void reverse(struct Node** head){
    struct Node* previous = NULL;
    struct Node* curr = *head;
    struct Node* next = NULL;
    while (curr != NULL) {
    	next = curr->next;
    	curr->next = previous;
        previous = curr;
        curr = next;
    }
    *head = previous;
}

void push(struct Node** head_ref, int data1);
{    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node))
    struct Node *last = *head_ref;
    new_node->data1  = data1;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}
void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data1);
        temp = temp->next;
    }
}

int main()
{
    struct Node* head = NULL;

    push(&head, 1);
    push(&head, 8);
    push(&head, 1);
    push(&head, 2);
    push(&head, 2);
    push(&head, 0);
    push(&head, 1);
    push(&head, 4);
    push(&head, 6);

    printf("INPUT\n");
    printList(head);
    reverse(&head);
    printf("\nOUTPUT \n");
    printList(head);
}
