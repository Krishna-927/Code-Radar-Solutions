#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char aa[100],bb[100];
    scanf("%s %s",&aa,&bb);
    printf("You entered: %s and %s",aa,bb);
}