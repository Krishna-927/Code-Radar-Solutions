#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch (c){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '/':
        if (b!=0)
        printf("%d",a/b);
        else printf("Error");
        case '*':
        printf("%d",a*b);
    }
    printf("%s", welcome());
    return 0;
}