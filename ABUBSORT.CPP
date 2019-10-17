//WRITE A PROGRAM IN C++ TO SORT AN ARRAY USING BUBBLE SORT TECHNIQUE.
# include <iostream.h>
# include <conio.h>
void bubsort(int [],int);
int bsearch(int arr1[],int x, int value)
{
int i, beg, end, mid;
beg = 0;
end = x - 1;
mid = 0;
while(beg <= end)
{
	mid = (beg + end) / 2;
	if(value == arr1[mid])
		{
		return mid +1;
		}
	else if(value > arr1[mid])
		{
			beg = mid +1;
		}
	else
		{
			end = mid -1;
		}
}
      return -1;
}
void main()
{
clrscr();
int arr[30], i , s ,x;
cout<<"\t\t SORTING AN ARRAY USING BUBBLE SORT TECHNIQUE "<<endl<<endl;
cout<< "Enter the size of the array required ";
cin >> s;
cout<<endl;
	for(i=0; i < s; i++)
	{
		cout<< "Enter the "<<i+1 <<" element :";
		cin >> arr[i];
	}
	bubsort(arr, s );
	cout << "\n\n The sorted list is as follows -";
	for(i=0; i < s; i++)
	{
		cout<< "\n "<<i +1 <<" element :" << arr[i];
	}
cout<<"\n Enter the value to be searched ";
cin>>x;
int loc = 0;
loc =  bsearch(arr, s , x);
	if(loc == -1)
	{
		cout << "\n The element is not found";
	}
	else
	{
		cout<<"\n The element is found at "<< loc << " location";
	}
getch();
}
void bubsort(int arr1[],int x)
{
int i, j , temp;
     for(i = 0; i < x; i++,x--)
     {
	for(j = 0; j < x-1 ; j++)
	{
	   if(arr1[j] > arr1[j+1])
	   {
	     temp = arr1[j];
	     arr1[j] = arr1[j+1];
	     arr1[j+1] = temp;
	   }
	}
       }
     }