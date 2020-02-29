# include <stdio.h>
# include <stdlib.h>


// Local defintion
int main(void)
{
	int a, b;
	int c;

	a = 10;
	b = 20;
	c = a + b;

	printf("value of a = %d, b = %d, and c = %d\n", a, b, c);

	return 0;
}

// Global definition
int g;

int main(void)
{
	int a, b;
	a = 10;
	b = 20;
	g = a + b;

	printf("value of a = %d, b = %d, and c = %d\n", a, b, g);
}

// Formal params -- stored in "Uninitialized data segment". When it's called, system would not allocate memory for it. 
// Program loader would call it during "runtime"
int a = 20;

int main(void)
{
	int a = 10;
	int b = 20;
	int c = 0;
	int sum(int, int); // Formal params

	printf("value of a in main = %d\n", a);
	c = sum(a, b);	   // Given value
	printf("value of b in main = %d\n", c);

	return 0;
}

int sum(int a, int b) // Formal params
{
	printf("value of a in sum() = %d\n", a);
	printf("value of b in sum() = %d\n", b);

	return a + b;
}


/* 
Formal params vs Actual params

{
	Actual params could be valiables, and expression.
	When calling function, data might be sent between formal params and actual params.

	When formal params is defined, system would not allocate memory in the beginning. Only when the formal params is assigned or called, 
	system would allocate memory.

	Value from actual params would sent to formal params.
	When executing function, if formal params is assogned value, we could calculate with formal params.
	Ater calling, formal params would be released, and acual params remained.

}
*/