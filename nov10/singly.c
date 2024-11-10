#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node *head=NULL,*tail=NULL;
struct node create(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the value: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
struct node insert_at_begin(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the value: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
}
struct node insert_at_end(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the value: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    tail->next=newnode;
    tail=newnode;
}
struct node delete_at_begin(){
    struct node *temp=head;
    head=head->next;
    free(temp);
}
struct node delete_at_end(){
    struct node *ptr=head;
    while(ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    tail=ptr;
    ptr=ptr->next;
    free(ptr);
    tail->next=NULL;
}
struct node display(){
    struct node *ptr3=head;
    while(ptr3!=NULL){
      printf("%d \n",ptr3->data);
      ptr3=ptr3->next;
    }    
}
int main(){
int choice;
do{
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        create();
        break;
        case 2:
        insert_at_begin();
        break;
        case 3:
        insert_at_end();
        break;
        case 4:
        delete_at_begin();
        break;
        case 5:
        delete_at_end();
        break;
        case 6:
        display();
        break;
        default:
        printf("invalid");
    }
}while(choice!=0);
}