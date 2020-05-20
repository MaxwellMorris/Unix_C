/* PROBLEM: PRAC 6 Q2
 *
 * FILE: main.c
 * AUTHOR: Maxwell Morris
 * STUDENT ID: 19769552
 * UNIT: COMP1000 UCP
 * PURPOSE: Contains a main function for a program that
 *          reading in a file and dynamically allocates 
 *          the contents in structs.
 * REFERENCES:
 *
 * LAST MODIFIED: 1/5/2020
 * DATE CREATED: 1/5/2020
 * COMMENTS:
 */
#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>

void freeEntry(void* data_ptr)
{
    Entry* entry_ptr = (Entry*)data_ptr;
    free(entry_ptr->strp);
    free(entry_ptr);
}


int main(int argc, char *argv[])
{
    int choice = atoi(argv[2]);
    LinkedListNode* currentnode;
    LinkedList* listp;
    int i;
    FILE* file_ptr = fopen(argv[1], "r");
    if(file_ptr == NULL) {
       perror("Error in reading input file");
    }
    else
    {
        /* Create a linked list.*/
        Entry* entryp;
        char* fgets_return;

        /*Make linked list*/
        listp = createLinkedList();

        /* As the values in the file are read into a struct
         * a new linked list node is made that points to the
         * struct.*/
        /*Malloc the data structure*/
        do
        {
            int nscan;
            entryp = (Entry*)malloc(sizeof(Entry));
            entryp->strp = (char*)malloc(sizeof(char)*102);
            nscan = fscanf(file_ptr, "%d/%d/%d\n", &(entryp->day), &(entryp->month), &(entryp->year));
            if (nscan != 3)
            {
                printf("Error reading in date of entry");
            }
            fgets_return = fgets(entryp->strp, 102, file_ptr);
            if (fgets_return == NULL)
            {
                printf("Error reading journal entry");
            }
            insertLast(listp, entryp);
            printf("List count: %d\n", listp->count);
        } while(fgets_return != NULL);
    fclose(file_ptr);

    }

    /*Printing the correct values*/
    currentnode = listp->head;
    for ( i = 0; i < choice; i++)
    {
        currentnode = currentnode->next;
    }

    if (currentnode == NULL)
    {
        printf("No journal entry of that index");
    }

    else
    {
        Entry* entry = (Entry*)currentnode->data;
        printf("%04d-%02d-%02d: %s\n", entry->year, entry->month, entry->day, entry->strp);
        printf("List length: %d\n", listp->count);
    }
    freeLinkedList(listp, &freeEntry);



    return 1;
}






