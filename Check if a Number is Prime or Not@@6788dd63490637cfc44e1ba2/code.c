#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int c=0;
    if (a >1){
        for (int i=1;i<a/2;i++){
            if (a%i==0){
                c+=1;
            }
        }if (c==1)printf("Prime");
        else printf("Not Prime");
    }
    return 0;
}