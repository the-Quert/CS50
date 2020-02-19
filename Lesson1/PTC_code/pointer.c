# include <stdio.h>
# include <stdlib.h>
# include <float.h>


// int main(void)
// {
// 	printf("float: %lu\n", sizeof(float));
// 	printf("float minimum: %E\n", FLT_MIN);
// 	printf("float maximum: %E\n", FLT_MAX);
// 	printf("Precise: %d\n", FLT_DIG);

// 	return 0;
// }

// 	// int	4 bytes
// 	// float 4 bytes
// 	// double 8 bytes
// 	// long duoble 16 bytes

// 	// Octal: 0..
// 	// Hexadecimal: 0x...
// 	// Binary: 0b...


// 	// Each variable's size is corresponded to its type.

// int main(void)
// {
// 	int var1;
// 	char var2[10];

// 	printf("Address of variable var1 is : %p\n", &var1);
// 	printf("Address of variable var2 is : %p\n", &var2);

// 	return 0;
// }

// int main(void)
// {
// 	int var1 = 20;  
// /* Real variable*/

// int *ip;	   
// /* Integer point*/

// ip = &var1;     
// /* Store address of var in ip*/


// printf("Address of var variable : %p\n", &var);
// printf("Address stored in ip variable: %p\n", ip);
// printf("Value if *ip variable: %d\n", *ip);

// return 0;
// }

// int main(void)
// {
//     int b = 2;
//     printf("Value of b is %d\n", b);
//     printf("Address of b is %p\n", &b);

//     return 0;
// }

// int main(void)
// {
// 	int b ;
// 	b = 2;
// 	int* pointer;
// 	pointer = &b;
// 	printf("%p\n", pointer); // Show address of variable
// 	printf("%d\n", *pointer); // Show the value of address which is corresponded with.
// }
/*int main(void)
{
	int b = 2;
	int* pointer = &b;

	printf("Value of b is %d\n", b);
	printf("Address of b is %p\n", &b);
	printf("Value of pointer is %p\n", pointer);
	printf("\n");

	*pointer = 100;

	printf("Value of pointer is %d\n", *pointer);
	printf("Value of b is %d\n", b);
	printf("Address of pointer is %p\n", &pointer);

	return 0;
}
*/
/*int main(void)
{
	int count = 9;
	int *countAddr;
	countAddr = &count;
	*countAddr = 10;
	int result = *countAddr;
	printf("Result = %d\n", count);

	return 0;
}*/
/*int main(void)
{
	int a, b, temp;
	int *p1, *p2; 
	printf("Please input the value of a: \n");
	scanf("%d", &a);
	printf("Please input the value of b: \n");
	scanf("%d", &b);
	// After intial define, address is located without *
	p1 = &a;	
	p2 = &b;
	// *p1 = *&a = *&*&*&*&a = a
	if(*p1 < *p2){  // p1 <-> p2
		temp = *p1; // temp = p1	p1 -> temp
		*p1 = *p2;	// p1 = p2		p2 -> p1
		*p2 = temp; // p2 = temp	temp -> p2
	}
	printf("Value of *p1: %i\n", *p1);
	printf("Value of *p2: %i\n", *p2);
	printf("Value of p1: %p\n", p1);
	printf("Value of p2: %p\n", p2);
}*/
/*
void addone(int *n)
{
	*n = *n + 1;
}
int main(void)
{
	int a = 3;
	addone(&a);
	printf("%d\n", a);
}*/
void swap(int*, int*);
int main(void)
{
	int a = 3, b = 5;
	/*int temp = a;
	a = b;
	b = temp;*/
	swap(&a, &b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
}
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}