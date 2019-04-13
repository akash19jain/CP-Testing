//incorrect solution for finding second smallest element

#include<stdio.h>
#include<stdlib.h>
#define MAX 100005
int cmp(const void * a,const void * b)
{
	return (*(int*)a-*(int*)b);
}

int main()
{
	int arr[MAX],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr,n-1,sizeof(arr[0]),cmp);
	printf("%d\n",arr[1]);
}
