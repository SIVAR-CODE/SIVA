#include<stdio.h>
int main(){
	int a,b,temp;
    printf("enter two num");
    scanf("%d %d",&a,&b);
    printf("before swap a=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swap a=%d,b=%d",a,b);
    return 0;
}