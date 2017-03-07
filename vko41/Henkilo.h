#pragma once
#include<string>
using std::string;
class Henkilo
{
public:
	Henkilo();
	Henkilo(string etunimi, string sukunimi, string osoite, string puhelinnumero);
	Henkilo(const Henkilo& alkup);
	~Henkilo();
	Henkilo& operator=(const Henkilo& vanha);	//sijoitusoperaattori

	//setters
	void asetaEtunimi(string etunimi);
	void asetaSukunimi(string sukunimi);
	void asetaOsoite(string osoite);
	void asetaPuhelinnumero(string puhelinnumero);

	//getters
	string annaEtunimi() const;
	string annaSukunimi()const;
	string annaOsoite()const;
	string annaPuhelinnumero()const;

	//herkut
	void kysyTiedot();
	void tulosta()const;

private:
	string etunimi_;
	string osoite_;
	string sukunimi_;
	string puhelinnumero_;
};

