//algorithm
/*
1.insert the root(k=1)
2.scan a number ;
	if the number is negative then exit the program
	else go to next step.
3.check k index.
	i)if the number is greater then k index then go k=2*k+1;
		a)if k=0 then insert the value in that position
		b)else if go to (3).
	ii)else if the nuber is less then k index then go to k=2*k;
		a)if k=0 then insert the value in that position
		b)else if go to (3).
	iii)else print that the number exists.go to position 2;
4 finish
*/

#include<stdio.h>

int main()
{
	int array[100],k=1,element=1,i;
	for(i=0;i<100;i++){
		array[i]=0;
	}
	printf("Insert the nodes of the tree.Insert a negative number to exit.\n");
	scanf("%d",&array[1]);
	while(element>0)
	{
		scanf("%d",&element);
		while(1){
			if(element>array[k]){
				k=(2*k)+1;
			}
			else if(element<array[k]){
				k=(k*2);
			}
			else if(element == array[k])
			{
				printf("%d number is already in index %d\n",element,k );
				break;
			}
			else{
				array[k]= element;
				break;
			}
		}
		
		
		

	}
	for (int i = 0; i < 100; i++)
	{
		if(array[i]>0){
			printf("Index %d : value %d\n",i,array[i] );
		}
	}
}