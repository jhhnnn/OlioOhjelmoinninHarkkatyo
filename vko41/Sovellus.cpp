#include "Sovellus.h"
#include<iostream>
#include"Koulu.h"
using std::cout; using std::cin; using std::endl;

Sovellus::Sovellus()
{
}


Sovellus::~Sovellus()
{
}

void Sovellus::aja()const
{
	Koulu Tamk;
	string valinta = "";
	cout << "--- Tervetuloa rekisteriin! ---" << endl;
	do
	{
		valinta = tulostaValikko();
		if (valinta == "1")
		{
			Tamk.lisaaKoulutusohjelma();
		}
		else if (valinta == "2")
		{
			Tamk.tulostaKoulutusohjelmat();
		}
		else if (valinta == "3")
		{
			Tamk.tulostaKoulutusohjelmienMaara();
		}
		else if (valinta == "4")
		{
			Tamk.lisaaKoulutusohjelmaanOpettaja();
		}
		else if (valinta == "5")
		{
			Tamk.tulostaKoulutusohjelmanOpettajat();
		}
		else if (valinta == "6")
		{
			Tamk.lisaaKoulutusohjelmaanOpiskelija();
		}
		else if (valinta == "7")
		{
			Tamk.tulostaKoulutusohjelmanOpiskelijat();
		}
		else if (valinta == "8")
		{
			//poista koulutusohjelma
		}
		else if (valinta == "9")
		{
			//poista opettaja
		}
		else if (valinta == "10")
		{
			//poista opiskelija
		}
		else if (valinta == "11")
		{
			//paivita koulutusohjelman nimi
		}
		else if (valinta == "12")
		{
			//paivita opettajan tiedot
		}
		else if (valinta == "13")
		{
			//paivita opiskelijan tiedot
		}
		else if (valinta == "14")
		{
			//lue tiedot
		}
		else if (valinta == "15")
		{
			//tallenna tiedot
		}
		else if (valinta == "0")
		{
			cout << "Nakemiin!" << endl;
		}
		else
			cout << "Virheellinen valinta!" << endl;
	} while (valinta != "0");
}

string Sovellus::tulostaValikko()const
{
	string valinta;
	cout << " 1) Lisää koulutusohjelma" << endl;
	cout << " 2) Tulosta koulutusohjelmien nimet" << endl;
	cout << " 3) Tulosta koulutusohjelmien maara" << endl;
	cout << " 4) Lisää koulutusohjelmaan opettaja" << endl;
	cout << " 5) Tulosta koulutusohjelman opettajat" << endl;
	cout << " 6) Lisää koulutusohjelmaan opiskelija" << endl;
	cout << " 7) Tulosta koulutusohjelman opiskelijat" << endl;
	cout << " 8) Poista koulutusohjelma" << endl;
	cout << " 9) Poista Opettaja" << endl;
	cout << "10) Poista opiskelija" << endl;
	cout << "11) Paivita koulutusojelman nimi" << endl;
	cout << "12) Paivita opettajan tiedot" << endl;
	cout << "13) Paivita opiskelijan tiedot" << endl;
	cout << "14) Lue tiedot" << endl;
	cout << "15) Tallenna tiedot" << endl;
	cout << " 0) Lopeta" << endl;
	cout << "\nValintasi: ";
	getline(cin, valinta);
	return valinta;
}