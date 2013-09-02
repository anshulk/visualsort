void insertionsort(int a[], int size)
{
    char *s = "I N S E R T I O N   S O R T";
    int key, i ,j;
    for(i=1; i<size; i++)
    {
        key = a[i];
        j = i-1;
        while( j >= 0 && (a[j] > key) )
        {
            a[j+1] = a[j];
            j -= 1;
            display(a, size, s);
        }
        a[j + 1] = key;
        display(a, size, s);
    }
}
