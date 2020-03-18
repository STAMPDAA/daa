void print(struct node *pptr)
{
    if(pptr!=NULL)
    {
    print(pptr->lptr);
    printf("%d",pptr->data);
    print(pptr->rptr);
}
}
