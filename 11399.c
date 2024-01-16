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
    printf("\npartition %d~%d\n",left,right);
    printf("\npivot is %d:%d\n",pivot,list[pivot]);
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
            printf("swap %d:%d &%d:%d\n",low,list[low],high,list[high]);
            swap(&list[low],&list[high]);
        }
    }while(low<high);
 
     printf("\nlast high & low position low%d - high%d",low,high);
     /*if((high>pivot && low<pivot)||high==pivot||high==low){
        return pivot;
     }else if(high>pivot){
        swap(&list[high],&list[pivot]);
        return high;
    }else{
        swap(&list[low],&list[pivot]);
        return low
    */
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
    
    //debuging
    printf("\nN:%d\n",N);
    for(int i =0;i<N;i++){
        printf("%d:%d   ",i,arr[i]);
    }
    
   // swap(arr,&arr[1]);
   // printf("[swap test] 0:%d,1:%d",arr[0],arr[1]);
    

    quick_sort(arr,0,N-1);
    printf("[sort test]");

    //debuging
    printf("\nN:%d\n",N);
    for(int i =0;i<N;i++){
        printf("%d:%d   ",i,arr[i]);
    }
    
    //정렬
    
    
    //계산 
    int output=0;
    for(int i =0 ; i < N ; i++){
        output +=arr[i]*(N-i);
    }
    
    printf("[result] %d\n",output);

    return 0;
}
