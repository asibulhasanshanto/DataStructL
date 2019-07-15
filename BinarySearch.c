#include<stdio.h>

int main(){
	int data[10]={1,4,24,33,34,47,67,77,87,345},lb,ub,item,loc,beg,end,mid;
	lb=0,ub=9,beg=lb,end=ub,mid=(int)((beg+end)/2);
	printf("The main array:\n");
	for(int i = 0;i<10;i++){
		printf("%d ",data[i]);
	}
	printf("\nPlease enter the value you want to search:");
	scanf("%d",&item);

	while(beg<=end && data[mid]!=item){
		if(item<data[mid]){
			end=mid-1;
		}
		else{
			beg=mid+1;
		}
		mid=(int)((beg+end)/2);
	}
	if(data[mid]==item){
		loc=mid;
	}
	else{
		loc=-1;
	}
	if(loc==-1){
		printf("\n%d is not found\n",item);
	}
	else{
		printf("\n%d is found in %d index\n",item,loc+1);
	}
}