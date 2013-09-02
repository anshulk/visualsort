#include<stdio.h>
#include"sort.h"
#include"binarysort.c"
#include"selectionsort.c"
#include"insertionsort.c"

int main()
{
	int size = 30;

	system("figlet -ctW < banner.txt");
	usleep(2000000);

  int a[]={4, 18, 25, 11, 3, 21, 9, 26, 16, 20, 22, 10, 2, 17, 27, 5,  23, 24, 28, 12, 19, 15, 8, 14, 29, 7, 30, 13, 6, 1};
	int b[]={4, 18, 25, 11, 3, 21, 9, 26, 16, 20, 22, 10, 2, 17, 27, 5,  23, 24, 28, 12, 19, 15, 8, 14, 29, 7, 30, 13, 6, 1};
	int c[]={4, 18, 25, 11, 3, 21, 9, 26, 16, 20, 22, 10, 2, 17, 27, 5,  23, 24, 28, 12, 19, 15, 8, 14, 29, 7, 30, 13, 6, 1};

	binarysort(a, 30);
	usleep(1000000);

	selectionsort(b,30);
	usleep(1000000);

	insertionsort(c, 30);
	usleep(1000000);

  system("clear");
	system("figlet -ctW More to come....");

	usleep(30000000);
	return 0;
}


