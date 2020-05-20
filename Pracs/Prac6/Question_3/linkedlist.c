/* PROBLEM: PRAC 6 Q2
 *
 * FILE: linkedlist.c
 * AUTHOR: Maxwell Morris
 * STUDENT ID: 19769552
 * UNIT: COMP1000 UCP
 * PURPOSE: Contains functions for linked lists
 *          function include: making a ll, adding
 *          and removing the first and last 
 *          elements.
 * REFERENCES:
 *
 * LAST MODIFIED: 1/5/2020
 * DATE CREATED: 1/5/2020
 * COMMENTS:
 */

#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>

/*Create a empty linked list*/

LinkedList* createLinkedList(void)
{
/**
 * FUNCTION NAME: createLinkedList
 * PURPOSE: Creates a linked list structure
 *
 * IMPORTS: Nothing
 * EXPORTS: A pointer to the linked list structure that
 *          contains pointers to the head and tail of the
 *          lined list as well as size
 **/
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    list->head = NULL;
    list->tail = NULL;
    list->count = 0;
    return list;
}

void insertStart(LinkedList* list, void* entry)
{
/**
 * FUNCTION NAME: insertStart
 * PURPOSE: Inserts a new linkedlist node at the
 *          start of the linked list.
 *
 * IMPORTS: The Linked list structure (not node) and
 *          also the entry to be added
 * EXPORTS: Nothing
 **/
    LinkedListNode* StartNode = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    StartNode->data = entry;
    if (list->head == NULL)
    {
        /*This code is ran if making the first node*/
        list->head = StartNode;
        list->tail = StartNode;
        StartNode->next = NULL;
        StartNode->prev = NULL;
    }
    else
    {/*Rearrange pointers to put in new list item*/
        StartNode->next = list->head;
        list->head->prev = StartNode;
        StartNode->prev = NULL;
        list->head = StartNode;
    }
    list->count++;
}

void* removeStart(LinkedList* list)
{
/**
 * FUNCTION NAME: removeStart
 * PURPOSE: Deletes the first list node from memory and
 *          rearranges the list.
 * IMPORTS: The pointer to the LinkedList struct.
 * EXPORTS: A void pointer to the data in the deleted node.
 **/

    LinkedListNode* temp;
    void* return_val;
    /*If the list is empty*/
    if (list->head == NULL)
    {
        return_val = NULL;
    }
    /*If the list has only one node*/
    else if ((*list).head->next == NULL)
    {
        /*Changes what the linked list struct pointers to*/
        return_val = list->head->data;
        free(list->head);
        list->head = NULL;
        list->tail = NULL;
        list->count--;

    }
    /*If the list has more then one node.
     * I don't know if you want that list structure to no
     * longer point to the list so I didn't set it to null.*/
    else
    {
        temp = list->head->next;
        return_val = list->head->data;
        free(list->head);
        list->head = temp;
        temp->prev = NULL;
        list->count--;
    }
    return return_val;
}

void insertLast(LinkedList* list, void* entry)
{
/**
 * FUNCTION NAME: insertLast
 * PURPOSE: Inserts a linked list node at the end of the list
 *          and repoints some pointers.
 * IMPORTS: The pointer to the LinkedList struct.
 * EXPORTS: Void.
 **/
    LinkedListNode* EndNode;
    EndNode = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    EndNode->data = entry;
    if ( list->tail == NULL )
    {
        /*If generating the first node with the last node */
        list->head = EndNode;
        list->tail = EndNode;
        EndNode->next = NULL;
        EndNode->prev = NULL;
    }
    else
    {
        /*Rearrange pointers to add in this new node to end of list*/
        EndNode->prev = list->tail;
        list->tail->next = EndNode;
        list->tail = EndNode;
        EndNode->next = NULL;
    }
    list->count++ ;
}

void* removeLast(LinkedList* list)
{
/**
 * FUNCTION NAME: removeLast
 * PURPOSE: Removes the last node from the struct.
 *          The node is not deleted or freed.
 * IMPORTS: The pointer to the LinkedList struct.
 * EXPORTS: A void pointer to the removed List Node struct
 **/
    LinkedListNode* temp;
    void* return_val;
    /*If the list is empty.*/
    if (list->head == NULL)
    {
        return_val = NULL;
    }
    /*if the list has only one node*/
    else if ( list->tail->prev == NULL )
    {
        /* Removes this only node in the list*/
        return_val = list->tail->data;
        free(list->tail);
        list->head = NULL;
        list->tail = NULL;
    }
    else
    {
        /*If the list has more then one node*/
        return_val = list->tail->data;
        temp = list->tail->prev;
        free(list->tail);
        list->tail = temp;
        list->tail->next = NULL;

    }
    list->count--;
    return return_val;
}


void printLinkedList(LinkedList* list, listFunc funcPtr)
{
/**
 * FUNCTION NAME: printLinkedList
 * PURPOSE: Prints the data inside the list by iterating
 *          through it and using a function pointer on 
 *          each node.
 * IMPORTS: The pointer to the LinkedList struct and a
 *          function pointer that can print the data
 *          that is inside the structs.
 * EXPORTS: Void
 **/
    LinkedListNode* currnp = list->head;
    while (currnp->next != NULL)
    {
        (*funcPtr)(currnp->data);
        currnp = currnp->next;
    }
}

void freeLinkedList(LinkedList* list, listFunc funcPtr)
{
/**
 * FUNCTION NAME: freeLinkedList
 * PURPOSE: Free's the content of the linked list using free()
 *          on both the linked list and the data.
 * IMPORTS: The list func and a function pointer to free() the
 *          data in the list
 * EXPORTS: Void
 **/
    LinkedListNode* currnp = list->head;
    LinkedListNode* nextNode;
    while (currnp->next != NULL)
    {
        nextNode = currnp->next;
        (*funcPtr)(currnp->data);
        free(currnp);
        currnp = nextNode;
    }
}






















