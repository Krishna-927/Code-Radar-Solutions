#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a);
    ((a>0 && b>0)|| (a<0 && b<0))?printf("Same Sign"):printf("Different Sign");
    return 0;
}