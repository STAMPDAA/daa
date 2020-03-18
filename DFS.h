void DFS(int i)
{
    int j;
    visited[i]=1;
    printf(" %d->",i);
    for(j=0;j<V;j++)
    {
        if(G[i][j]==1&&visited[j]==0)
            DFS(j);
    }
}
