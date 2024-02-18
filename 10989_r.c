#include <stdio.h>
#include <stdlib.h>

int main(){

    int input=0;
    scanf("%d",&input);

    int* arr = (int*)malloc(sizeof(int)*10000);
    int temp;
    for(int i=0;i<10000;i++){
        arr[i]=0;
    }
    for(int i=0;i<input;i++){
        scanf("%d",&temp);
        arr[temp-1]++;
    }
    int counter=0;
    for(int i=0;i<10000;i++){
        temp=arr[i];
        if(temp==0){
            continue;
        }else{
            counter+=temp;
            for(int r=0;r<temp;r++){
                printf("%d\n",i+1);
            }
        }
        if(counter==input){
            break;
        }
    }
    free(arr);
    return 0 ;

}
