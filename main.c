#include "./manipulate_string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 128

int main(int argc, char **argv){
    int choise, i, ind[2];
    char *buff = (char *) malloc(sizeof(char) * MAX_STR);
    char *regex = (char *) malloc(sizeof(char) * 32);
    char **sl;
    char c; 

    while(1){
        printf("Choose a function: \n \
1. Count char in a string \n \
2. Split a string \n \
3. Reverse a string \n \
4. Extract a substring \n \
5. Delete_space in a string \n \
6. Check if a regex is in a string \n\n\
Choise: ");

        scanf("%d", &choise);

        switch(choise){
            case 1: memset(buff, 0, MAX_STR);
                    printf("Enter a string: "); scanf(" %[^\n]", buff);
                    printf("Which char you want to count? "); scanf(" %c", &c);
                    printf("\n\"%s\" contains %d times %c\n\n", buff, count_char(buff, c), c); break; 
            case 2: memset(buff, 0, MAX_STR);
                    printf("Enter a string: "); scanf(" %[^\n]", buff);
                    printf("with which char you want to split the sting? "); scanf(" %c", &c);
                    sl = split(buff, c); i = 0; 
                    printf("The substrins are: \n");
                    while(sl[i] != NULL){
                        printf("%s\n", sl[i]);
                        i++;
                    }
                    printf("\n"); break;
            case 3: memset(buff, 0, MAX_STR);
                    printf("Enter a string: "); scanf(" %[^\n]", buff);
                    printf("The reverse of %s is %s\n\n", buff, reverse(buff)); break;
            case 4: memset(buff, 0, MAX_STR);
                    printf("Enter a string: "); scanf(" %[^\n]", buff);
                    printf("Enter first index: "); scanf(" %d", &ind[0]);
                    printf("Enter second index: "); scanf(" %d", &ind[1]);
                    printf("The substring from %d to %d of %s is: %s\n\n", ind[0], ind[1], buff, substr(buff, ind[0], ind[1]));
                    break;
            case 5: memset(buff, 0, MAX_STR);
                    printf("Enter a string: "); scanf(" %[^\n]", buff);
                    printf("Here's %s without space: %s", buff, delete_space(buff)); break;
            case 6: memset(buff, 0, MAX_STR);
                    printf("Enter a string: "); scanf(" %[^\n]", buff);
                    printf("Enter a regex: "); scanf(" %[^\n]", regex);
                    str_regex_contains(buff, regex);
                    printf("\n"); break;
        }
    }

    return 0;
}