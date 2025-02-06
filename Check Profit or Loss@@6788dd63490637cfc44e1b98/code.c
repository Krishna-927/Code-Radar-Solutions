#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
int a,b;
scanf("%d %d",&a,&b) ;
if (a==b)printf("No Profit No Loss");
else
(a>b)?printf("Loss"):printf("Profit");   return 0;
}