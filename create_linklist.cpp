#include<iostream>
#include<stdlib.h>
struct node
{
	int a;
	struct node *l;
};
int main()
{
	struct node *t,*n,*h='\0';
	for(int i=0;i<4;i++)
	{
		n = new node;
		if(h=='\0')
		{
			h=n;
			t=n;
			n->a=i+10;
		}
		else{
			
		n->a=i+10;
		t->l=n;
		t=n;
		t->l='\0';
		
		
	       }
	
	}

	
	struct node *o,*p,*q;
	
	p=new node;
	p=h;
	
	while(p!='\0')
	{
		std::cout<<" "<<p->a;
		p=p->l;
	}
	
	
}
