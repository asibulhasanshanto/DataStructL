#include<stdio.h>
int main(){
    int A[10][10][10];
    int AA[10][10][10];
    int AAA[10][10][10];
    int AAAA[10][10][10];
    int B[10][10][10];
    int P[10][10][10];
    int i,j,k;
    int sum;
    int n,temp = 0;
    printf("Items of 4X4 Adjacent matrix : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&A[1][i][j]);
        }
    }

    printf("Adjacent Matrix A: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",A[1][i][j]);
        }
        printf("\n");
    }

    printf("\n\n A.A :\n");
    //AA
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            sum = 0;
            for(k=0;k<4;k++){
            sum = sum + A[1][i][k] * A[1][k][j];
            }
        AA[1][i][j] = sum;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",AA[1][i][j]);
        }
        printf("\n");
    }
    //AAA
    printf("\n\n A.A.A : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            sum = 0;
            for(k=0;k<4;k++){
            sum = sum + AA[1][i][k] * A[1][k][j];
            }
        AAA[1][i][j] = sum;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",AAA[1][i][j]);
        }
        printf("\n");
    }

    //AAAA
    printf("\n\n A.A.A.A : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            sum = 0;
            for(k=0;k<4;k++){
            sum = sum + AA[1][i][k] * AA[1][k][j];
            }
        AAAA[1][i][j] = sum;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",AAAA[1][i][j]);
        }
        printf("\n");
    }
    // B = A + A.A + A.A.A + A.A.A.A
    printf("B : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            B[1][i][j] = A[1][i][j] + AA[1][i][j] + AAA[1][i][j] + AAAA[1][i][j];
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",B[1][i][j]);
        }
        printf("\n");
    }
    // Path matrix P form B

    printf("\nPath matrix : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(B[1][i][j] >0){
                P[1][i][j] = 1;
            }
        }
    }
    // connected or not
   for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if(P[1][i][j] == 0){
            printf("Not connected\n");
            temp = 1;
            return 0;
        }
    }
   }
   if(temp == 1){
    printf("Connected\n");
    return 0;
   }




    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",P[1][i][j]);
        }
        printf("\n");
    }

    return 0 ;
}