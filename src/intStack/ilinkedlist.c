/*
 *  Generic Singly-Linked List ADT: Private Implementation
 *
 *  Author:  Joseph Fall
 *  Date:    Mar. 1, 2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <limits.h>

#include "iLinkedList.h"

//------ Node2 --------
Node2_t* Node2Create(int value) 
{
    Node2_t* Node2 = malloc(sizeof(Node2_t));
    Node2->data = value;
    Node2->next = NULL;
    return Node2;
}

void Node2Print(Node2_t Node2) 
{
   char frmt[10];  // dynamically craft the format specifier 
   sprintf(frmt,"[%s]%%s", "%s");
   printf(frmt, Node2.data, Node2.next ? "-->" : "--|");
}


//----- LINKED LIST -----
LinkedList2_t llCreate() 
{
   Node2_t* dummy = Node2Create("");
   LinkedList2_t list = {dummy, dummy};
   return list;
}

void illDestroy(LinkedList2_t* list) 
{
   illDelete(list);
   free(list->head);
   list->head = list->tail = NULL;
}

void illPrint(const LinkedList2_t list) 
{
   Node2_t* cur = list.head->next;
   while (cur != NULL) {
       Node2Print(*cur);
       cur = cur->next;
   }
   printf("\n\n");
}

bool illIsEmpty(const LinkedList2_t list) 
{
   return list.head->next == NULL;
}

void illDelete(LinkedList2_t* list) 
{
   while (!illIsEmpty(*list)) {
      Node2_t* cur = list->head->next;
      list->head->next = cur->next;
      free(cur);
   }
   list->tail = list->head;
}


int illLength(const LinkedList2_t list) 
{
   Node2_t* cur = list.head->next;
   int len = 0;
   while (cur != NULL) {
      len++;
      cur = cur->next;
   }
   return len;
}

void illLinkAfter(LinkedList2_t* list, Node2_t* cursor, Node2_t* newNode2) 
{
   newNode2->next = cursor->next;
   cursor->next = newNode2;
   if (cursor == list->tail) {
      list->tail = newNode2;
   }
}

Node2_t* illUnlinkAfter(LinkedList2_t* list, Node2_t* cursor) 
{
   Node2_t* unlink = cursor->next;
   if (unlink != NULL) {
      cursor->next = unlink->next;
      unlink->next = NULL;
   }
   if (cursor->next == NULL) {
      list->tail = cursor;
   }

   return unlink;
}

void illPush(LinkedList2_t* list, int value) 
{
   illLinkAfter(list, list->head, Node2Create(value));
}

void illAppend(LinkedList2_t* list, int value) 
{
   illLinkAfter(list, list->tail, Node2Create(value));
}

int illHead(const LinkedList2_t list)
{
   assert(!illIsEmpty(list));
   return list.head->next->data;
}

int illPop(LinkedList2_t* list) 
{
   assert(!illIsEmpty(*list));
   Node2_t* top = illUnlinkAfter(list, list->head);
   int value = top->data;
   free(top);
   return value;
}
