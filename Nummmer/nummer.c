/*
 * nummer.c
 *
 *  Created on: 10.09.2012
 *      Author: Ahti
 */

# include <stdio.h>

int main()
{
	int this_is_a_number;

	int a = 4 * 6;
	a = a + 5;
	if (a == 5){
		printf("a on 5");
	}
	if (a > 5){
			printf("a on suurem kui 5");
		}
	if (a < 5){
			printf("a on väiksem kui 5");
		}

	printf( "Sisesta number: " );
	scanf ( "%d", &this_is_a_number );
	printf( "Sisestasid %d", this_is_a_number );
	getchar();
	return 0;
}
