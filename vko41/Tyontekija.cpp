#include "Tyontekija.h"
#include<iostream>


using std::cout; using std::cin; using std::endl; using std::getline;


Tyontekija::Tyontekija() :Henkilo(), palkka_(0.0)
{
	//cout << "Tyontekija: oletusrakentaja" << endl;
}

Tyontekija::Tyontekija(string etunimi, string sukunimi, string osoite, string puhelinnumero, double palkka,string tunnus) :
Henkilo(etunimi, sukunimi, osoite, puhelinnumero), palkka_(palkka), tunnus_(tunnus)
{
	//cout << "Tyontekija: param. rakentaja" << endl;
}

Tyontekija::Tyontekija(const Tyontekija& alkup) : Henkilo(alkup), palkka_(alkup.palkka_)
{
	// << "Tyontekija: kopiorakentaja" << endl;
}

Tyontekija::~Tyontekija()
{
	//cout << "Tyontekija: purkaja" << endl;
}

Tyontekija& Tyontekija::operator=(const Tyontekija& vanha)
{
	//cout << "Tyontekija: sijoitusrakentaja" << endl;
	if (this != &vanha)
	{
		Henkilo::operator=(vanha);
		this->palkka_ = vanha.palkka_;
	}
	return *this;
}

//setters

void Tyontekija::asetaPalkka(double palkka)
{
	palkka_ = palkka;
}

void Tyontekija::asetaTunnus(string tunnus)
{
	tunnus_ = tunnus;
}

//getters


double Tyontekija::annaPalkka()const
{
	return palkka_;
}

string Tyontekija::annaTunnus()const
{
	return tunnus_;
}

//herkut


void Tyontekija::kysyTiedot()
{
	string palkka;//apumuuttuja
	Henkilo::kysyTiedot();
	cout << "Anna palkka: ";
	getline(cin, palkka);
	palkka_ = atof(palkka.c_str()); //muunnetaan string doubleksi
}

void Tyontekija::tulosta()const
{
	Henkilo::tulosta();
	cout << "Palkka: " << palkka_ << endl;
}