#include "Henkilo.h"
#include<iostream>
#include<string>
using std::cout; using std::cin; using std::endl; using std::getline;

Henkilo::Henkilo() :etunimi_(""), sukunimi_(""), osoite_(""), puhelinnumero_("")
{
	//cout << "Henkilo: oletusrakentaja" << endl;
}

Henkilo::Henkilo(string etunimi, string sukunimi, string osoite, string puhelinnumero) 
	: etunimi_(etunimi),sukunimi_(sukunimi),osoite_(osoite), puhelinnumero_(puhelinnumero)
{
	//cout << "Henkilo: Param. rakentaja" << endl;
}

Henkilo::Henkilo(const Henkilo& alkup)
	: etunimi_(alkup.etunimi_), sukunimi_(alkup.sukunimi_), osoite_(alkup.osoite_), puhelinnumero_(alkup.puhelinnumero_)
{
	//cout << "Henkilo: kopiorakentaja" << endl;
}

Henkilo::~Henkilo()
{
	//cout << "Henkilo: purkaja" << endl;
}

Henkilo& Henkilo::operator= (const Henkilo& vanha)
{
	//cout << "Henkilo: sijoitusrakentaja" << endl;
	if (this != &vanha)
	{
		this->etunimi_ = vanha.etunimi_;
		this->sukunimi_ = vanha.sukunimi_;
		this->osoite_ = vanha.osoite_;
		this->puhelinnumero_ = vanha.puhelinnumero_;
	}

	return *this;
}


//setters


void Henkilo::asetaEtunimi(string etunimi)
{
	etunimi_ = etunimi;
}

void Henkilo::asetaSukunimi(string sukunimi)
{
	sukunimi_ = sukunimi;
}

void Henkilo::asetaOsoite(string osoite)
{
	osoite_ = osoite;
}

void Henkilo::asetaPuhelinnumero(string puhelinnumero)
{
	puhelinnumero_ = puhelinnumero;
}


//getters


string Henkilo::annaEtunimi()const
{
	return etunimi_;
}

string Henkilo::annaSukunimi()const
{
	return sukunimi_;
}

string Henkilo::annaOsoite()const
{
	return osoite_;
}

string Henkilo::annaPuhelinnumero()const
{
	return puhelinnumero_;
}


//herkut

void Henkilo::kysyTiedot()
{
	cout << "Anna etunimi: ";
	getline(cin, etunimi_);
	cout << "Anna sukunimi: ";
	getline(cin, sukunimi_);
	cout << "Anna osoite: ";
	getline(cin, osoite_);
	cout << "Anna puhelinnumero: ";
	getline(cin, puhelinnumero_);
}

void Henkilo::tulosta()const
{
	cout << "Etunimi: " << etunimi_ << endl;
	cout << "Sukunimi: " << sukunimi_ << endl;
	cout << "Osoite: " << osoite_ << endl;
	cout << "Puhelinnumero: " << puhelinnumero_ << endl;
}