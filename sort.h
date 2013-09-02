#include<stdlib.h>
void display(int [], int, char *);
void input(int [], int);

void input(int a[], int size)
{
	int i;
	char c;

	printf("Enter the %d elements of the array : ", size);
	//scanf("%c", &c);

	for(i=0; i<size; i++)
		scanf("%d", &a[i]);

	for(i=0; i< size; i++)
		printf("%d ", a[i]);
}

void display(int a[], int size, char* s)
{
	int i, j;
	system("clear");
	printf("\t\t\t\t\t\t\t%s\n\n\n", s);

    printf("      ");
	for(i=0; i<size; i++)
		printf("%2d  ", a[i]);

	for(i=33; i > 0; i--)
	{
        printf("      ");
		for(j=0; j<size; j++)
		{
			if(i<=a[j])
				printf("*   ");
			else
				printf("    ");
		}
		printf("\n");
	}


	usleep(30000);
}



