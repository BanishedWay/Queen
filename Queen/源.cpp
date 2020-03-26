#include<stdio.h>

int isPlace(int k, int a[])
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

void queen(int n, int a[])
{

}