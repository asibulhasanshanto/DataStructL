#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *next;
};
typedef struct node *nodeptr;

nodeptr getnode(void);
nodeptr insertnode(nodeptr, int value);

int main()
{
    int i, n, value, sum=0, min, max=0, count=0;
    double avg, sinvalue;
    nodeptr start, ptr;
    start=getnode();
    ptr=start;
    printf("Enter a negative value to Terminate:\n");
    do{
        scanf("%d", &value);
        if(value>=0)
            ptr=insertnode(ptr, value);
    }while(value>=0);

    ptr -> next = 0;
    ptr = start -> next;
    printf("\nStatus of the linked list is:\n");
    min=ptr->info;
    while(ptr!=0){
        printf("%d ", ptr->info);
        sum+=ptr->info;
        count++;
        if((ptr->info)>max)
            max=ptr->info;
        if((ptr->info)<min)
            min=ptr->info;
        ptr=ptr -> next;
    }
    avg=(double)sum/count;
    printf("\nThere are %d numbers in the list.\n", count);
    printf("The maximum value is %d\n", max);
    printf("The minimum value is %d\n", min);
    printf("The total value is %d\n", sum);
    printf("The average value is %.4lf\n", avg);
    return 0;
}
nodeptr insertnode(nodeptr ptr, int value){
    nodeptr q;
    q=getnode();
    q -> info=value;
    ptr->next = q;
    return q;
}
nodeptr getnode(void){
    nodeptr p;
    p=(nodeptr)malloc(sizeof(struct node));
    return p;
}
