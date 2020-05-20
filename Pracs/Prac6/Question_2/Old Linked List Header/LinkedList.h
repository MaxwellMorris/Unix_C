/* PROBLEM: PRAC 6 Q2
 *
 * FILE: linkedlist.h
 * AUTHOR: Maxwell Morris
 * STUDENT ID: 19769552
 * UNIT: COMP1000 UCP
 * PURPOSE: Contains structs for linked lists.
 * REFERENCES:
 *
 * LAST MODIFIED: 1/5/2020
 * DATE CREATED: 1/5/2020
 * COMMENTS:
 */
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct {
    int day;
    int month;
    int year;
    char* strp;
} Entry;


typedef struct LinkedListNode {
    void *data;
    struct LinkedListNode* next;
} LinkedListNode;

typedef struct {
    int size;
    LinkedListNode * head;
} LinkedList;

LinkedList* createLinkedList();
void insertStart(LinkedList* list, void* entry);

#endif
