#include <stdio.h>

int main(){
    int input=0;
    scanf("%d",&input);
    int line=1;
    int scale = 1;
    while(scale<input){
        line++;
        scale += 6*(line-1);
    }
    printf("%d",line);
    return 0 ;
}
