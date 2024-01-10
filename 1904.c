#include <stdio.h>

int nCr(int n, int r){
    if(r==0 || n == r){
        return 1;
    }else{
        return nCr(n-1,r)+nCr(n-1,r-1);
    }
}

int main(){

    int input=0;
    scanf("%d",&input);

    int output=0;
    for(int i = 0;i<=input/2;i++){
        output += nCr(input-i,i);
    }
    printf("%d",output);
    return 0;
}
