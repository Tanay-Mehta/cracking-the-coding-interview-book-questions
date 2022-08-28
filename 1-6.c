#include <string.h>
#include <stdio.h>

void StrCom(char *str){
    char arr[strlen(str)];
    int len[strlen(str)];
    int i,j,k;
    for(i=0;i<strlen(str);i++){
        for(j=0;j<strlen(arr);j++){
            if(str[i] == arr[0]){
                arr[j] = str[i];
            }
            else{
                if(i == 0){
                    arr[j] = str[i];
                }
                len[k] = strlen(arr);
                k++;
                memset(arr, '0', strlen(arr));
            }
        }
    }
    int n;
    for(n=0;n<strlen(str);n++)
    printf("%c%i",str[n],len[n]);
}

int main(void){
    char str[] = "aaaaaabbbcccc";
    StrCom(str);
}