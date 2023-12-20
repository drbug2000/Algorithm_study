#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *buffer= (char*)malloc(sizeof(char)*1000000+1);
    scanf("%s",buffer);
    int leng = strlen(buffer);
    char *input_str = (char*)malloc(sizeof(char)*leng+1);
    strcpy(input_str, buffer);
    free(buffer);
    int alpha[26] = {0,};

    for(int i=0;i<leng;i++){
        char tar= input_str[i];    
        if( /*tar<123&&*/tar>96){
            tar-=32;
        }

        if( tar>90||tar<65){
            printf("\nnot alphabet error\n ");
            return -1;
        }else{
            alpha[tar-65]++;
        }
    }
    
    char biggest = '?';
    int bignum = 0;

    for(int i=0;i<sizeof(alpha)/sizeof(int);i++){
        int num = alpha[i];
        char tar_char = i+65;
        
        if(bignum<num){
            biggest = tar_char;
            bignum=num;

        }else if(bignum==num){
            biggest = '?';
        }
    }
    printf("%c",biggest);
    free(input_str);
    return 0;
}
