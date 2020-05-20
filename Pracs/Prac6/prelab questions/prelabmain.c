#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct {
        char * name;
    } Info;

    Info* infoInstance_ptr = (Info*)malloc(sizeof(Info));
    infoInstance_ptr->name = (char *)malloc(99 * sizeof(char));
    infoInstance_ptr->name = "";
    printf("And his name was: %s", infoInstance_ptr->name);
}
