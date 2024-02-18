#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ispel(int num){
    //debug
    if(num<10){
    // 1
    return true;
    }
    char pos[5]={-1};
    char max=4;
    int ten=10000;
    
    pos[0]=num%10;

    for(int i=4;i>0;i--){
        if(num>=ten){
            pos[i]= (int)((num%(ten*10))/(ten));
                
        }else{
            max-=1;
        }
        ten/=10;
    }
    
    ten=1;
    int test=0;
    for(int i=0;i<=max;i++){
        test += pos[i]*ten;
        ten *= 10;
    }
    
    
    bool result=true;

    for(int i=0;i<(float)max/2;i++){
        if(pos[i]!=pos[max-i]){
            result=false;
            //return false;
        }
    }
    //return true;
    return result;
}

int main(){
    int num;
    char flag=true;
    
    while(flag){
        scanf("%d",&num);
        if(num<=0){
            flag=false;
            break;
        }
        if(ispel(num)){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;

}
