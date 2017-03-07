#include "Koulu.h"
#include"Koulutusohjelma.h"
#include<iostream>
#include<algorithm>
#include<fstream>
#include<sstream>
#include"Opettaja.h"
#include"Opiskelija.h"

using std::cout; using std::endl; using std::cin; using std::getline;
using std::stringstream; using std::ifstream; using std::ofstream;

Koulu::Koulu() :nimi_(""), koulutusohjelmat_()
{

}

Koulu::Koulu(string nimi) : nimi_(nimi), koulutusohjelmat_()
{

}

Koulu::~Koulu()
{

}


//getters
string Koulu::annaNimi()
{
	return nimi_;
}


//setters
void Koulu::asetaNimi(string nimi)
{
	nimi_ = nimi;
}


//herkut
void Koulu::lisaaKoulutusohjelma()
{
	string nimi;
	cout << "\nLisaa koulutusohjelma\n\nKoulutusohjelman nimi: ";
	getline(cin, nimi);
	int i = etsiKoulutusohjelma(nimi);
	if (i < 0)
	{
		Koulutusohjelma uusi(nimi);
		koulutusohjelmat_.push_back(uusi);
	}
	else cout << "Koulutusohjelma on jo lisatty!" << endl;
}

void Koulu::tulostaKoulutusohjelmat()const
{
	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++)
	{
		cout << koulutusohjelmat_.at(i).annaNimi() << endl;
	}
}

void Koulu::tulostaKoulutusohjelmienMaara()const
{
	cout << "Koulutusohjelmia on: " << koulutusohjelmat_.size() << endl;
}

void Koulu::lisaaKoulutusohjelmaanOpettaja()
{
	string nimi;
	
	cout << "\nLisaa opettaja\n\nKoulutusohjelma: ";
	getline(cin, nimi);
	int i = etsiKoulutusohjelma(nimi);

	if (i >= 0)
	{
		koulutusohjelmat_.at(i).lisaaOpettaja();
		cout << "Opettaja lisatty" << endl;
	}
	else cout << "Koulutusohjelmaa ei loytynt" << endl;

}

void Koulu::tulostaKoulutusohjelmanOpettajat()const
{
	string nimi;
	cout << "Koulutusohjelma: ";
	getline(cin, nimi);
	int i = etsiKoulutusohjelma(nimi);
	if (i >= 0)
	{
		koulutusohjelmat_.at(i).tulostaOpettajat();
	}
	else cout << "Koulutusohjelmaa ei loydetty" << endl;
}

void Koulu::lisaaKoulutusohjelmaanOpiskelija()
{
	string nimi;
	cout << "\nLisaa opiskelija\n\nKoulutusohjelma: ";
	getline(cin, nimi);
	int i = etsiKoulutusohjelma(nimi);
	if (i >= 0)
	{
		koulutusohjelmat_.at(i).lisaaOpiskelija();
		cout << "Opiskelija lisatty" << endl;
	}
	else cout << "Koulutusohjelmaa ei loytynyt" << endl;
}

void Koulu::tulostaKoulutusohjelmanOpiskelijat()const
{
	string nimi;
	cout << "Koulutusohjelma: ";
	getline(cin, nimi);
	int i = etsiKoulutusohjelma(nimi);
	if (i >= 0)
	{
		koulutusohjelmat_.at(i).tulostaOpiskelijat();
	}
	else cout << "Koulutusohjelmaa ei loydetty" << endl;
}

int Koulu::etsiKoulutusohjelma(string nimi)const
{
	std::transform(nimi.begin(),nimi.end(), nimi.begin(), ::tolower);
	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++)
	{
		string temp_nimi = koulutusohjelmat_.at(i).annaNimi();
		std::transform(temp_nimi.begin(), temp_nimi.end(), temp_nimi.begin(), ::tolower);
		if (nimi == koulutusohjelmat_.at(i).annaNimi())
			return i;
		
}	
	return -1;
}

void Koulu::poistaKoulutusohjelma()
{
	string nimi;
	cout << "Poistettavan koulutusohjelman nimi: ";
	getline(cin, nimi);
	int i = etsiKoulutusohjelma(nimi);
	if (i >= 0)
	{
		koulutusohjelmat_.erase(koulutusohjelmat_.begin()+i);
	}
	else cout << "Koulutusohjelmaa ei loytynyt!" << endl;
}

void Koulu::poistaKoulutusohjelmastaOpettaja()
{
	string nimi;
	cout << "Opettajan koulutusohjelman nimi: ";
	getline(cin, nimi);
	int i = etsiKoulutusohjelma(nimi);
	if (i >= 0)
	{

	}
	else cout << "Koulutusohjelmaa ei loytynyt!" << endl;
}

void Koulu::poistaKoulutusohjelmastaOpiskelija()
{
	string nimi;
	cout << "Opiskelijan koulutusohjelman nimi: ";
	getline(cin, nimi);
	int i = etsiKoulutusohjelma(nimi);
	if (i >= 0)
	{
		//hae opiskelija
	}
	else cout << "Koulutusohjelmaa ei loytynyt!" << endl;
}

void Koulu::lueTiedot(string polku)const
{
	ifstream tiedosto(polku);

	string rivi, data;

	if (tiedosto.is_open())
	{
		while (getline(tiedosto, rivi))
		{
			data = data + rivi + "\n";
		}
		tiedosto.close();
		stringstream tiedot(data);

		//tiedot stringin lukua ja niiden sisällyttäminen olioihin
	}
	else cout << "Tiedostoa ei voi avata!" << endl;
}

void Koulu::tallennaTiedot(string polku)const
{
	ofstream tiedosto(polku);
	if (tiedosto.is_open())
	{
		//tiedosto<<ja sitten sisältöä
		tiedosto.close();
	}
	else cout << "Tiedostoa ei voi avata!" << endl;
}