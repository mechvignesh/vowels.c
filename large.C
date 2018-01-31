#include<stdio.h>
int main()
{
	int a,b,c;
printf("Enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
a>b?(a>c?printf("a is great"):printf("c is great")):b>c?(printf("b is great")):printf("c is great");
return 0;
}
