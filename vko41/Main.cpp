#include<iostream>
#include"Koulutusohjelma.h"
#include"Koulu.h"
#include"Sovellus.h"

using std::cout; using std::endl;

int main()
{
	try{
		Sovellus rekisteri;
		rekisteri.aja();
	}
	catch (std::exception& er)
	{
		cout << "Virhe: " << er.what() << endl;
	}
	catch (...)
	{
		cout << "Virhe!" << endl;
	}
	system("pause");
	return 0;
}