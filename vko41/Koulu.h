#pragma once
#include<string>
#include<iostream>
#include<vector>
#include"Koulutusohjelma.h"
using std::string; using std::vector;
class Koulu
{
public:
	Koulu();
	Koulu(string nimi);
	~Koulu();

	//getters
	string annaNimi();
	//setters
	void asetaNimi(string nimi);
	//herkut
	void lisaaKoulutusohjelma();
	void tulostaKoulutusohjelmat()const;
	void tulostaKoulutusohjelmienMaara()const;
	void lisaaKoulutusohjelmaanOpettaja();
	void tulostaKoulutusohjelmanOpettajat()const;
	void lisaaKoulutusohjelmaanOpiskelija();
	void tulostaKoulutusohjelmanOpiskelijat()const;
	
	void poistaKoulutusohjelma();
	void poistaKoulutusohjelmastaOpettaja();
	void poistaKoulutusohjelmastaOpiskelija();
	void lueTiedot( string polku)const;
	void tallennaTiedot(string polku)const;
	
private:
	string nimi_;
	vector <Koulutusohjelma> koulutusohjelmat_;
	int etsiKoulutusohjelma(string nimi)const;
};

