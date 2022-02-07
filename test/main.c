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

int main() {
    char arr[50]={0};
    gets(arr);
    int str=strlen(arr);
    _Reverse(arr,arr+str-1);
    puts(arr);
    return 0;
}
