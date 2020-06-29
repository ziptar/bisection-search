/*
 ============================================================================
 Name        : bisection-search.c
 Author      : Said TALEB ALI
 Version     : 1.0
 Copyright   : MIT
 Description : Search for a number in a sorted list using bisection search (Binary Search).
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LENGTH 10

int main(void) {

	int list[LENGTH] = {0 ,1 ,2 ,3 ,5 ,8 ,13 ,21 ,34 ,55};

		int item = 0;
		int a = 0;
		int b = LENGTH - 1;
		int middle  = 0;
		bool found = false;

		printf("Enter the number you are looking for: ");
		scanf("%d", &item);

		while(!found && a <= b)
		{
			middle  = (a + b) / 2;
			if (item == list[middle])
			{
				found = true;
			}
			else if (item < list[middle])
			{
				b = middle - 1;
			}
			else
			{
				a = middle + 1;
			}
		}

		if (!found)
		{
		        printf("The number %d is not found the list. \n", item);
		}
		else
		{
		        printf("The number %d is found at index %d in the list. \n", item, middle);
		}

	return EXIT_SUCCESS;
}
