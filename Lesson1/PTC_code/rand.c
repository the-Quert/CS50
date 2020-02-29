# include <stdio.h>
# include <stdlib.h>
# include <time.h>

// rand()
/*int main(void)
{
	int a;
	a = (rand()%100) + 1;
	printf("The random number between 1 to 100 is %d\n", a);
}*/

 /*rand() outputs the same value at saveral times, cause system is 0 in the beginning. Thus, each time it outputs the same value.*/
/* Thus, we use srand() to change the initialized value, it also need time as its params.*/
/*
Random x between a, b...
int x = (rand() % (b-a+1)) + a;
*/ 

/*// srand()
int main(void)
{
	int a;
	srand(time(NULL)); // To change the initialized value in the beginning.
	a = (rand()%100) + 1;
	printf("The random number between 1 and 100 is %d\n", a);
}*/


/*系統產生一個 1-100 的亂數
提示使用者輸入一個數字
如果使用者輸入的數字和答案相同，則印出 "Bingo!" 並結束程式，否則繼續讓使用者猜一次
如果三次都沒猜中，則印出標準答案*/

int main(void)
{
	int ans, g_1;

	srand(time(NULL));
	ans = (rand()%100) + 1;
	printf("Ans is %d\n", ans);

	for (int i=0; i < 3; i++)
	{
	printf("Pleae input the guess: ");
	scanf("%d", &g_1);
	if (g_1 == ans)
	{
		printf("Bingo\n");
		break;
	}
	}
}











