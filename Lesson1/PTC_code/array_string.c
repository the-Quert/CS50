# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/*int main(void)
{
	int Score[5] = {87, 66, 90, 65, 70};
	int i = 0;
	float Total = 0;

	for (i = 0; i < 5; i++)
	{
		printf("The %d student's score is %d\n", i+1, Score[i]);
		Total += Score[i];
	}
	printf("------------------------\n");

	printf("Total: %.1f, Average: %.1f\n", Total, Total/5);

	return 0;
}*/

/*int main(void)
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i, sum = 0;

	for (i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			printf(" ");
		}
		else 
			printf("+");
		printf("%d", i + 1);
		sum += arr[i];
		printf(" = %d\n", sum);
	}
	return 0;
}*/
// Bubble Sort
/*int main(void)
{
	int tmp;
	int data[8] = {16, 25, 39, 27, 12, 8, 45, 63};

	printf("Bubble Sort...Origin");
	for (int i = 0; i < 8; i++)
	{
		printf("%3d", data[i]);
	}
	printf("\n");

	for (int i = 7; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (data[j] > data[j+1])
			{
				tmp = data[j];
				data[j] = data[j+1];
				data[j+1] = tmp;
			}
		}
	}
	printf("Result...");
	for (int i=0; i < 8; i++)
	{
		printf("%3d", data[i]);
	}
	printf("\n");

	return 0;
}*/
/*
int main(void)
{
	int n[10];
	
	for (int i=0; i < 10; i++)
	{
		n[i] = i + 100;
	}

	for (int j=0; j < 10; j++)
	{
		printf("Element[%d] = %d\n", j, n[j]);
	}

	return 0;*/

/*int main(void)
{
	int a[5][2] = { {0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};

	for (int i=0; i < 5; i++)
	{
		for (int j=0; j < 2; j++)
		{
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}
	return 0;
}*/
/*double getAverage(int arr[], int size);

int main(void)
{
	int balance[5] = {1000, 2, 3, 17, 50};
	double avg;

	avg = getAverage(balance, 5);
	printf("Average is %f\n", avg);

	return 0;
}


double getAverage(int arr[], int size)
{
	double avg;
	double sum;

	for (int i=0; i < size; ++i)
	{
		sum += arr[i];
	}
	avg = sum / size;

	return avg;
}

*/

/*
int * getRandom()
{
	static int r[10];

	srand(time(NULL));
	for (int i=0; i < 10; ++i)
	{	
		r[i] = rand();
		printf("r[%d] = %d\n", i, r[i]);
	}
	return r;
}

int main(void)
{
	int *p;
	
	p = getRandom();
	for (int i=0; i < 10; i++)
	{
		printf("*(p + %d) : %d\n", i, *(p + i));
	}

	return 0;
}
*/

int main(void)
{
	double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
	double *p;

	p = balance;

	printf("Using value from pointer...\n");
	for (int i=0; i < 5; i++)
	{
		printf("*(p + %d): %f\n", i, *(p + i));
	}
	printf("Using balance as value of address...\n");
	for (int i=0; i < 5; i++)
	{
		printf("*(balance + %d): %f\n", i, *(balance + i));
	}

	return 0;
}




