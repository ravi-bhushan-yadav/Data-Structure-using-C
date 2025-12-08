#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

void insertLast (struct Node **head, int data)
{

  struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));

  newNode->data = data;
  newNode->next = NULL;

  //need this if there is no node present in linked list at all
  if (*head == NULL)
    {
      *head = newNode;
      newNode->prev = NULL;
      return;
    }

  struct Node *temp = *head;

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = newNode;
  newNode->prev = temp;
}

void insertStart (struct Node **head, int data)
{

  struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));

  newNode->data = data;
  newNode->next = *head;
  newNode->prev = NULL;

  //If the linked list already had atleast 1 node
  if (*head != NULL)
    (*head)->prev = newNode;
  // *head->prev = newNode; would not work it has (*head) must be used

  //changing the new head to this freshly entered node
  *head = newNode;
}

// function to print the doubly linked list
void display (struct Node *node)
{
  struct Node *end;
  printf ("List in Forward direction: ");

  while (node != NULL)
    {
      printf (" %d ", node->data);
      end = node;
      node = node->next;
    }

  printf ("\nList in backward direction: ");

  while (end != NULL)
    {
      printf (" %d ", end->data);
      end = end->prev;
    }
}

int main ()
{
  struct Node *head = NULL;

  /*Need & i.e. address as we
     need to change head address only needs to traverse
     and access items temporarily
   */
  insertStart (&head, 12);
  insertStart (&head, 16);
  insertStart (&head, 20);

  insertLast (&head, 10);
  insertLast (&head, 14);
  insertLast (&head, 18);
  insertLast (&head, 11);
  /*No need for & i.e. address as we do not
     need to change head address
   */
  display (head);
  return 0;
}