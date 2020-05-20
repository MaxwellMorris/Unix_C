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
#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE* file_ptr = fopen(argv[1], "r");
    if(file_ptr == NULL) {
       perror("Error in reading input file");
    }
    else {
        /* Inside this else statement the file is read
         * First part reads in the number elements in array
         *
         */
        int entries_int;
        char entries[8];
        int i;
        int choice;
        Entry** entry_arr;


        fgets(entries, 8, file_ptr);
        entries_int = atoi(entries);
        choice = atoi(argv[2]);


        if(ferror(file_ptr)) {
            perror("Error in reading number of entries\n");
        }
        printf("The number of entries is: %d\n", entries_int);

        /*Allocate memory for structs */

        entry_arr = (Entry**)malloc(entries_int*sizeof(Entry*));
        for ( i = 0; i < entries_int; i++)
        {
            entry_arr[i] = (Entry*)malloc(sizeof(Entry*));
            entry_arr[i]->strp= (char*)malloc(102*sizeof(char));
        }

        /* Read into the structs. */

        for ( i = 0; i < entries_int; i++)
        {
        int nscan;
        nscan = fscanf(file_ptr, "%d/%d/%d\n", &(entry_arr[i]->day), &(entry_arr[i]->month), &(entry_arr[i]->year));
        if (nscan != 3)
        {
            printf("Error scanning date for Entry %d\n", i);
        }
        printf("Date: %d-%d-%d\n", entry_arr[i]->day, entry_arr[i]->month, entry_arr[i]->year);

        if(fgets(entry_arr[i]->strp, 101, file_ptr) == NULL)
        {
            printf("Error scanning in string for Entry %d\n", i);

        }

        }
        /*Printing the correct valeus*/

        printf("%04d-%02d-%02d: %s\n", entry_arr[choice]->year, entry_arr[choice]->month, entry_arr[choice]->day, entry_arr[choice]->strp);



        /* Free the structs */
        for ( i = 0; i < entries_int; i++)
        {
            free(entry_arr[i]->strp);
            free(entry_arr[i]);
        }
        free(entry_arr);


    fclose(file_ptr);
    }
    return 1;
}





