#include<stdio.h>

int main()
{
	int matrix[10][10][10],c[10][10],i,j,k,m,n,temp=0,vi,vj,flag = 0;
	printf("Please Enter the number of verticies:  ");
	scanf("%d",&n);
	printf("\nNow Enter the Adjecent matrix: \n");
	for(i = 0;i < n;i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d",&matrix[0][i][j]);
		}
	}
	for(m = 0 ; m<n;m++)
	{
		for(i = 0;i < n;i++)
		{
			for (j = 0; j < n; j++)
			{
				for (k = 0; k < n; k++)
				{
					temp = matrix[m][i][k] * matrix[0][k][j] + temp ;
				}
				matrix[m+1][i][j] = temp;
				temp = 0;

			}
		}
	}
	for(i = 0; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			for( m = 0 ; m <= n ; m++)
			{
				temp = temp + matrix[m][i][j]; 
			}
			matrix[n+1][i][j] = temp;
			temp = 0;
			if (matrix[n+1][i][j] == 0 )
			{
				printf("This graph is not strongly connected.\n");
				flag = 1;
				return 0;
			}

		}
	}
	if (flag == 0)
	{
		printf("This graph is strongly connected\n");
	}
}