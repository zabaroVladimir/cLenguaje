#include <stdio.h>

int main()

{	
	int x, y ,z ,n;
	printf("introduzca valor de n\n");
	scanf("%d" , &n);
	x = 0; y = 1; z = 1;

		while(z <= n)
		{ x = x + 1;
			y = y + 2;
			z = z + y;
					}

	printf("%d %d %d\n",x,y,z);
}
		
