#include<stdio.h>
#include<math.h>

int main(){
    int n=10,maximum,minimum,total=0;
    double sine,average;
    int data[10] ={30,65,2,90,7,5,34,23,12,76};
    maximum = data[0];
    minimum = data[0];
    for(int i = 0;i<n;i++){
        if(data[i]>maximum){
            maximum = data[i];
        }
        if(data[i]<minimum){
            minimum=data[i];
        }
        total = total+data[i];
        sine = sin((data[i]*3.14)/180);
        printf("sine of %d = %0.2f\n",data[i],sine);
    }
    average = total/(n*1.0);
    printf("Maximum = %d \nMinimum = %d \nTotal = %d\nAverage = %0.2f\n",maximum,minimum,total,average);
}
