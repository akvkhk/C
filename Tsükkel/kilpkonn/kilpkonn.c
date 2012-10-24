/*
 * kilpkonn.c
 *
 *  Created on: 17.09.2012
 *      Author: Ahti
 */

# include <stdio.h>

int omg()
{
	int j=0, k=1000;
	for ( j=1; j<=k; k++ ) {
		printf("j=%d k=%d\n",j,k);
		j+=10;
	}
	return 0;
}
