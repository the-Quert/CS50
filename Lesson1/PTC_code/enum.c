# include <stdio.h>
# include <stdlib.h>
# define START 0
# define END 1

struct point{
	int x;
	int y;
	int pos;
};

int cmp(const void *a, const void *b)
{
	struct point *c = (struct point*)a;
	struct point *d = (struct point*)b;
	return c -> x - d -> x;
}

int main(void)
{
	struct point building(10000);
	int n = 0;
	while(scanf("%d %d %d", &building[n].x, &building[n].y, &building[n+1].x) != EOF)
	{
		building[n].pos = START;
		building[n+1].y = building[n].y;
		building[n+1].pos = END;
		n += 2;
	}

qsort(building, n, sizeof(struct point), cmp);

int max_h = 0;
int record_height[n];
for (int i = 0; i < n; i++)
{
	record_height[i] = 0;
}
int h = 0;


// Height CHECK
/* See line 65,  87*/

for (int i = 0; i < n; i++)
{
	if(building[i].pos == START) // START
	{
		record_height[h++] = building[i].y;
		if(building[i].y > max_h)
		{
			max_h = building[i].y;
			printf("%d %d", building[i].x, building[i].y);
		}
	}

	else
	{
		if(building[i].y < max_h) // END -- smaller than max_h -> max of remains
		{
			for(int j = 0; j < i; j++)
			{
				if(building[i].y == record_height[j])
				{
					record_height[j] = max_h;
					break;
				}
			}
		}

		else if(building[i].y == max_h) // END -- equal to max_h -> 0 or find max from remains
		{
			for(int j = 0; j <= i; j++)
			{
				if(building[i].y == record_height[j])
				{
					record_height[j] = 0; 
					break;
				}
			}
			// Find max from remains
			max_h = 0;
			for(int j = 0; j <= i; j++)
			{
				if (record_height[j] > max_h)
				{
					record_height[j] = max_h;
				}
			}
			printf("%d %d", building[i].x, max_h);
		}
	}
}
return 0;
}