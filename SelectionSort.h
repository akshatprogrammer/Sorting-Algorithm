void selectionsort(int *a,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		int min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min = j;
		}
		t = a[i];
		a[i] = a[min];
		a[min] = t;
	}
}
