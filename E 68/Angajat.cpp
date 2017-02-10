#include "Angajat.h"
#include <stdio.h> 

Angajat::Angajat()
{
	strcpy_s(this->numele, " ");
	strcpy_s(this->functia, " ");
	ore=0;
	costOra=0;

}

Angajat::Angajat(char numele[], char functia[])
{
	strcpy_s(this->numele,numele);
	strcpy_s(this->functia,functia);
	ore=0;
	costOra=0;

}

Angajat::~Angajat(void)
{
}

void Angajat::Afisare(void)
{
	printf("%s are functia de %s.A lucrat %d ore la un cost de %d RON/ora\n",numele,functia,ore,costOra);
}

void Angajat::SetareDatePontaj(int ore,int costOra)
{
	this->ore=ore;
	this->costOra=costOra;
}

long Angajat::Salar()
{
	return ore*costOra;
}
