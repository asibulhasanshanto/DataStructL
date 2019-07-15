#include<stdio.h>

int main()
{
	int matrix[10][10][10],c[10][10],i,j,k,m,n,temp=0,vi,vj;
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


	//Part a of problem 1.
	printf("\nPart a:\n========");
	printf("\nThe adjecent of V1 to Vm:\n");
	for(i = 0;i < n;i++)
	{
		for (j = 0; j < n; j++)
		{
			if(matrix[0][i][j] > 0){
				printf("V%d is adjecent to v%d\n",i+1,j+1);
			}	
		}
		
	}

	//part B c d of problem 1;

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
	printf("\nPart B , C & D\n========\n");
	printf("Please Enter V(i) and V(j): ");
	scanf("%d%d",&vi,&vj);
	printf("There are %d path of length 2 from V(%d) to V(%d).\n",matrix[1][vi-1][vj-1],vi,vj );
	printf("There are %d path of length 3 from V(%d) to V(%d).\n",matrix[2][vi-1][vj-1],vi,vj );
	printf("There are %d path of length 4 from V(%d) to V(%d).\n",matrix[3][vi-1][vj-1],vi,vj );
}