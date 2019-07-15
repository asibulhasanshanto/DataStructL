#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,temp,data[10]={4,1,34,24,565,87,345,67,47,33};
	printf("The main array\n");
	char stemp[20];
	for(i=0;i<10;i++){
		printf("%d ",data[i]);
	}

	//sorting the integer array using bubble sort.
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			if(data[i]>=data[j]){
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
	}

	printf("\nPrinting after sorting\n");
	for(i=0;i<10;i++){
		printf("%d ",data[i]);
	}
	printf("\n");
	//Sorting a string array using buble short.
	printf("\nPrinting the main string array\n");
	char name[20][20]={"alamin","abdullah","rabbi","karim","rahim","rifat","shanto","salam"};
	for(i=0;i<8;i++){
		printf("%s ",name[i]);
	}

	for(i=0;i<8;i++){
		for(j=i;j<8;j++){
			if(strcmp(name[i],name[j])>0){
				strcpy(stemp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],stemp);
			}
		}
	}
	printf("\n\nprinting the sorted string array\n");

	for(i=0;i<8;i++){
		printf("%s ",name[i]);
	}

}