#include <string.h>

class Angajat
{
public:
	Angajat();
	Angajat(char numele[100],char functia[100]);
	~Angajat(void);

protected:
	char numele[100];
	char functia[100];
	int ore;
	int costOra;

public:
	void Afisare(void);
	void SetareDatePontaj(int ore,int costOra);
	long Salar(void);
};
