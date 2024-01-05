#include <stdio.h>

int main(){

    int input;
    scanf("%d",&input);
    
    int line=1;
    int block=0;
    
    int before=0;
    int num=1;

    while(  num<input){
        before = num;
        line++;
        num= ((line+1)*line)/2;
        //printf("\n internal num:%d",num);
    }
    num=before;
    block = input-num;
    
    int output = 0;
    
    if(line%2==0){//짝수 
        output = block;
    }else{
        output = line+1-block;
    }
    //printf("\ninput :%d", input);
    //printf("  line: %d , block :%d , num :%d \n",line,block,num);
    //printf("\nresult :%d/%d",output,line+1-output);
    printf("%d/%d",output,line+1-output);
    return 0;
}
