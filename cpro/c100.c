#include<stdio.h>
int main(){
    int n1,n2,n3,max;
    printf("input 3 numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);
    max=n1;
    max=n2>max ? n2:max;
    max=n3>max ? n3:max;
    printf("max:%d\n",max);
    return 0;

}