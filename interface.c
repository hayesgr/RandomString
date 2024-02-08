#include "interface.h"

unsigned int string_size(){
    unsigned int r=0;
    printf("- Random Character Generator -\n");
    printf("Enter the length of desired [unsigned integers only]:");
    scanf("%d",&r);
    return r;
}
unsigned int string_type(){
    int r=0;
    printf("Select teh option specified below to generate [no commas or spaces]:\n");
    printf("1 - lower [a-z]\n");
    printf("2 - upper [A_Z]\n");
    printf("3 - numbers [0-9]\n");
    printf("4 - symbols [?!~#$...]\n");
    printf("Example: 234\n");
    scanf("%d",&r);
    return r;
}
