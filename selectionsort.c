void selectionsort(int a[], int size)
{
	char *s="S E L E C T I O N   S O R T";

	int i,j, small, t;

	for(i=0; i<size; i++)
	{
		small = i;
		for(j=i+1; j<size; j++)
		{
				if(a[j] < a[small])
                    small = j;
                display(a, size, s);
        }
        t = a[i];
        a[i] = a[small];
        a[small] = t;
    }
}
