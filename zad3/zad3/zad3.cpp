#include <iostream>
#include <time.h>

using namespace std;

int main()
{

	// ZADANIE 2.1

	/*
	int i = 0;

	int liczba;

	cout << "Podaj liczbe : ", cin >> liczba;

	cout << "While: \n";
	while (i < liczba) {
		cout << i << " ";
		i++;
	}

	cout << "\nDo while: \n";
	i = 0;
	do
	{
		cout << i << " ";
		i++;
	} while (i < liczba);

	cout << "\nFor: \n";

	for (int i = 0; i < liczba; i++) {
		cout << i << " ";
	}

	*/



	// ZADANIE 2.2


	/*

	int liczba;

	cout << "Podaj liczbe : ", cin >> liczba;

	do
	{
		cout << "Podaj liczbe : ", cin >> liczba;
	}while (liczba > 0);


	*/



	// ZADANIE 2.3

	/*
	int liczba, ile_u = 0, ile_d = 0, suma_d = 0, suma_u = 0;

	for (int i = 0; i < 10; i++) {
		cout << "Podaj liczbe: ", cin >> liczba;
		if (liczba >= 0) {
			ile_d++;
			suma_d += liczba;
		}
		else {
			ile_u++;
			suma_u += liczba;
		}
	}
	cout << "Ilosc liczb ujemnych: " << ile_u << ", suma: " << suma_u << endl;
	cout << "Ilosc liczb dodatnich: " << ile_d << ", suma: " << suma_d << endl;
	*/




	// ZADANIE 2.4


	/*

	int n, a, suma = 0, iloczyn = 1;

	cout << "Podaj n: ", cin >> n;
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			cout << "Podaj liczbe: ", cin >> a;
			if (a % 2 == 0) {
				suma += a;
				iloczyn *= a;
			}
		}
		cout << "\nSuma: " << suma;
		cout << "\nIloczyn: " << iloczyn;
	}
	else {
		cout << "N jest mniejsze od 0";
	}


	*/





	// ZADANIE 2.5


	/*
	int n, a, suma = 0, iloczyn = 1;
	srand(time(NULL));

	cout << "Podaj n: ", cin >> n;
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			a = rand() % 56 - 5;
			cout << a << " ";
			if (a % 2 == 0) {
				suma += a;
				iloczyn *= a;
			}
		}
		cout << "\nSuma: " << suma;
		cout << "\nIloczyn: " << iloczyn;
	}
	else {
		cout << "N jest mniejsze od 0";
	}

	*/




	// ZADANIE 1.1

	/*

	float n, i = 1, a, suma = 0;

	cout << "Podaj liczbe studentow w grupie: ", cin >> n;

	while (i <= n) {
		cout << "Podaj liczbe punktow studenta numer " << i << ": ", cin >> a;
		i++;
		suma += a;
	}

	cout << "Srednia grupy: " << suma / n;


	*/




	// ZADANIE 1.2



	/*

	float n, i = 1, a, suma = 0;

	cout << "Podaj liczbe studentow w grupie: ", cin >> n;

	while (i <= n) {
		cout << "Podaj liczbe punktow studenta numer " << i << ": ";
		cin >> a;
		if (a >= 0 && a <= 100) {
			i++;
			suma += a;
		}
		else {
			cout << "Wprowadz liczbe z przedzialu 0-100\n";
		}
	}

	cout << "Srednia grupy: " << suma / n;
	

	*/




	// ZADANIE 1.3

	/*
	
	float n, i = 1, a, suma = 0;

	cout << "Podaj liczbe studentow w grupie: ", cin >> n;

	while (i <= n) {
		cout << "Podaj liczbe punktow studenta numer " << i << ": ";
		cin >> a;
		if (a >= 0 && a <= 100) {
			i++;
			suma += a;
		}
		else {
			cout << "Liczba nie nalezy do przedzialu 0-100\n";
			i++;
			continue;
		}
	}

	cout << "Srednia grupy: " << suma / n;
	
	*/



	// ZADANIE 1.4


	/*

	float n, i = 1, a, suma = 0;

	cout << "Podaj liczbe studentow w grupie: ", cin >> n;

	 do{
		cout << "Podaj liczbe punktow studenta numer " << i << ": ";
		cin >> a;
		if (a >= 0 && a <= 100) {
			i++;
			suma += a;
		}
		else {
			cout << "Liczba nie nalezy do przedzialu 0-100\n";
			i++;
			continue;
	
		}
	 } while (i <= n);

	cout << "Srednia grupy: " << suma / n;


	*/











	// ZADANIE 1.5

	/*

 	for (int i = 1; i < 101; i++) {
		cout << i << " ";
	}

	cout << endl << endl << endl;

	for (int i = 100; i >= 0; i--) {
		cout << i << " ";
	}

	cout << endl << endl << endl;

	for (int i = 7; i <=77; i+=7) {
		cout << i << " ";
	}

	cout << endl << endl << endl;

	for (int i = 20; i >= 0; i-=2) {
		cout << i << " ";
	}

	*/
}
