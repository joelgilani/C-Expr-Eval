/**
 *  Generic Singly-Linked List ADT : public interface
 *    Node2:  One Node2 in a linked list
 *    LinkedList2: A generic singly-linked list of data defined by gentype.h
 *
 *  Author:  Joseph Fall
 *  Date:    Mar. 1, 2018
 */

#ifndef LinkedList2_H
#define LinkedList2_H


/*******************
 * PRIVATE TYPE DECLARATIONS
 ********************/

//----- Node2 -----
struct  Node2 {
    int data;
    struct Node2* next;
};
typedef struct Node2 Node2_t;


Node2_t* Node2Create(int value);

void Node2Print(Node2_t Node2); 


//----- LINKED LIST -----
struct LinkedList2 {
   Node2_t* head;
   Node2_t* tail;
};
typedef struct LinkedList2 LinkedList2_t;


void illLinkAfter(LinkedList2_t* list, Node2_t* cursor, Node2_t* newNode2);

Node2_t* illUnlinkAfter(LinkedList2_t* list, Node2_t* cursor);


/*********************
 *  PUBLIC INTERFACE
 *********************/

LinkedList2_t illCreate();

void illDestroy(LinkedList2_t* list);

void illPrint(const LinkedList2_t list);

bool illIsEmpty(const LinkedList2_t list);

void illDelete(LinkedList2_t* list);

int illLength(const LinkedList2_t list);

void illPush(LinkedList2_t* list, int value);

void illAppend(LinkedList2_t* list, int value);

int illHead(const LinkedList2_t list);

int illPop(LinkedList2_t* list);

#endif