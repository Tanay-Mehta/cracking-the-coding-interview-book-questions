typedef struct node{
    int x;
    int y;
    struct node* next;
}node;

void setZeroes(int** matrix, int matrixSize, int* matrixColSize){
    node *tmp;
    node *head = NULL;

    int first=1;
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<*matrixColSize;j++)
        {
            if(matrix[i][j]==0)
            {
                    node *N = malloc(sizeof(struct node));
                    N->x = i;
                    N->y = j;
                    if(!first)
                    {
                        tmp->next = N;
                        tmp = tmp -> next;  
                    }
                    else 
                    {
                        tmp = N;
                        head = N;
                        first = 0;
                    }
            }
        }
    }
    
    tmp -> next = NULL;
    
    while(head)
    {
        int i;
        for(i=0;i<*matrixColSize;i++)
            matrix[head->x][i] = 0;
        
        for(i=0;i<matrixSize;i++)
            matrix[i][head->y] = 0;
        
        head = head->next;
    }
}