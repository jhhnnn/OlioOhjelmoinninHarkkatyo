#pragma once
#include "Henkilo.h"
class Opiskelija :public Henkilo
{
public:
	Opiskelija();
	Opiskelija(string etunimi_, string sukunimi_, string osoite_, string puhelinnumero_, string opiskelijanumero_);
	Opiskelija(const Opiskelija& alkup);
	~Opiskelija();
	Opiskelija& operator= (const Opiskelija& vanha);

	//setters
	void asetaOpiskelijanumero(string opiskelijanumero);

	//getters
	string annaOpiskelijanumero()const;

	//herkut

	void kysyTiedot();
	void tulosta()const;

private:
	string opiskelijanumero_;
};

