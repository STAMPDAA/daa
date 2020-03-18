#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    struct node *next;
    int vertex;
}node;
node *G[20];
int visited[20];
int n;
void read_graph();
void insert(int,int);
void DFS(int,int);

void main()
{
    int i;
    read_graph();
	for(i=1;i<=n;i++)
        visited[i]=0;

    DFS(1,-1);
    for(i=1;i<=n;i++)
    {
        while(visited[i]==0)
        {
            printf("\n the given graph is not connected\n");
            DFS(i,-1);
        }
    }
}

void DFS(int i,int parent)
{
    node *p;
int k=i;
int a=0;
	printf("\n visited vertex %d",i);
    p=G[i];
    visited[i]=1;
    while(p!=NULL)
    {
       i=p->vertex;
if(visited[i]==1&&i!=p)
{
    printf("\n cycle is detected\n");
    a++;
}
	   if(!visited[i])
            DFS(i,k);
        p=p->next;

    }
}

void read_graph()
{
    int i,vi,vj,no_of_edges;
    printf("Enter number of vertices:");

	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
        G[i]=NULL;
    }
		printf("Enter number of edges:");
       	scanf("%d",&no_of_edges);

       	for(i=1;i<=no_of_edges;i++)
        {
        	printf("Enter an edge(u,v):");
			scanf("%d%d",&vi,&vj);
			insert(vi,vj);
        }
    }


void insert(int vi,int vj)
{
    node *p,*q;
	q=(node*)malloc(sizeof(node));
    q->vertex=vj;
    q->next=NULL;
    if(G[vi]==NULL)
        G[vi]=q;
    else
    {
        p->next=G[vi];
        G[vi]=p;
}
}
