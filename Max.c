#include<stdio.h>
int main(){
int n;
int big = 0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int x;
    scanf("%d",&x);
    if(x>big){
    big = x;
    }

}
printf("%d",big);
}
