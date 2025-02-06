#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    scanf("%d %d %d",&a,&b,&c);
    if(c<a+b || a<b+c || b<a+c)
    printf("Valid");
    else printf("Invald");
    return 0;
}