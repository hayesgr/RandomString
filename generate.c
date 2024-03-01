#include "generate.h"
int generate_str(char **str,unsigned int type, unsigned int length){
    srand(time(NULL));
    unsigned int temp=type;
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char numbers[] = "0123456789";
    char symbols[] = {33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,58,59,60,61,62,63,64,91,92,93,94,95,96,123,124,125,126};
    //Allocate temp string
    char *temp_str = malloc(sizeof(char)*length+1);
    if(!temp_str){return -1;}
    temp_str[length]='\0';
    //File usable array with usable characters selected
    temp = type;
    for(unsigned int i=0;i<length;i++){
        if(temp==0){temp=type;}
        switch(temp%10){
            case 1:{
                temp_str[i]=lower[rand()%(sizeof(lower)-1)];
                break;
            }
            case 2:{
                temp_str[i]=upper[rand()%(sizeof(upper)-1)];
                break;
            }
            case 3:{
                temp_str[i]=numbers[rand()%(sizeof(numbers)-1)];
                break;
            }
            case 4:{
                temp_str[i]=symbols[rand()%(sizeof(symbols))];
                break;
            }
        }
        temp/=10;
    }
    *str = temp_str;
    return 1;
}
//Alternately
/*
int generate_str(char **str,unsigned int type, unsigned int length){
    srand(time(NULL));
    unsigned int temp=type;
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char numbers[] = "0123456789";
    char symbols[] = {33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,58,59,60,61,62,63,64,91,92,93,94,95,96,123,124,125,126,'\0'};
    char *arrs[4] = {lower,upper,numbers,symbols};
    //Allocate temp string
    char *temp_str = malloc(sizeof(char)*length+1);
    if(!temp_str){return -1;}
    temp_str[length]='\0';
    //File usable array with usable characters selected
    temp = type;
    for(unsigned int i=0;i<length;i++){
        if(temp==0){temp=type;}
        temp_str[i]=arrs[(temp%10)-1][rand()%(strlen(arrs[temp%10-1])-2)];
        temp/=10;
    }
    *str = temp_str;
    return 1;
}
*/
/* A slightly different alternative only 15 lines
int generate_str(char **str,unsigned int type, unsigned int length){
    struct timeval t1; gettimeofday(&t1, NULL); srand(t1.tv_usec*t1.tv_sec);
    unsigned int temp=type;
    char* sets[4] = {"abcdefghijklmnopqrstuvwxyz","ABCDEFGHIJKLMNOPQRSTUVWXYZ","0123456789","!\"#$%^&*()+_-=':;><,.?/|{}[]`~"};
    char *temp_str = malloc(sizeof(char)*length+1);
    if(!temp_str){return -1;}
    temp_str[length]='\0';
    for(unsigned int i=0;i<length;i++){
        if(temp==0){temp=type;}
        temp_str[i]=sets[(temp%10)-1][rand()%(strlen(sets[temp%10-1])-2)];
        temp/=10;
    }
    *str = temp_str;
    return 1;
}
*/
