#include <stdio.h>
#include <stdlib.h>

#define LIMIT 1000000000 
typedef unsigned long int num;


num stairs(num** arr, int level, int number){
    if(number < 0 || number > 9 ){
        return 0;
    }   
    if(level ==1 && number ==0){
        return 0;
    }else if(level ==1 ){
        return 1;
    }
    num result=0;
    if(arr[number][level-1]!=0){
        return arr[number][level-1];
    }else{
        result = (stairs(arr,level-1,number+1) + stairs(arr,level-1,number-1))%LIMIT;        
        arr[number][level-1]=result;
    }
    return result;
}

int main(){
    
    int input;
    scanf("%d",&input);

    //made array 
    num **array = (num**)malloc(sizeof(num*)*10);
    array[0]= (num*)malloc(sizeof(num)*input*10);
    

    for(int i =0;i<input*10;i++){
        array[0][i]=0;
    }

    for(int i =1 ; i<10;i++){
        array[i] = array[0]+i*input;
    }
    //set for 0~9
    num output=0;
    for(int i=0;i<10;i++){
        output+=stairs(array,input,i);
    }
    
    printf("%lu",output%LIMIT);
    return 0;
}
