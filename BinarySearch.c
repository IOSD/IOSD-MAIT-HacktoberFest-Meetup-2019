#include <stdio.h>
int main()
{   int n,b,e,i,a[n],item,m;
	printf("Enter the no of elements of array:");
	scanf("%d",&n);
	printf("Enter the elements of array in sorted order:\n");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);	
	}
	printf("Enter the element to search in array:");
	scanf("%d",&item);
	b=0;
	e=(n-1);
	m=(b+e)/2;
	while((b<=e)&&a[m]!=item) 
	{
	if(item<a[m])
	e=m-1;
	else
	b=m+1;
	m=(b+e)/2;
	}
	if(a[m]==item)
	printf("The location of searched element is:%d",m);
	else
	printf("The location of searched element is null");
}
