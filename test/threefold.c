//
// Created by 孙永健 on 2022/2/9.
//
#include <stdio.h>
#include <string.h>

void _Reverse(char * left,char * right)
{
    while(left<right){
        char tem=*left;
        *left=*right;
        *right=tem;
        left++,right--;
    }
}

int _ThreeFold() {
    char arr[50]={0};
    gets(arr);
    int str=strlen(arr);
    _Reverse(arr,arr+str-1);
    char * start=arr;
    while(*start){
        char * end=start;
        while(*end!=' '&&*end!='\0'){
            end++;
        }
        _Reverse(start,end-1);
        if(*end==' '){
            start=end+1;
        }
        else{
            start=end;
        }
    }
    puts(arr);
    return 0;
}
