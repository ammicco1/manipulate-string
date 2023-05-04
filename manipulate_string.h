#include <regex.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define _MATCH_SIZE_ 64

int count_char(char *, char);

char **split(char *, char);

char *reverse(char *);

char *substr(char *, int, int);

char *delete_space(char *);

int str_regex_contains(char *, char *);
