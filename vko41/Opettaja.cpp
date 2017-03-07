#include "Opettaja.h"
#include<iostream>
using std::cout; using std::cin; using std::endl; using std::getline;


Opettaja::Opettaja() :Tyontekija(), opetusala_("")
{
	//cout << "Opettaja: oletusrakentaja" << endl;
}

Opettaja::Opettaja(string etunimi, string sukunimi, string osoite, string puhelinnumero, double palkka, string opetusala) :
Tyontekija(etunimi, sukunimi, osoite, puhelinnumero, palkka), opetusala_(opetusala)
{
	//cout << "Opettaja: param rakentaja" << endl;
}

Opettaja::Opettaja(const Opettaja& alkup) :Tyontekija(alkup), opetusala_(alkup.opetusala_)
{
	//cout << "Opettaja: Kopiorakentaja" << endl;
}
Opettaja::~Opettaja()
{
	//cout << "Opettaja: Purkaja" << endl;
}

Opettaja& Opettaja::operator= (const Opettaja& vanha)
{
	//cout << "Opettaja: sijoitusrakentaja" << endl;
	if (this != &vanha)
	{
		Tyontekija::operator=(vanha);
		this->opetusala_ = vanha.opetusala_;
	}
	return *this;
}


//setters

void Opettaja::asetaOpetusala(string opetusala)
{
	opetusala_ = opetusala;
}

//getters

string Opettaja::annaOpetusala()const
{
	return opetusala_;
}

//herkut

void Opettaja::kysyTiedot()
{
	Tyontekija::kysyTiedot();
	cout << "Anna opetusalasi: ";
	getline(cin, opetusala_);
}

void Opettaja::tulosta()const
{
	Tyontekija::tulosta();
	cout << "Opetusala: " << opetusala_ << endl;
}

