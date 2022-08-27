#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *head = NULL; 

int length1(void){
    int count = 0;  
    struct node* current = head;  
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

int pop(int num){
    node *headref = head;
    while(headref->next->data != num){
        headref = headref->next;
    }
    node *next = headref->next->next;  
    node *prev = headref;
    prev->next = next;
}

void insert(int value){
    node *headref = head;
    if(headref == NULL){
        headref->data = value;
    }
    else{
        while(headref != NULL){
            headref = headref->next;
        }
        headref->data = value;
    }
}
int search(int x)
{
    struct node* current = head;
    while (current != NULL)
    {
        if (current->data == x)
            return 0;
            pop(x);
        current = current->next;
    }
    insert(x);
    return 1;
    
}
void PalPer(char *word,int length){
    int i;
    int j;
    for(i=0;i<length;i++){
        search(word[i]);
    }
}

int main(void){
    char word[] = "hello";
    PalPer(word, 5);
    int len = length1();
    if (len < 2){
        printf("its a palindrome");
    }
    else{
        printf("its not a palindrome");
    }

}