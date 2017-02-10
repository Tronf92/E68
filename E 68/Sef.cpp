#include "Sef.h"

Sef::Sef(char numele[])
{
	strcpy_s(this->numele,numele);
	strcpy_s(this->functia,"Sef");
	ore=0;
	costOra=0;
}

Sef::~Sef(void)
{
}

long Sef::Salar(void)
{
	return ore*costOra+prima;
}

void Sef::StabilirePrima(int prima)
{
	this->prima=prima;
}
