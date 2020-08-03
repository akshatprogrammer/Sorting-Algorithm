void bubblesort(int *a,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			swap(&a[j],&a[j+1]);
		}
	}
}
void swap(int *a,int *b)
{
    int t = *a;
	*a = *b;
	*b = t;
}
