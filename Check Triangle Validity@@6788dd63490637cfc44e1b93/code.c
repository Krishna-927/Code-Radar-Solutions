#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c<a+b || a<b+c || b<a+c){
    printf("Valid");
    }
    else {
    printf("Invalid");
    }
    return 0;
}