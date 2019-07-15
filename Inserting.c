#include<stdio.h>
#include<string.h>

int main(){

    //Integer part
    int data[15] = {1,4,6,8,13,23,52,64,76,87,100};
    int i,j;
    printf("Main array\n");
    for(int i=0;i<11;i++){
        printf("%d\n",data[i]);
    }


    //Inserting 54 to this sorted array
    for(int i=0;i<11;i++){
        if(data[i]<54 && data[i+1]>54){
				for(int j = 10;j>i;j--){
					data[j+1]= data[j];
				}
				data[i+1]= 54;
				break;
			}
    }
    printf("\nAfter inserting 54\n");
    for(int i=0;i<12;i++){
        printf("%d\n",data[i]);
    }


    //inserting 99 to fifth position

    for(int i=11;i>=4;i--){
        data[i+1]= data[i];
    }
    data[4]=99;
    printf("\nAfter inserting 99 to fifth position\n");
    for(int i=0;i<13;i++){
        printf("%d\n",data[i]);
    }

    //String part


    //sorting the array
    char name[10][10]={"abdullah","rabbi","alamin","rifat","shanto","salam"};
    char temp[200];
    for(i=0;i<6;i++){
        for(j=i;j<6;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }


    //Inserting rahim to this sorted array of string
    for(int i=0;i<11;i++){
        if(strcmp(name[i],"rahim")<0 && strcmp(name[i+1],"rahim")>0){
                for(int j = 6;j>i;j--){
                    strcpy(name[j+1],name[j]);
                }
                strcpy(name[i+1],"rahim");
                break;
        }
    }    
    printf("\nInserted rahim in a sorted list.\n");
    for(i=0;i<7;i++){
        printf("%s\n",name[i]);
    }   



    //inserting karim to fifth position
    for(int i=8;i>=4;i--){
        strcpy(name[i+1],name[i]);
    }
    strcpy(name[4],"karim");
        printf("\nInserted karim to fifth place\n");
    for(i=0;i<8;i++){
        printf("%s\n",name[i]);
    }   
}

