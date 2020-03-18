void multiplicity(int A[], int size)
{
int n=size;
int i=0;
while(i<=n-1)
{
    int j=i+1;
    int count=1;
    while(j<=n-1)
    {
        if(A[i]==A[j])
        {
            count++;
            j++;
            if(j>n-1)
            {
                printf("%d ",A[i]);
                printf("appeared %d times\n",count);
                break;
            }
        }
        else if(A[i]!=A[j])
        {
            printf("%d appeared ",A[i]);
            printf("%d times\n",count);
            break;
        }
    }
    i=i+count;
      if(i==n-1)
    {
        printf("%d appeared ",A[n-1]);
        printf("1 times");
        break;
    }
}
