#pragma once
#include<string>
#include<vector>
#include"Opiskelija.h"
#include"Opettaja.h"

using std::string; using std::vector;

class Koulutusohjelma
{
public:
	Koulutusohjelma();
	Koulutusohjelma(string nimi);
	~Koulutusohjelma();

	//setters
	void asetaNimi(string nimi);

	//getters
	string annaNimi()const;

	//herkut
	void lisaaOpettaja();
	void lisaaOpiskelija();
	void tulostaOpettajat()const;
	void tulostaOpiskelijat()const;

private:
	string nimi_;
	vector <Opiskelija> opiskelijat_;
	vector <Opettaja> opettajat_;

};

