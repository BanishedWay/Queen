#include<stdio.h>
#include<math.h>

int x[9];
int isPlace(int k);
void queen(int n);

int main()
{
	queen(8);
	return 0;
}

int Place(int k)
{
	int i = 1;
	while (i < k)
	{
		if (x[i] == x[k] || fabs((double)(x[i] - x[k])) == fabs((double)(i-k)))
		{
			return 0;
		}
		i++;
	}
	return 1;
}//判断第k个皇后是否可以放入棋盘

void queen(int n)
{
	int i, k = 1;
	x[1] = 0;
	while (k > 0)
	{
		x[k]++;
		while (x[k] <= n && !Place(k))
		{
			x[k]++;
		}
		if (x[k] <= n)
		{
			if (k == n)
			{
				for (i = 1; i <= n; i++)
					printf("%d ", x[i]);
				printf("\n");
			}
			else
			{
				k++;
				x[k] = 0;
			}
		}
		else
			k--;
	}
	return;
}