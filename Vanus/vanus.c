/*
 * vanus.c
 *
 *  Created on: 12.09.2012
 *      Author: Ahti
 */

# include <stdio.h>

int main()
{
	int vanus;

	printf("Sisestage enda vanus:");
	scanf("%d", &vanus);
	if (vanus > 17){
		printf("Sa saad klubisse sisse!");
	}else{
		printf("Sa ei saa klubisse sisse!");
	}
	getchar();
	return 0;
}
