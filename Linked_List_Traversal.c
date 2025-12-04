#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};
void linkListTraversal(struct Node * ptr){
    while(ptr != NULL){
    printf("Element: %d\n", ptr->data);
    ptr = ptr-> next;
}
}
int main(){
        struct Node * head;
        struct Node * second;
        struct Node * third;
        struct Node * fourth;
        struct Node * fifth;
        struct Node * sixth;
        struct Node * seventh;
        struct Node * eight;
        struct Node * nine;
        struct Node * tenth;
    //Allocate memory for nodes in the linked list in Heap
        head = (struct Node *)malloc(sizeof(struct Node));
        second = (struct Node *)malloc(sizeof(struct Node));
        third =  (struct Node *)malloc(sizeof(struct Node));
        fourth = (struct Node *)malloc(sizeof(struct Node));
        fifth =  (struct Node *)malloc(sizeof(struct Node));
        sixth = (struct Node *)malloc(sizeof(struct Node));
        seventh = (struct Node *)malloc(sizeof(struct Node));
        eight = (struct Node *)malloc(sizeof(struct Node));
        nine = (struct Node *)malloc(sizeof(struct Node));
        tenth = (struct Node *)malloc(sizeof(struct Node));
    //Link first and second nodes
        head-> data = 7;
        head-> next = second;
    //link second and third nodes
        second->data = 11;
        second->next = third;
    //link the third and fourth nodes
        third->data = 13;
        third->next = fourth;
    //link fourth and fifth nodes
        fourth->data = 20;
        fourth->next = fifth;
    //link fifth and sixth nodes 
         fifth->data = 30;
         fifth->next = sixth;
     //link sixth and seventh nodes
         sixth->data = 50;
         sixth->next = seventh;
    //link seventh and eight nodes
         seventh->data= 60;
         seventh->next=eight;
     //link eight and nine nodes
         eight->data=70;
         eight->next=nine;
     //link nine and tenth nodes;
         nine->data = 80;
         nine->next = tenth;
     //Terminate the linked list
        tenth->data=90;
        tenth->next=NULL;

        linkListTraversal(head);
        return 0;
}
