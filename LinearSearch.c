#include<stdio.h>
#include<string.h>

int main()
{
	int loc=0,item,i,data[10]={1,4,24,33,34,47,67,77,87,345};

	printf("This is the main array.\n");
	for(i=0;i<10;i++){
		printf("%d ",data[i]);
	}
	printf("\nEnter the valu what you want to search: ");
	scanf("%d",&item);
	data[9]=item;
	//searching for 77 using linear search
	printf("\nLinear search:\n");
	while(data[loc]!=item){
		loc=loc+1;
	}
	if(loc==9){
		printf("%d is not found\n",item);
	}
	else{
		printf("%d item is found in index %d\n",item,loc+1 );
	}
}