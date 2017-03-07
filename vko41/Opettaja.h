#pragma once
#include "Tyontekija.h"
class Opettaja :public Tyontekija
{
public:
	Opettaja();
	Opettaja(string etunimi_, string sukunimi_, string osoite_, string puhelinnumero_,
		double palkka_, string opetusala_);
	Opettaja(const Opettaja& alkup);
	~Opettaja();
	Opettaja& operator=(const Opettaja& vanha);

	//setters
	
	void asetaOpetusala(string opetusala);

	//getters

	string annaOpetusala()const;

	//herkut

	void kysyTiedot();
	void tulosta()const;
	

private:
	string opetusala_;
};

