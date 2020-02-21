// 6210450695 Rawisara Mawilerd

#include <stdio.h>
#include<stdlib.h>

struct node { 
    int data; 
    struct node *next; 
}; 

void list(struct node **head, struct node **tail){
    int n;
    while (1)
    {
        scanf("%d",&n);
        if (n<=-1)
        {
            break;
        }
        else if(*head == NULL ){
            *head = *tail = (struct node *)malloc(sizeof(struct node));
        }  
        else{
            (*tail)->next = (struct node *)malloc(sizeof(struct node));
            *tail = (*tail)->next;
      }

      (*tail)->data = n;
      (*tail)->next = NULL;
      
    }
    
}

void sort(struct node *head){
    struct node *x ,*y;
    x = head;
    for (; x != NULL; x=x->next)
    {
        for ( y=x->next; y!= NULL; y=y->next)
        {
            if (x->data > y->data)
            {
                swap(x, y);
            }
            
        }   
    }
}

void swap(struct node *xx, struct node *yy) 
{ 
    int tmp = xx->data;
    xx->data = yy->data;
    yy->data = tmp; 
} 



void print(struct node *head){

    struct node *tmp= head;
    for (tmp=head; tmp; tmp = tmp->next)
    printf("%d\n", tmp->data);
    
}


int main(){
    struct node *head=NULL, *tail,*num;
    list(&head, &tail);
    sort(head);
    print(head);

}
