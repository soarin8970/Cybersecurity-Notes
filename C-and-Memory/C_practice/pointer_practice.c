#include <stdio.h>

int main() {
	int x = 50;
	int *p = &x;

	printf("x = %d\n", x);
	printf("&x = %p\n", (void *)&x); 
	printf("p = %p\n", (void *)p);
	printf("*p = %d\n", *p);

	*p = 100;

	printf("\nAfter changing *p:\n");
	printf("x = %d\n", x);
	printf("*p = %d\n", *p);

	return 0;
}
