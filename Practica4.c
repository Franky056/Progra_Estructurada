#include <stdio.h>
#include <stdlib.h>
float x,y,z;
char op;
int main()
{
printf("Introduce dos numeros separados por un espacio: \n");
scanf("%f %f",&x,&y);
printf("\n Que operacion desea realizar \n");
scanf("%s",&op);
switch(op)
{
	case '*':
		printf("\n %f * %f= %f", x, y ,x*y);
		break;
	case '+':
		printf("\n %f + %f= %f", x, y ,x+y);
		break;
	case '-':
		printf("\n %f - %f= %f", x, y ,x-y);
		break;
	case '/':
		printf("\n %f / %f= %f", x, y ,x/y);
		break;
	default:
		printf("\n Esta no es una operacion valida");
		}

}

