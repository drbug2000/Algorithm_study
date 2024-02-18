#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b){

if(*(int*)a>*(int*)b)
    return 1;
else if(*(int*)a<*(int*)b)
    return -1;
else 
    return 0;

}

int main(){

    int input;
    scanf("%d",&input);

    int *arr = (int*)malloc(sizeof(int)*input+2);

    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);

    }
    
    qsort(arr,input,sizeof(int),compare);

    for(int i =0;i<input;i++){
        printf("%d\n",arr[i]);

    }
    free(arr);

    return 0;
}
