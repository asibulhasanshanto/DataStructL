#include<stdio.h>
#include<string.h>

int main()
{
	int i,j;
	char name[20][20]={"abdullah","alamin","rabbi","rahim","karim","rifat","salam","shanto"};
	//printing main array
	printf("This is the main list\n");
	for(i=0;i<7;i++){
		printf("%s\n",name[i]);
	}
//deleting karim
	for(i=0;i<8;i++){
		if((strcmp(name[i],"karim")==0)){
			for(j=i;j<8;j++){
				strcpy(name[j],name[j+1]);
			}
			strcpy(name[7],"");
			// break;
		}
		
	}
	printf("\nPrinting aafter deleting karim\n");
	for(i=0;i<7;i++){
		printf("%s\n",name[i]);
	}

	//deleting item from position 2

	for(i=1;i<7;i++){
			for(j=i;j<7;j++){
				strcpy(name[j],name[j+1]);
			}
			strcpy(name[6],"");
			break;
		
	}
	printf("\nPrinting the item of position 2\n");
	for(i=0;i<6;i++){
		printf("%s\n",name[i]);
	}
}