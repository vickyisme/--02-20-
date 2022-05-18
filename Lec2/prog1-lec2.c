#include<stdlib.h>
#include<stdio.h>
#include<errno.h>

void main()
{
	int *array = NULL;
	unsigned length, i;

	printf("Enter length of array: ");
	scanf("%d", &length);

	if (length > 0)
       	{
        if ((array = (int*) malloc(length * sizeof(int))) != NULL)
			for (i = 0; i < length; i++)
				array[i] = i * i;
	       	else
	       		if(errno == ENOMEM)
			{
				perror("Malloc error");
				exit(2);
			}
			else	exit(3);
	}
	if (array != NULL)
		free(array);
	
	return;
}


