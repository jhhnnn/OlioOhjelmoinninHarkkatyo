#pragma once
#include "Henkilo.h"
class Tyontekija :public Henkilo
{
public:
	Tyontekija();
	Tyontekija(string etunimi_, string sukunimi_, string osoite_,
				string puhelinnumero_,double palkka_, string tunnus_);
	Tyontekija(const Tyontekija& alkup);
	~Tyontekija();
	Tyontekija& operator = (const Tyontekija& vanha);


	//setters
	void asetaPalkka(double palkka);
	void asetaTunnus(string);

	//getters
	double annaPalkka()const;
	string annaTunnus()const;

	//herkut
	void kysyTiedot();
	void tulosta()const;

private:
	double palkka_;
	string tunnus_;
};

