#include<stdio.h>
struct node{
    struct node *ladd;
    int data;
    struct node *radd;
};struct node *root=NULL,*new1;
void main(){
    int choice,n;
    char ch;
    printf("\n------------------------------Tree--------------------------------");
do{    printf("\n1.Create \n2.INorder \n3.Preorder \n4.Postorder");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        {
        do{    printf("\nEnter Element:");
            scanf("%d",&n);
            new1=(struct node*)(malloc(sizeof(struct node)));
            new1->ladd=NULL;
            new1->radd=NULL;
            new1->data=n;
            if(root==NULL)
                root=new1;
            else{
                create(root,new1);
            }
            printf("\nWant to continue:");
            ch=getche();
            }while(ch=='y' || ch=='Y');break;
        }
            case 2:inorder(root);break;
            case 3:preorder(root);break;
            case 4:postorder(root);break;
            default:printf("\nInvalid choice.......");
    }}while(choice!=5);
}
void create(struct node *r,struct node *new1){
    if(new1->data<r->data){
        if(r->ladd==NULL){
            r->ladd=new1;
        }
        else{
            create(r->ladd,new1);
        }
}
    if(new1->data>r->data){
        if(r->radd==NULL){
            r->radd=new1;
        }
        else{
            create(r->radd,new1);
        }
    }
    if(r->data==new1->data){
        printf("\nDuplicate Entry not allowed");
    }
}
void inorder(struct node *r){
    if(r!=NULL){
        inorder(r->ladd);
        printf("%d ",r->data);
        inorder(r->radd);
    }
}
void preorder(struct node *r){
    if(r!=NULL){
        printf("%d ",r->data);
        preorder(r->ladd);
        preorder(r->radd);
    }
}
void postorder(struct node *r){
    if(r!=NULL){
        postorder(r->ladd);
        postorder(r->radd);
        printf("%d ",r->data);
        
        
    }
}