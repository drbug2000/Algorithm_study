#include <stdio.h>

int CON_NUM =15746;
unsigned int A(int n){
    //printf("[n=%d]",n);
    unsigned int output =0;
    unsigned int a=1;
    unsigned int b=2;
    if(n<=3){
        return n;
    }

    for (int r=3;r<=n;r++){
        output=( a+b)%CON_NUM;
        a=b;
        b=output;
    }
    
    return output;
}


int main(){

    int input=0;
    scanf("%d",&input);

    printf("%d",A(input));
    return 0;
}
