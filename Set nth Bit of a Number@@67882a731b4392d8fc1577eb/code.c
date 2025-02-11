// Your code here...
# include <stdio.h>
int main(){
    int n,b;
    scanf("%d %d",&n,&b);
    int c=1;
    for(int i=1;i<=n;i++){
        c*=2;
    }
    printf("%d",n+c);
}