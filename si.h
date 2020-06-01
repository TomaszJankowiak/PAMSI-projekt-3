#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cstdlib>

void plansza(char t[], int rozmiar, int n); // tworzy i wyswietla tablice charow

bool remis(char t[], bool mm, int rozmiar, int n); // sprawdzajaca poszczegolne pola planszy (komorki tablicy) czy nie sa puste (spacje), jesli zadna nie jest wtedy jest remis

bool wygrana(char t[], char g, bool mm, int rozmiar, int n, int ile); // sprawdza ciag znakow na kazdej prostej " - | \ / " - sprawdzanie wygranej

int minimax(char t[], char gracz, int rozmiar, int n, int ile, int alpha, int beta, int glebokosc);   // algorytm symulujacy sztuczna inteligencje - ograniczony do 6 krokow w przod

int komputer(char t[], int rozmiar, int n, int ile); // wykorzystuje powyzszy algorytm i wybiera ruch komputera

void ruch(char t[], char &gracz, int rozmiar, int n, int ile); // sluzy do wykonania ruchu zarowno w przypadku gracza jak i komputera
