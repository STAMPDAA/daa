int gcdf(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else if(a==1||b==1)
        return 1;
    else if (a==b)
        return a;
    else if(a>b)
        return gcdf(a-b,b);
    else
        return gcdf(a,b-a);
}
