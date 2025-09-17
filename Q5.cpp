#include<stdio.h>
int mai                                                                                                                n(){
	int a,b;
    printf("enter two num");
    scanf("%d %d",a,b);
    printf("before swaping a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping a=%d,b=%d",a,b);
    return 0;
}