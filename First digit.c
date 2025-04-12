#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int f = n/1000;
if(f%2==0){
    printf("EVEN");
}else{
    printf("ODD");
}

}
