#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cstdlib>
#include "si.h"

using namespace std;


int main()
{
	int rozmiar, lznakow=0, n;
	char odnowa;
	cout << "Witaj w grze kolko i krzyzyk!" << endl << endl;
	while(1){
        cout << "Podaj dlugosc planszy (ilosc pol w kolumnie lub wierszu): ";
        cin >> rozmiar;
        cout << "Podaj liczbe znakow w rzedzie wystarczajaca do wygranej: ";
        cin >> lznakow;
        while(lznakow>rozmiar){
            cerr << "Wieksza od rozmiaru planszy? Podaj liczbe znakow w rzedzie potrzebna do wygranej jeszcze raz: ";
            cin >> lznakow;
        }
        cout << endl;
        n = rozmiar * rozmiar;

        char *t = new char[n+1], gracz;
        for(int i=1; i<=n; i++)
            t[i] = ' ';
        gracz = 'O';
        while(1){
            ruch(t, gracz, rozmiar, n, lznakow);
            plansza(t, rozmiar, n);
            if (wygrana(t, 'X', false, rozmiar, n, lznakow) ||
                wygrana(t, 'O', false, rozmiar, n, lznakow) ||
                remis(t, false, rozmiar, n))
                break;
        }
        cout << "Chcesz zagrac jeszcze raz? (T/N) ";
        cin >> odnowa;
        if(!(odnowa == 'T' || odnowa =='t')) break;
        else cout << endl;
    }
	cout << endl << "Dziekujemy i zapraszamy ponownie :)" << endl;


	return 0;
}
