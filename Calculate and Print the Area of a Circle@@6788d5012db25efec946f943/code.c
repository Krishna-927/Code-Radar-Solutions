#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    scanf("%f",&a);
    printf("Area: %.2lf", 3.14*a*a);
    return 0;
}