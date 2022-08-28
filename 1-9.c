#include <string.h>
#include <stdio.h>

void sort(char *string){
    char temp;

   int i, j;
   int n = strlen(string);

   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
}
int main (void) {
    char string1[] = "hello";
    char string2[] = "elhlo";
    sort(string1);
    sort(string2);
    int t = strcmp(string2, string1);
    if(t == 0){
        printf("its a string rotation");
    }
    else{
        printf("its not a string rotation");
    
    }
}