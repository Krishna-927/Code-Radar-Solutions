#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n[100],h[100];
    int age;
    scanf("%s %d %s",&n,&age,&h);

    printf("Name: %s\nAge: %d\nHobby: %s",n,age,h);
    return 0;
}