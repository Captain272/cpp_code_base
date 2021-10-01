
node* end(void)
{
	int x;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the value u want at the end");
	scanf("%d",x);
	temp->data=x;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		p=start;
		while(p!=NULL)
		{
		
			p=p->next;
		}
		p->next=temp;
		temp->next=NULL;
	}

}


void position()
{
	int x,pos,count=0,k;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the no u want at the desidered position");
	scanf("%d",x);
	temp->data=x;
	temp->next=NULL;
	p=start;
	while(p!=NULL)
	{
		count++;
		p=p->next;
	}
	if(start=NULL)
	{
		start=temp;
	}
	else
	{
		printf("Enter the position");
		scanf("%d",&pos);
		if(pos < count)
		{
			p=start;
			for(k=1;k<pos-1;k++)
			{
				p=p->next;
			}
			temp->next=p->next;
			p->next=temp;
		}
	
	else
	{
		printf("display insertion is not possible");
	}
}
}

