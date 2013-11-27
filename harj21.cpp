/**********************************************************
*Teht‰v‰: Harjoitus21
*Tekij‰: Olli Kauppinen
*PVM: 19.11.2013
*Kuvaus:
*Muunna harjoitus 11 niin, etta k‰yt‰t seuraavia aliohjelmia:
*
*int KysyValinta(void);
*
*-> KysyValinta paluttaa k‰ytt‰j‰n antaman valintanumeron (0-6)
*
*double Summa(float luku1, int luku2);
*
*-> Summa laskee yhteen annetut tiedot ja palauttaa summan p‰‰ohjelmaan
*
*
* Versio 1.0 H4718 08.10.2013
***********************************************************/

#include<iostream>
using namespace std;

int KysyValinta(void);
double Summa(float luku1, int luku2);

int main()
{
	float luku1;
	int luku2;
	int valinta;
	double tulos;
	bool jatka = true;

	cout << "Anna kaksi lukua: \n";
	cin >> luku1;
	cin >> luku2;

	do
	{

		valinta = KysyValinta();

		switch (valinta)
		{
			case 0:
			{
				cout << "Hyv‰‰ p‰iv‰njatkoa\n";
				jatka = false;

			}
			case 1:
			{
				tulos = Summa(luku1, luku2);
				cout << "Summa = " << tulos << endl;
				break;
			}
			case 2:
			{
				tulos = luku1-luku2;
				cout << "Erotus = " << tulos << endl;
				break;
			}
			case 3:
			{
				tulos = luku1*luku2;
				cout << "Tulo = " << tulos << endl;
				break;
			}
			case 4:
			{
				tulos = luku1/luku2;
				cout << "Osam‰‰r‰ = " << tulos << endl;
				break;
			}
			case 5:
			{
				tulos = (int) luku1%luku2;
				cout << "Jakoj‰‰nnˆs = " << tulos << endl;
				break;
			}
			case 6:
			{
				cout << "Anna kaksi lukua: \n";
				cin >> luku1;
				cin >> luku2;
				break;
			}
			default:
			{
				cout << "\nv‰‰r‰ valinta\n";
				break;
			}
		}
	}
	while (jatka == true);

	cout << "\n";
}

int KysyValinta(void)
{
	int valinta;

	cout << "Ohjelman valinta: \n1. Summa\n2. Erotus\n3. Tulo\n4. Osam‰‰r‰\n5. Jakok‰‰nnˆs\n6. Syˆt‰ uudet luvut laskemista varten\n0. Lopetus\n";
	cin >> valinta;

	return valinta;
}

double Summa(float luku1, int luku2)
{
	double tulos;

	tulos = luku1+luku2;

	return tulos;
}