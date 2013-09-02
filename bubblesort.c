void bubblesort(int a[], int size)
{
	char *s = "B U B B L E  S O R T";
	int i, j ,t;

	for(i=0; i<size; i++)
	{
		for(j=0; j<size-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] =t;
			}
			display(a, size, s);
		}
		display(a, size, s);
	}
	display(a, size, s);
}
