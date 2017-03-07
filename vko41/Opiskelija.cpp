#include "Opiskelija.h"
#include<iostream>
using std::cout; using std::cin; using std::endl; using std::getline;

Opiskelija::Opiskelija() :Henkilo(), opiskelijanumero_("")
{
	//cout << "Opiskelija: oletusrakentaja" << endl;
}

Opiskelija::Opiskelija(string etunimi, string sukunimi, string osoite, string puhelinnumero, string opiskelijanumero):
Henkilo(etunimi, sukunimi, osoite, puhelinnumero), opiskelijanumero_(opiskelijanumero)
{
	//cout << "Opiskelija: param rakentaja" << endl;
}

Opiskelija::Opiskelija(const Opiskelija& alkup) :Henkilo(alkup), opiskelijanumero_(alkup.opiskelijanumero_)
{
	//cout << "Opiskelija: Kopiorakentaja" << endl;
}
Opiskelija::~Opiskelija()
{
	//cout << "Tyontekija: purkaja" << endl;
}

Opiskelija& Opiskelija::operator=(const Opiskelija& vanha)
{
	//cout << "Opiskelija: sijoitusrakentaja" << endl;
	if (this != &vanha)
	{
		Henkilo::operator=(vanha);
		this->opiskelijanumero_ = vanha.opiskelijanumero_;
	}
	return *this;
}

//setters

void Opiskelija::asetaOpiskelijanumero(string opiskelijanumero)
{
	opiskelijanumero_ = opiskelijanumero;
}

//getters

string Opiskelija::annaOpiskelijanumero()const
{
	return opiskelijanumero_;
}

//herkut

void Opiskelija::kysyTiedot()
{
	Henkilo::kysyTiedot();
	cout << "Anna opiskelijanumero: ";
	getline(cin, opiskelijanumero_);
}

void Opiskelija::tulosta()const
{
	Henkilo::tulosta();
	cout << "Opiskelijanumero: " << opiskelijanumero_ << endl;
}