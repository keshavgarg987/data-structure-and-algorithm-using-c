#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],i,n;
	void bubblesort(int[],int);
	printf("Keshav Garg\n");
	printf("Enter number of elemenets (<=20)=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter elements a[%d]=",i);
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	printf("Sorted Elemenets---");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	getch();
}
void bubblesort(int a[],int n)
{
	int temp,i,j;
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<=n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
