#include<stdio.h>
int main()
{
	int t,i,pass,n=9;
	int a[]={56,23,98,67,3,87,45,77,99};
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	printf("Sorted numbers=");
	for(i=0;i<n;i++)
	printf("\t%d",a[i]);
}
