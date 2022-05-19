#include<stdio.h>
int main(){
    char str[][30] = {"souphaxay","","mina","thipphavong","andina","laofong","zeokham","maneekone",
    int j = 1;
    printf("------------------------\n");
    printf(" Members of class 1cs1\n");
    printf("------------------------\n\n");
    for (int i = 0; i < 21; i++)
    {
        printf("member[%d] = %s\n",j++,str[i]);
    }    
    return 0;
