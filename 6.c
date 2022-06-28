#include<stdio.h>
#include<conio.h>
void main()
{
	int  n,i,a[20];
	void selectionsort(int a[],int n);
	void diplay(int a[],int n);
	printf("Keshav Garg\n");
	printf("Enter total number of elements in array(<20)-->");
	scanf("%d",&n);
	printf("Input array elements to be sorted\n");
	for(i=0;i<n;i++)
	{
		printf("Enter element a[%d]-->");
		scanf("%d",&a[i]);
	}
	printf("\nArray element before sorting are---\n");
	display(a,n
	);
	selectionsort(a,n);
	printf("\nArray element after sorting are---\n");
	display(a,n);
	getch();
}
void selectionsort(int a[],int n)
{
	int i,j;
	int loc,temp;
	for(i=0;i<n-1;i++)
	{
		loc = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[loc])
			loc = j;
		}
		temp = a[i];
		a[i] = a[loc];
		a[loc] = temp;
	}
}
	void display(int a[],int n)
	{
		int i;
		for(i=0;i<n;i++)
		{
		printf("%d\t",a[i]);
	}
}
