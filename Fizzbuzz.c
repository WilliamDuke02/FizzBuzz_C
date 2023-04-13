#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    
*/
int main(int argc, char *argv[]) {
    if (argc != 2) {//check arguments
        printf("Usage: \"./Fizzbuzz X where X is a positive integern\"  ");
        return 1;
    }

    char *check;
    long num = strtol(argv[1], &check, 10); //found this check on stack overflow
    if(*check != '\0'){
        printf("Argument needs to be a number");
        return 1;
    }
    
    char output_arr[num+1][100];
    memset(output_arr,0,sizeof(output_arr));
    for(long i = 0; i <= num; i++){
        if(i % 7 == 0 && i % 3 == 0){
            strcat(output_arr[i],"FIZZBUZZ");
        }else if(i % 7 == 0){
            strcat(output_arr[i],"FIZZ");
        }else if(i % 3 == 0){
            strcat(output_arr[i],"BUZZ");
        }else{
            char ch_num[20];
            snprintf(ch_num, sizeof(ch_num),"%ld",i);
            strcat(output_arr[i],ch_num);
        }
    }
    for(long i = 0; i <= num; i++){
        printf("%s\n",output_arr[i]);
    }
    return 0;

}