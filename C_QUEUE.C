//Coded by Deepanshu Sharma
#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int cq[MAXSIZE],front=-1,rear=-1;
void main()
{
int choice;
clrscr();
printf("Created By Deepanshu Sharma");
do{
	printf("\n\n----------------------------Circular Queue--------------------------------------");
	printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit");
	printf("\npress 4 than press enter to exit");
	printf("\nEnter an Element:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:insert();break;
	case 2:delete1();break;
	case 3:display();break;
	default:printf("\nInvalid Input");
	}
}while(choice!=4);
getch();
}
insert(){
	int n;
	if((rear+1)%MAXSIZE==front)
		printf("\nQueue is full");
	else{
	      printf("\nEnter Element:");
	      scanf("%d",&n);
	      if(rear==-1 && front==-1)
	      { rear=0;
		front=0;
	      }
	      else{
		rear=(rear+1)%MAXSIZE;
	       }
		cq[rear]=n;
	}
}
delete1()
{
	int n;
	if(rear==-1 && front==-1)
	 printf("\nQueue is empty");
	else{
	 n=cq[front];
	 if(front==rear){
	  front=-1;
	  rear=-1;
	  printf("\nDeleted element is %d",n);
	  }
	 else{
	  front=(front+1)%MAXSIZE;
	  printf("\nDeleted element is %d",n);
	 }
	 }
}
display()
{
	int i;
	if(front==-1 && rear==-1)
	 printf("\nQueue is empty");
	else{
	 printf("\nQueue elements");
	 for(i=front;i!=rear;i=(i+1)%MAXSIZE){
	  printf("\n%d",cq[i]);
	  }
	 printf("\n%d",cq[i]);
	}
}































