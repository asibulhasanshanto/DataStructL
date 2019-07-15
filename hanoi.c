#include<stdio.h>
#include<string.h>
Tower(int n,char BEG,char AUX,char END);
int main()
{	
	int j;
	printf("Enter the length of tower: ");
	scanf("%d",&j);
	Tower(j,'A','B','C');
}
Tower(int n,char BEG,char AUX,char END)
{
	if(n == 1){
		printf("%c -> %c\n",BEG,END);
		return;
	}
	Tower(n-1,BEG,END,AUX);
	printf("%c -> %c\n",BEG,END);
	Tower(n-1,AUX,BEG,END);
	return;
}