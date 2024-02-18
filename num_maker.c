#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(){

    int input=0;
    printf("출력을 원하는 만큼의 숫자를 입역하세요: ");
    scanf("%d",&input);
    
    char wall = '\n';
    int interval=100;//n개 마다 다음 줄로 
    srand(time(NULL));

    for(int i=1;i<=input;i++)
    {
        printf("%d%c",rand()%1000,wall);
        if(i%interval==0){
            printf("\n");
        }
    }



}
