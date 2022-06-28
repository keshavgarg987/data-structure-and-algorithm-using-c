#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[20];
	void insertionsort(int a[],int n);
	void display(int a[],int n);
	printf("Keshav Garg\n");
	printf("Enter total number of elements in array(<20)--->");
	scanf("%d",&n);
	printf("Input array elements to be sorted\n");
	for(i=0;i<n;i++)
	{
		printf("Enter elements a[%d]-->");
		scanf("%d",&a[i]);
	}
	printf("\nArray element before sorting are---\n");
	display(a,n);
	insertionsort(a,n);
	printf("\nArray element after sorting are---\n");
	display(a,n);
	getch();
}
void insertionsort(int a[],int n)
{
	int i,j,target;
	for(i=1;i<n;i++)
	{
		target = a[i];
		j = i-1;
		while((j>=0) && (target<=a[j]))
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = target;
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
