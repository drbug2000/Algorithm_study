#include <stdio.h>

int CON_NUM =15746;
int main(){
    int input=0;
    scanf("%d",&input);
    int output =0;
    int a=1;
    int b=2;
    if(input<=3){
       output=input;
     }
    for (int r=3;r<=input;r++){
        output=(a+b)%CON_NUM;
        a=b;
        b=output;
    }
    printf("%d",output);
    return 0;
}

