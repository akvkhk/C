/*
 * file.c
 *
 *  Created on: 03.10.2012
 *      Author: Ahti
 */

#include <stdio.h>
#include <stdlib.h>

struct punkt {
	int x;
	int y;
};

int main(void){
	struct punkt p1;
	FILE *f;
	p1.x=17;
	p1.y=23;
	f=fopen("punktid.dat", "wb")
}
