#include <stdio.h>

typedef	union
{
	char c;
	short s;
	int i;
	long b;
} integer;

int main()
{
	integer obj;
	
	obj.c = 'c';
	printf("Char de c: %c\n", obj.c);
	printf("Short de c: %hd\n", obj.c); 
	printf("Int de c: %d\n", obj.c); 
	printf("Long de c: %ld\n\n", obj.c);
	
	obj.c = 8;
	printf("Char de c: %c\n", obj.c);
	printf("Short de c: %hd\n", obj.c); 
	printf("Int de c: %d\n", obj.c);
	printf("Long de c: %ld\n\n", obj.c);
	
	obj.c = 16;
	printf("Char de c: %c\n", obj.c);
	printf("Short de c: %hd\n", obj.c); 
	printf("Int de c: %d\n", obj.c);
	printf("Long de c: %ld\n\n", obj.c);
	
	obj.c =  64;
	printf("Char de c: %c\n", obj.c);
	printf("Short de c: %hd\n", obj.c); 
	printf("Int de c: %d\n", obj.c);
	printf("Long de c: %ld\n\n", obj.c);
	
	
	
	obj.s = 's';
	printf("Char de s: %c\n", obj.s);
	printf("Short de s: %hd\n", obj.s); 
	printf("Int de s: %d\n", obj.s); 
	printf("Long de s: %ld\n\n", obj.s);
	
	obj.s = 9;
	printf("Char de s: %c\n", obj.s);
	printf("Short de s: %hd\n", obj.s);
	printf("Int de s: %d\n", obj.s);
	printf("Long de s: %ld\n\n", obj.s); 
	
	obj.s = 27;
	printf("Char de s: %c\n", obj.s);
	printf("Short de s: %hd\n", obj.s);
	printf("Int de s: %d\n", obj.s);
	printf("Long de s: %ld\n\n", obj.s);
	
	obj.s = 81;
	printf("Char de s: %c\n", obj.s);
	printf("Short de s: %hd\n", obj.s);
	printf("Int de s: %d\n", obj.s);
	printf("Long de s: %ld\n\n", obj.s);
	
	

	obj.i = 'i';
	printf("Char de i: %c\n", obj.i);
	obj.i = 5;
	printf("Short de i: %2d\n", obj.i); 
	obj.i = 25;
	printf("Int de i: %d\n", obj.i); 
	obj.i = 125;
	printf("Long de i: %2d\n\n", obj.i);
	
	obj.b = 'b';
	printf("Char de b: %c\n", obj.b);
	obj.b = 11;
	printf("Short de b: %2d\n", obj.b); 
	obj.b = 22;
	printf("Int de b: %d\n", obj.b); 
	obj.b = 33;
	printf("Long de b: %2d\n", obj.b);
	
	
	return 0;
} // conclusão: o programa pode representar qualquer valor ao convertê-lo para seu equivalente em outro sistema, a exemplo do 'c'
  // sendo convertido em '99', seu equivalente na tabela ASCII; portanto, sim, o programa imprime os valores perfeitamente.
