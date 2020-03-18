int count(int n)
{
    if( n==1)
        return 1;
        else
      return (count(n/2)+count(n/2)+1);
      }
