#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y;
	
	printf("input two integers : ");
	scanf("%d %d",&x, &y);
	
	
	printf("plus result is %d\n",x+y);
	
	printf("minus result is %d\n",x-y);
	
	printf("multiply result is %d\n",x*y);
	
	printf("division result is %d\n",x/y);
	
	printf("remainder result is %d\n",x%y);
	
	return 0;
}
