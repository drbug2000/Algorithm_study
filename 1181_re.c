#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max_str = 50;
int compare(const void *a,const void *b ){
    const char *str1 = *(const char **)a;
    const char *str2 = *(const char **)b;

    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    if(len1< len2){
        return -1;
    }else if(len1>len2){
        return 1;
    }else{
        return strcmp(str1,str2);
    }  
}

int main(){

    int size=0;
    char buffstr[max_str+1];
    scanf("%d" , &size);
    char ** list = (char **)malloc( size * sizeof(char *));
    
    size_t strsize=0;
    for(int i=0;i<size; i++){
        scanf("%s",buffstr);
        strsize = strlen(buffstr);
        list[i] = (char *)malloc((strsize+1)*sizeof(char));

        snprintf(list[i],strsize+1,"%s",buffstr);
    }
    
    qsort(list,size,sizeof(list[0]),compare);
    
    memset(buffstr,0,sizeof(buffstr));
    for(int i=0;i<size;i++){
        if(i>0 && strcmp(list[i],list[i-1])==0){
            continue;
        }
        
        printf("%s\n",list[i]);
    }
    for(int i=0;i<size;i++){
        free(list[i]);
    }
    free(list);


    return 0 ;
}
