#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class node
{
	public:
	int data;
	node *lptr;
	node *rptr;
	node()
	{
		data=0;
		lptr=NULL;
		rptr=NULL;
	}
};
class bst
{
	node *head;
	public:
	bst()
	{
		head=NULL;
	}
	node* getnode();
	node* create();
	void inorder(node*);
	void preorder(node*);
	void postorder(node*);
	void non_inorder();
	void non_preorder();
	void non_postorder();
};
class stack
{
	node *data[20];
	int top;
	public:
	stack()
	{
		top=-1;
	}
	void push(node *temp)
	{
		data[++top]=temp;
	}
	node* pop()
	{
		return data[top--];
	}
	int isempty()
	{
		if(top==-1)
			return 1;
		return 0;
	}
};
node* bst::getnode()
{
	node *temp;
	temp=new node();
	cin>>temp->data;
	return temp;
}
node* bst::create()
{
	node *temp,*p;
	int n;
	cout<<"\nEnter the numbers of node : ";
	cin>>n;
	cout<<"\n\n";
	for(int i=0;i<n;i++)
	{
		p=head;
		cout<<"Data "<<(i+1)<<" : ";
		temp=getnode();
		if(head==NULL)
			head=temp;
		else
		{
			while(1)
			{
				if(p->data>temp->data)
				{
					if(p->lptr==NULL)
					{
						p->lptr=temp;
						break;
					}
					else
						p=p->lptr;
				}
				else
				{
					if(p->rptr==NULL)
					{
						p->rptr=temp;
						break;
					}
					else
						p=p->rptr;
				}
			}
		}
	}
	return head;
}
void bst::inorder(node *temp)
{
	if(temp!=NULL)
	{
		if(temp->lptr!=NULL)
			inorder(temp->lptr);
		cout<<"\t"<<temp->data;
		if(temp->rptr!=NULL)
			inorder(temp->rptr);
	}
	else
		cout<<"\nEmpty Tree !!!\n";
}
void bst::preorder(node *temp)
{
	if(temp!=NULL)
	{
		cout<<"\t"<<temp->data;
		if(temp->lptr!=NULL)
			preorder(temp->lptr);
		if(temp->rptr!=NULL)
			preorder(temp->rptr);
	}
	else
		cout<<"\nEmpty Tree !!!\n";
}
void bst::postorder(node *temp)
{
	if(temp!=NULL)
	{
		if(temp->lptr!=NULL)
			postorder(temp->lptr);
		if(temp->rptr!=NULL)
			postorder(temp->rptr);
		cout<<"\t"<<temp->data;
	}
	else
		cout<<"\nEmpty Tree !!!\n";
}
void bst::non_inorder()
{
	stack s;
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		s.push(temp);
		temp=temp->lptr;
	}
	while(!s.isempty())
	{
		temp=s.pop();
		cout<<"\t"<<temp->data;
		temp=temp->rptr;
		while(temp!=NULL)
		{
			s.push(temp);
			temp=temp->lptr;
		}
	}
}
void bst::non_preorder()
{
	stack s;
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<"\t"<<temp->data;
		s.push(temp);
		temp=temp->lptr;
	}
	while(!s.isempty())
	{
		temp=s.po2qp();
		temp=temp->rptr;
		while(temp!=NULL)
		{
			cout<<"\t"<<temp->data;
			s.push(temp);
			temp=temp->lptr;
		}
	}
}
void bst::non_postorder()
{
	stack s1,s2;
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		s1.push(temp);
		s2.push(NULL);
		temp=temp->lptr;
	}
	while(!s1.isempty())
	{
		temp=s1.pop();
		if(s2.pop()==NULL)
		{
			s1.push(temp);
			s2.push((node *) 1);
			temp=temp->rptr;
			while(temp!=NULL)
			{
				s1.push(temp);
				s2.push(NULL);
				temp=temp->lptr;
			}
		}
		else
			cout<<"\t"<<temp->data;
	}
}
void main()
{
	node *t;
	bst tr;
	int opt;
	clrscr();
	while(1)
	{
		cout<<"\n\n\t\t\t\t*****---MENU--******\n\n";
		cout<<"\t1. Create\n";
		cout<<"\t2. Recursive Inorder Traversal\n";
		cout<<"\t3. Recursive Preorder Traversal\n";
		cout<<"\t4. Recursive Postorder Traversal\n";
		cout<<"\t5. Non-Recursive Inorder Traversal\n";
		cout<<"\t6. Non-Recursive Preorder Traversal\n";
		cout<<"\t7. Non-Recursive Postorder Traversal\n";
		cout<<"\t8. Exit\n";
		cout<<"\t\tYour Choice...";
		cin>>opt;
		cout<<"\n\n";
		switch(opt)
		{
			case 1:cout<<"CREATING TREE \n\n";
				t=tr.create();
				break;
			case 2:cout<<"RECURSIVE INORDER\n\n";
				tr.inorder(t);
				break;
			case 3:cout<<"RECURSIVE PREORDER\n\n";
				tr.preorder(t);
				break;
			case 4:cout<<"RECURSIVE POSTORDER\n\n";
				tr.postorder(t);
				break;
			case 5:cout<<"NON-RECURSIVE INORDER\n\n";
				tr.non_inorder();
				break;
			case 6:cout<<"NON-RECURSIVE PREORDER\n\n";
				tr.non_preorder();
				break;
			case 7:cout<<"NON-RECURSIVE POSTORDER\n\n";
				tr.non_postorder();
				break;
			case 8:exit(0);
		default:cout<<"\nINVALID CHOICE !!!";
				break;
		}
		getch();
	}
}