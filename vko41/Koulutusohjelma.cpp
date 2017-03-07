#include "Koulutusohjelma.h"
#include"Opettaja.h"
#include"Opiskelija.h"
#include<string>
#include<iostream>
#include<vector>

using std::cout; using std::cin; using std::endl; using std::getline; using std::vector;

Koulutusohjelma::Koulutusohjelma() :nimi_(""), opiskelijat_(), opettajat_()
{
	//cout << "Koulutusohjelma: oletusrakentaja" << endl;
}

Koulutusohjelma::Koulutusohjelma(string nimi) : nimi_(nimi), opiskelijat_(), opettajat_()
{
	//cout << "Koulutusohjelma: param. rakentaja" << endl;
}

Koulutusohjelma::~Koulutusohjelma()
{
	//cout << "Koulutusohjelma: purkaja" << endl;
}




//setters
void Koulutusohjelma::asetaNimi(string nimi)
{
	nimi_ = nimi;
}

//getters
string Koulutusohjelma::annaNimi()const
{
	return nimi_;
}

//herkut
void Koulutusohjelma::lisaaOpettaja()
{
	Opettaja apu;
	apu.kysyTiedot();
	opettajat_.push_back(apu);
}

void Koulutusohjelma::lisaaOpiskelija()
{
	Opiskelija apu;
	apu.kysyTiedot();
	opiskelijat_.push_back(apu);
}

void Koulutusohjelma::tulostaOpettajat()const
{
	for (unsigned int i = 0; i < opettajat_.size(); i++)
	{
		opettajat_.at(i).tulosta();
		cout << endl;
	}
}

void Koulutusohjelma::tulostaOpiskelijat()const
{
	for (unsigned int i = 0; i < opiskelijat_.size(); i++)
	{
		opiskelijat_.at(i).tulosta();
		cout << endl;
	}
}