#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j,m=1;
	char a[1000][1000] = {0};
	while (scanf("%d", &j) != EOF)
	{
		for (i = 1; i <j; i++)
		{
			m = m * 3;
		}
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
			{
				a[i][j] = ' ';
			}
		}
		for (i = 0; i < m; i++)
		{
			a[i][i] = 'X';
			a[i][m - i-1] = 'X';
		}
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
			{
				printf("%c", a[i][j]);
			}
			printf("\n");
		}
		m = 1;
	}
	system("pause");
	return 0;
}
