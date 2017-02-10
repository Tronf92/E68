#include "Angajat.h"
#include "Sef.h"
#include <stdio.h>

void main()
{
	Angajat a1("Victor","muncitor");
	Angajat a2("George", "inginer");
	Sef s("Nelu");

	a1.SetareDatePontaj(160,5);
	a2.SetareDatePontaj(160,8);
	s.SetareDatePontaj(160,12);
	s.StabilirePrima(1000);

	a1.Afisare();
	a2.Afisare();
	s.Afisare();

	printf("Salarii: %d RON, %d RON, %d RON\n",a1.Salar(),a2.Salar(),s.Salar());

	getchar();
	
}
