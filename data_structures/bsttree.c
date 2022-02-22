#include<stdio.h>
// #include<alloc.h>
#include<stdlib.h>
#include<math.h>

struct node
{
	int cf,px,py,pz;
	struct node *link;
};

typedef struct node NODE;

NODE* getnode()
{
	NODE *x;
	x=(NODE*)malloc(sizeof(NODE));
	if(x==NULL)
	{
		printf("Insufficient Memory!!!\n");
		exit(0);
	}
	return x;
}

void display(NODE *head)
{
	NODE *temp;
	if(head->link==head)
	{
		printf("Polynomial does not Exist!!!\n");
		return;
	}
	temp=head->link;
	printf("\n");
	while(temp!=head)
	{
		printf("%dx^%dy^%dz^%d",temp->cf,temp->px,temp->py,temp->pz);
		if(temp->link!=head)
			printf(" + ");
		temp=temp->link;
	}
	printf("\n");
}

NODE* insert_rear(int cf,int x,int y,int z,NODE *head)
{
	NODE *temp,*cur;
	temp=getnode();
	temp->cf=cf;
	temp->px=x;
	temp->py=y;
	temp->pz=z;
	cur=head->link;
	while(cur->link!=head)
	{
		cur=cur->link;
	}
	cur->link=temp;
	temp->link=head;
	return head;
}

NODE* read_poly(NODE *head)
{
	int px,py,pz,cf,ch;
	do
	{
		printf("\nEnter the Coefficient: ");
		scanf("%d",&cf);
		printf("\nEnter x,y,z Powers (Power 0 indicates no term): ");
		scanf("%d%d%d",&px,&py,&pz);
		head=insert_rear(cf,px,py,pz,head);
		printf("\nIf you wish to continue press 1, otherwise 0: ");
		scanf("%d",&ch);
	}while(ch!=0);
	return head;
}

NODE* add_poly(NODE *h1,NODE *h2,NODE *h3)
{
	NODE *p1,*p2;
	int x1,x2,y1,y2,z1,z2,cf1,cf2,cf;
	p1=h1->link;
	p2=h2->link;
	while(p1!=h1&&p2!=h2)
	{
		x1=p1->px;
		y1=p1->py;
		z1=p1->pz;
		cf1=p1->cf;
		x2=p2->px;
		y2=p2->py;
		z2=p2->pz;
		cf2=p2->cf;
		if(x1==x2&&y1==y2&&z1==z2)
		{
			h3=insert_rear(cf1+cf2,x1,y1,z1,h3);
			p1=p1->link;
			p2=p2->link;
		}
		else if(x1>x2)
		{
			h3=insert_rear(cf1,x1,y1,z1,h3);
			p1=p1->link;
		}
		else
		{
			h3=insert_rear(cf2,x2,y2,z2,h3);
			p2=p2->link;
		}
	}
	while(p1!=h1)
	{
		h3=insert_rear(p1->cf,p1->px,p1->py,p1->pz,h3);
		p1=p1->link;
	}
	while(p2!=h2)
	{
		h3=insert_rear(p2->cf,p2->px,p2->py,p2->pz,h3);
		p2=p2->link;
	}
	return h3;
}

void evaluate(NODE *head)
{
	NODE *h;
	int x,y,z;
	float result=0.0;
	h=head->link;
	printf("\nEnter x,y,z values to Evaluate: ");
	scanf("%d%d%d",&x,&y,&z);
	while(h!=head)
	{
		result=result+(h->cf*pow(x,h->px)*pow(y,h->py)*pow(z,h->pz));
		h=h->link;
	}
	printf("\nPolynomial Evaluation Result is: %f",result);
}

int main()
{
	NODE *h1,*h2,*h3,*h4;
	int ch;
	// clrscr();
	h1=getnode();
	h2=getnode();
	h3=getnode();
	h4=getnode();
	h1->link=h1;
	h2->link=h2;
	h3->link=h3;
	h4->link=h4;
	while(1)
	{
		printf("\n1. Evaluate Polynomial\n2. Add Two Polynomials\n3. Exit\n");
		printf("Enter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\nEnter the Polynomial to Evaluate: ");
				h4=read_poly(h4);
				printf("The Polynomial is: ");
				display(h4);
				evaluate(h4);
				break;
			case 2: printf("\nEnter the First Polynomial: ");
				h1=read_poly(h1);
				printf("\nEnter the Second Polynomial: ");
				h2=read_poly(h2);
				h3=add_poly(h1,h2,h3);
				printf("\nFirst Polynomial is: ");
				display(h1);
				printf("\nSecond Polynomial is: ");
				display(h2);
				printf("\nSum of Polynomials is:");
				display(h3);
				break;
			case 3: exit(0);
				break;
			default:printf("\nInvalid Choice!!!\n");
		}
		return 0;
	}
}