//Header Linked list.


#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


//Defining a basic node
struct node{
    int info;//data of this node
    struct node *next;//link of next node
};
typedef struct node *nodeptr;//address of this node


//creating a node in memory
nodeptr getnode(void){
    nodeptr p;//creats a pointer of node
    p=(nodeptr)malloc(sizeof(struct node));//allocates memory for the created node.
    return p;//returns the node after creation
}

//connecting the node in link list
nodeptr insertnode(nodeptr ptr, int value){//recives a node and a value of that node
    nodeptr q;
    q=getnode();//creates a node using getnode
    q -> info=value;//sets the value of the node
    ptr->next = q;//connect this node to the previous node
    return q;//returns the address of this node
}

int main(){
	int i, n, value,total=0,max,min;
	double average;
	nodeptr start, ptr;
	start=getnode();//creating the first node.
    ptr=start;//assigning the first node into ptr.
	printf("Enter the number of node you want to create: ");	
	scanf("%d",&n);
	printf("\nEter the data of every node:\n");
	for(i=0;i<n;i++){
		scanf("%d",&value);
		ptr=insertnode(ptr,value);
	}
	ptr -> next = 0;//assigning nul into the last link.
    ptr = start -> next;//pointing the oheader node
    printf("\nThe linked list:");
    for(i=0;i<n;i++){//printing all the nodes.
		printf("%d ",ptr ->info);
		ptr=ptr -> next;
	}
	ptr = start -> next;
	max = ptr ->info;
	min = ptr ->info;
	for(i=0;i<n;i++){
		if((ptr ->info)>=max){
			max = ptr ->info;
		}
		if((ptr ->info)<=min){
			min = ptr ->info;
		}
		total = total+ptr ->info;
		ptr=ptr -> next;
	}
	average = total/(1.0*n);
	printf("\nTotal value of the nodes = %d\n",total);
		printf("maximum value of the linked list= %d\n",max);
		printf("minimum value of the linked list= %d\n",min);
		printf("average= %f\n",average);
}