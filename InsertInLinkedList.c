//SearchingInLinkedList.c

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
    int i, n=0, value,item,count = 0;
    nodeptr start, ptr,New,Temp;
    start=getnode();//creating the first node.
    ptr=start;//assigning the first node into ptr.
    printf("Enter a negative value to Terminate:\n");
    do{
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
    ptr = start -> next;

    printf("\nEnter the position of the node you want to insert in this list: ");
    scanf("%d",&n);

    printf("\nEnter the value you want to Insert in this list: ");
    scanf("%d",&item);
    while(ptr!=0){
        count++;//counting the number of node.
        if(count == n-1){
            New=getnode();
            Temp = ptr->next;
            ptr->next = New;
            New->info = item;
            New->next = Temp;
            break;
        }
        ptr=ptr -> next;
    }
    ptr = start -> next;
    while(ptr!=0){
        printf("%d ", ptr->info);
        ptr=ptr -> next;
    }
    
}

// //SearchingInLinkedList.c

