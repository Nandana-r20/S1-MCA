#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
	};
   struct node* top=NULL;
  void push()
   {
   	struct node*newnode;
   	newnode=(struct node*)malloc(sizeof(struct node));
   	if(newnode==NULL)
   	{
   		printf("\n no space");
   		return;
   	}	
   	newnode->link=NULL;
   	printf("\n enter element to insert");
   	scanf("%d",&newnode->data);
   	if(top==NULL)
   	{
   		top=newnode;
   	}
   	else
   	{
   		newnode->link=top;
   		top=newnode;
   	}
   	printf("\n %d successfully inserted\n ",newnode->data);
   }
   void pop()
   {
   	struct node*temp=top;
   	if(top==NULL)
   	{
   		printf("\n stack underflow \n");
   		return;
   	}
   	printf("\n %d popped successfully\n ",temp->data);
   	top=temp->link;
   	free(temp);
   }
   void peek()
   {
   	struct node*temp=top;
   	if(top==NULL)
   	{
   		printf("\n stack underflow \n");
   		return;
   	}
   	printf("\n %d is the top element\n",temp->data);
   }
   void display()
   {
   	struct node*temp=top;
   	if(top==NULL)
   	{
   		printf("\n NO elements\n");
   		return;
   	}
   	while(temp!=NULL)
   	{
   		printf("\n%d",temp->data);
   		temp=temp->link;
   	}
   	
   }
   void search()
   {
   struct node*temp=top;
   	int found=0,key,pos=0;
   	if(top==NULL)
   	{
   		printf("\n stack underflow\n");
   		return;
   	}
   	printf("\nenter element to search\n");
   	scanf("%d",&key);
   	while(temp!=NULL)
   	{
   		if(temp->data==key)
   		{
   			printf("\n %d found at position %d \n",temp->data,pos+1);
   			found=1;
   			return;
   		}  
   		pos++;
   		temp=temp->link;
   		
   	}
   	if(!found)
   	{
   		printf("\nelement not found \n");
   	}
   	
   }
   void main()
   {
   	int choice;
   	do
   	{
   	printf("\n");
   		printf("\n ----STACK OPERATIONS---- \n");
   		printf("\n 1.push \n 2.pop \n 3.peek \n 4.display \n 5.search \n 6.exit \n");
   		printf("\n Hey!...enter your choice");
   		scanf("%d",&choice);
   		switch(choice)
   		{
   			case 1: push();
   				break;
   			case 2: pop();
   				break;
   			case 3: peek();
   				break;
   			case 4: display();
   				break;
   			case 5: search();
   				break;
   			case 6: printf("\n exit \n");
   				break;
   			default: printf("invalid");
   				break;
   				
   		}
   	}while(choice!=6);
   }
