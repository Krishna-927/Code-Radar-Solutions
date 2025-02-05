#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char aa[100];
    fgets(aa,100,stdin);
    printf("You entered: ");
    puts(aa);
}