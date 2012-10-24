/*
 * rand.c
 *
 *  Created on: 19.09.2012
 *      Author: Ahti
 */

#include <stdio.h>
#include <stdlib.h>

float korrutamine (float x, float y);
float jagamine (float x, float y);
float lahutamine (float x, float y);
float liitmine (float x, float y);

int main()
{
	float x;
	float y;
	int troll;
	float a;


	printf("Sisesta 2 numbrit: ");
	printf("\n");
	scanf( "%f", &x );
	scanf( "%f", &y );
	printf("\n");

	printf("1. Korrutamine\n");
	printf("2. Jagamine\n");
	printf("3. Lahutamine\n");
	printf("4. Liitmine\n\n");
	printf("Valik: ");
	scanf( "%d", &troll );
	printf("\n");
	kontroll:
	if ( troll < 1 || troll > 4 )
	{
		printf("Sisesta arv vahemikus 1-4\n");
		scanf( "%d", &troll );
		goto kontroll;
	}
	switch ( troll ) {
	case 1:            // Note the colon, not a semicolon
	  a = korrutamine(x, y);
	  break;
	case 2:            // Note the colon, not a semicolon
	  a = jagamine(x, y);
	  break;
	case 3:            // Note the colon, not a semicolon
	  a = lahutamine(x, y);
	  break;
	case 4:            // Note the colon, not a semicolon
	  a = liitmine(x, y);
	  break;
	default:            // Note the colon, not a semicolon
	    printf("Sisesta number 1-4\n");
	  break;
	}
	printf("Vastus on: %f\n",a);
	getch();
}

float korrutamine (float x, float y)
{
	return x * y;
}

float jagamine (float x, float y)
{
	return x / y;
}

float liitmine (float x, float y)
{
	return x + y;
}

float lahutamine (float x, float y)
{
	return x - y;
}
