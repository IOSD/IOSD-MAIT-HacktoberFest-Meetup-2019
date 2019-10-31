#include<stdio.h>
int rbs(int arr[],int beg,int end,int item)
{
if(beg<=end)
{
    int mid=(beg+end)/2;
	 if(arr[mid]==item)
	 return mid;
	else if(arr[mid]<item)
	  rbs(arr,mid+1,end,item);
	else
	 rbs(arr,beg,mid-1,item);
}
int main()
{int arr[]={2,3,4,5,6,7,8},beg=0,end=6,item;
printf("Enter the item to search\n");
scanf("%d",&item);
int a=rbs(arr,beg,end,item);
if(a=-1)
printf("item found at index");
else
printf("item not found");
}
