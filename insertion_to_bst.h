void insert(int x)
{
struct node *ptr=hptr;
struct node *pptr=NULL;
struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->data=x;
if(hptr==NULL)
{
    hptr=temp;
}
else
{
while(ptr!=NULL)
{
    pptr=ptr;
    if(temp->data<ptr->data)
    {
        ptr=ptr->lptr;
    }
    else
    {
        ptr=ptr->rptr;
    }

}
if(temp->data<pptr->data)
{
    pptr->lptr=temp;
}
else
    pptr->rptr=temp;
}
}
