#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

int main() {
    /* Create the first node (head of the list) */
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->prev = NULL;
    head->next = NULL;

    /* Create and link the second node */
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->prev = head;
    head->next->next = NULL;

    /* Create and link the third node */
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->prev = head->next;
    head->next->next->next = NULL;

    /* Create and link the fourth node */
    head->next->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->next->data = 40;
    head->next->next->next->prev = head->next->next;
    head->next->next->next->next = NULL;

    /* Traverse the list forward */
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) {
            printf(" <-> ");
        }
        temp = temp->next;
    }

    return 0;
}
