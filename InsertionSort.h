void insertionsort(int *a,int n)
{
	int i,val,hole;
	for(i=1;i<n;i++)
	{
		val = a[i];
		hole = i;
		while(hole>0&&a[hole-1]>val)
		{
			a[hole] = a[hole-1];
			hole-=1;
		}
		a[hole]=val;
	}
}
