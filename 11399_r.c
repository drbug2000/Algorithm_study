#include <stdio.h>
#include <stdlib.h>

void swap(int* a,int* b){

    int temp=*a;
    *a= *b;
    *b=temp;

}
int partition(int list[],int left,int right){

    int low=left-1;
    int high=right;
    int pivot = (left+right)/2;
    swap(&list[pivot],&list[right]);
    pivot=right;
    right--;   
    
    do{
        do{
            low++;
        }while((list[low]<=list[pivot])&&low<=right);//||low==apivot){
            
        do{
            high--;
        }while((list[high]>list[pivot])&&left<=high);
    
        if(low<high){
            swap(&list[low],&list[high]);
        }
    }while(low<high);
    swap(&list[low],&list[pivot]);
    return low;
}

void quick_sort(int list[],int left, int right){
    
    if(left<right){
        int pivot = partition(list,left,right);
    
        quick_sort(list,left,pivot-1);
        quick_sort(list,pivot+1,right);
    }
}

int main(){
        
    int N;
    //int k[5];
    scanf("%d",&N);
    
    int* arr = (int*)malloc(sizeof(int)*N);

    for(int i=0 ; i <N;i++){
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,N-1);
    
    int output=0;
    for(int i =0 ; i < N ; i++){
        output +=arr[i]*(N-i);
    }
    
    printf("%d",output);

    return 0;
}
