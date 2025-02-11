// Your code here...
# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int k=i;k<n;k++){
            printf(" ");
        }
        for (int j=i;j<=2n;j++){
            printf("*");
        }printf("\n");
    }
}