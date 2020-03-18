void insert(int p)
{
    heap.last++;
    heap.arr[heap.last]=p;
    int t=heap.last;
    while(t/2>=1&&heap.arr[t]>=heap.arr[t/2])
    {
        int k=heap.arr[t];
        heap.arr[t]=heap.arr[t/2];
        heap.arr[t/2]=heap.arr[t];
    }
}
int delete()
{
    int k=heap.arr[1];
    heap.arr[1]=heap.arr[heap.last];
    heap.last--;
    int t=1;
    int mi;
    while(2*t<=heap.last)
    {
        if(heap.last>=2*t+1)
        {
            if(heap.arr[2*t]>heap.arr[2*t+1])
            {
                 mi=2*t;
            }
            else
               mi=2*t+1;
        }
        else
        {
          mi=2*t;
        }
            if(heap.arr[t]<heap.arr[mi])
               {
                    int x = heap.arr[t];
                    heap.arr[t]=heap.arr[mi];
                    heap.arr[mi]=x;
                    t=mi;
               }
               else
                break;
    }
    return k;
}
