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
	int i,n=0,value;
	nodeptr start, ptr;
	start=getnode();//creating the first node.
    ptr=start;//assigning the first node into ptr.
	printf("Enter a negative value to Terminate:\n");
    do{
    	n++;
        scanf("%d", &value);
        if(value>=0)
            ptr=insertnode(ptr, value);
    }while(value>=0);

	ptr -> next = 0;//assigning nul into the last link.
    ptr = start -> next;//pointing the oheader node
    printf("\nStatus of the linked list is:\n");
    while(ptr!=0){
        printf("%d ", ptr->info);
        ptr=ptr -> next;
    }
}