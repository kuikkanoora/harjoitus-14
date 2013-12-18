/*************************************************************************************************************************************************************
*Tehtävä: Harjoitus14
*Tekijä: Noora Kuikka
*PVM: 23.10.2013
*Kuvaus:
*Tee ohjelma, joka kysyy henkilˆtietosi seuraavasti:

*Anna (kaikki) etunimesi (merkkijono):

*Anna kengannumero (kokonaisluku):

*Anna sukunimi (merkkijono):

*Anna koulumatka (reaaliluku):

*Anna osoitteesi:

*Anna postinumero:

*

*Ohjelma tulostaa tiedot seuraavasti:

*sukunimi etunimet

*osoite

*postinumero

*kengannumero ja koulumatka

*

*K‰yt‰ C++:n cin- ja cout-olioita ohjelman toteuttamiseen.
*Versio 1.0 H4719 23.10.2013
**************************************************************************************************************************************************************/



#include <iostream>

using namespace std;



int main()

{

	char name[100];

	int size;

	char surname[20];

	float distance;

	char address[80];

	int post;



	cout << "Anna (kaikki) etunimesi (merkkijono): ";

	cin.getline(name,100);

	cout << "Anna keng‰nnumero (kokonaisluku): ";

	cin >> size;

	cout << "Anna sukunimi (merkkijono): ";

	cin >> surname;

	cout << "Anna koulumatka (reaaliluku): ";

	cin >> distance;

	cout << "Anna osoitteesi: ";

	cin >> address;

	cout << "Anna postinumero: ";

	cin >> post;



	cout << "\n" << name << " " << surname << "\n";

	cout << address << "\n";

	cout << post << "\n";

	cout << size << " " << distance << "\n";

    

	return 0;

}