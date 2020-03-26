#include<stdio.h>
#include<math.h>
int a[10], sum = 0;

void Queen(int k, int n);

int isPlace(int k,int i);

int main()
{
	Queen(1, 8);
	printf("��%d�ֽⷨ\n", sum);
	return 0;
}

int isPlace(int k, int j)
{
	int flag = 1;
	for (int i = 1; i < k; i++)
	{
		if (a[i] == j || fabs(a[i] - j) == fabs(i - k))
		{
			flag = 0;
		}//ͬ�м�ͬ�Խ���,flag=0.
	}
	return flag;
}//�жϵ�k�е�j���Ƿ���Է���

void Queen(int k, int n)
{
	int i;
	if (k > n)
	{
		for (i = 1; i < n; i++)
		{
			printf("%d ", a[i]);
		}
		printf("%d\n", a[i]);
		sum++;
	}
	for (i = 1; i <= n; i++)
	{
		if (isPlace(k, i))
		{
			a[k] = i;
			Queen(k + 1, n);
		}
	}
	return;
}
