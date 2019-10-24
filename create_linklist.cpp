#include<iostream>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int main()
{
	int n;
	struct node *t,*n,*h='\0';
	std::cout<<"enter no. of nodes ";
	std::cin>>n;
	for(int i=0;i<n;i++)
	{
		n = new node;//new node creation
		if(h=='\0')
		{
			h=n;//assigning head node for the first node
			t=n;
			n->data=i+10;
		}
		else{
			
		n->data=i+10;
		t->link=n;//linking of previous node with new node
		t=n;
		t->link='\0';
		
		
	       }
	
	}

	
	struct node *p;
	
	p=new node;
	p=h;//taking first node
	
	while(p!='\0')
	{
		std::cout<<" "<<p->data;
		p=p->link;//traversing to next node
	}
	
	
}
