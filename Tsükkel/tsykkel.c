/*
 * tsykkel.c
 *
 *  Created on: 17.09.2012
 *      Author: Ahti
 */

# include <stdio.h>

int main()
{
	int a;
	for ( a=100; a>=1; a+=-1 ) {
		printf("a=%d \n",a);
	}
	return 0;
}
