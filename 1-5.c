#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int close(char *str1, char *str2,int m,int n){
        int i = 0;
        int u = 0;
        int edits = 0;
        int front = 1;
        for(i;i<m;i++){
            if (edits > 1){
            return 1;
        }
            if (str1[i] == str2[u]){
                u++;
                continue;
                
            }
            else{
                u++;
                if (str1[i] != str2[u]){
                    return 1;
                }
                if(front>0){
                    front--;
                    edits++;
                }
                else{
                    edits++;
                }
            }
        }
        return 0;
    }
int main(void){
    char str1[] = "hello";
    char str2[] = "heli";
    int m = strlen(str1);
    int n = strlen(str2);
    if(m-n > 1 ){
        printf("not one step away");
    }
    
    else{
        printf("%i", close(str1, str2, m, n));
        
}
}