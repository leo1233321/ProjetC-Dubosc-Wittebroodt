#include <stdio.h>
#include <stdlib.h>
#include "classeIP.h"

void classeIP(int adresseIP[4])
{
	if adresseIP[0] <= 126 && adresseIP[1] <= 255 && adresseIP[2] <= 255 && adresseIP[3] <= 255
	{
		printf("l'adresse IP est une adresse de classe A")

	}

	if 127 => adresseIP[0] <= 191 && adresseIP[1] <= 255 && adresseIP[2] <= 255 && adresseIP[3] <= 255
	{
		printf("l'adresse IP est une adresse de classe B")

	}

	if 192 = > adresseIP[0] <= 223 && adresseIP[1] <= 255 && adresseIP[2] <= 255 && adresseIP[3] <= 255
	{
		printf("l'adresse IP est une adresse de classe C")

	}

	if 224 = > adresseIP[0] <= 239 && adresseIP[1] <= 255 && adresseIP[2] <= 255 && adresseIP[3] <= 255
	{
		printf("l'adresse IP est une adresse de classe D")

	}

	if 240 = > adresseIP[0] <= 255 && adresseIP[1] <= 255 && adresseIP[2] <= 255 && adresseIP[3] <= 255
	{
		printf("l'adresse IP est une adresse de classe E")

	}
}