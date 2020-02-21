#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int a=4,b=3;
float d=5.5, e=4.5;
char f='1',g='2';
bool bol1=true,bol2=false;
double c=1.4;
main()
{
	printf("%d+%d= %d\n",a,b,a+b);
	printf("%d-%d= %d\n",a,b,a-b);
	printf("%d*%d= %d\n",a,b,a*b);
	printf("%d/%d= %d\n",a,b,a/b);
	printf("%dmod%d= %d\n",a,b,a%b);
	printf("%f+%f= %f\n",d,e,d+e);
	printf("%f-%f= %f\n",d,e,d-e);
	printf("%f*%f= %f\n",d,e,d*e);
	printf("%f/%f= %f\n",d,e,d/e);
	printf("%f\n",c);
	printf("f<<5=%d\n",f<<5);
	printf("f>>5=%d\n",f>>5);
	printf("f<*5=%d\n",f*5);
	printf("bol1&&bol2=%d\n",bol1&&bol2);
	printf("bol1==bol2=%d\n",bol1==bol2);
	printf("bol1||bol2=%d\n",bol1||bol2);
}
