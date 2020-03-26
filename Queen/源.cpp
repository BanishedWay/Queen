#include<stdio.h>
int a[10];
int FABS(int x, int y);

void Queen(int n);

int isPlace(int k);

int main()
{
	Queen(8);
	return 0;
}

int isPlace(int k)
{
	int i, flag = 1;
	for (i = 1; i < k; i++)
	{
		if (a[i] == a[k] || FABS(a[i], a[k]) == FABS(i, k))
		{
			flag = 0;
		}//同列a[i]==a[k]及同对角线FABS(a[i], a[k]) == FABS(i, k)返回错
	}
	return flag;
}

int FABS(int x, int y)
{
	int t = x - y;
	if (t > 0)
	{
		return t;
	}
	return -t;
}

void Queen(int n)
{
	int i, k = 1;
	a[k] = 0;
	while (k > 0)
	{
		a[k]++;
		while (a[k] <= n && !isPlace(k))
		{
			a[k]++;
		}
		if (a[k] <= n)
		{
			if (k == n)
			{
				for (i = 1; i < n; i++)
				{
					printf("%d ", a[i]);
				}
				printf("%d\n", a[i]);
			}
			else
			{
				k++;
				a[k] = 0;
			}
		}
		else
			k--;
	}
	return;
}