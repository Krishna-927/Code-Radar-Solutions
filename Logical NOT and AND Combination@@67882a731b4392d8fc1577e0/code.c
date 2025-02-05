#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a+b;
    (c<0)?printf("True"):printf("False");
    return 0;
}