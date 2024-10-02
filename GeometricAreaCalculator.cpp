#include <iostream>


using namespace std;

double sprawdzanie_czy_dodatnie() {
    double value;
    do {
        cout << "Podaj wartosc (musi być nieujemna): ";
        cin >> value;
        if (value < 0) {
            cout << "Wartosc musi byc nieujemna. Sprobuj ponownie." << endl;
        }
    } while (value < 0);
    return value;
}

double kwadrat_pole(double bok) {
    return bok * bok;
}

void kwadrat() {
    cout << "Obliczam pole kwadratu" << endl;
    double bok = sprawdzanie_czy_dodatnie();
    cout << "Pole kwadratu: " << kwadrat_pole(bok) << endl;
}

double prostokat_pole(double a, double b) {
    return a * b;
}

void prostokat() {
    cout << "Obliczam pole prostokata" << endl;
    double a = sprawdzanie_czy_dodatnie();
    double b = sprawdzanie_czy_dodatnie();
    cout << "Pole prostokata: " << prostokat_pole(a, b) << endl;
}

double kolo_pole(double r) {
    return 3.14 * r * r;
}

void kolo() {
    cout << "Obliczam pole kola" << endl;
    double r = sprawdzanie_czy_dodatnie();
    cout << "Pole kola: " << kolo_pole(r) << endl;
}

double trojkat_pole(double podstawa, double wysokosc) {
    return (podstawa * wysokosc) / 2;
}

void trojkat() {
    cout << "Obliczam pole trojkata" << endl;
    double podstawa = sprawdzanie_czy_dodatnie();
    double wysokosc = sprawdzanie_czy_dodatnie();
    cout << "Pole trojkata: " << trojkat_pole(podstawa, wysokosc) << endl;
}

double trapez_pole(double a, double b, double h) {
    return ((a + b) * h) / 2;
}

void trapez() {
    cout << "Obliczam pole trapezu" << endl;
    double a = sprawdzanie_czy_dodatnie();
    double b = sprawdzanie_czy_dodatnie();
    double h = sprawdzanie_czy_dodatnie();
    cout << "Pole trapezu: " << trapez_pole(a, b, h) << endl;
}

int main() {
    int wybor;
    do {
        cout << "\nTen program liczy pole wybranej figury. Wybierz figure:" << endl;
        cout << "1. Kwadrat" << endl;
        cout << "2. Prostokat" << endl;
        cout << "3. Kolo" << endl;
        cout << "4. Trojkat" << endl;
        cout << "5. Trapez" << endl;
        cout << "0. Zakoncz program" << endl;
        cin >> wybor;

        switch (wybor) {
        case 1:
            kwadrat();
            break;
        case 2:
            prostokat();
            break;
        case 3:
            kolo();
            break;
        case 4:
            trojkat();
            break;
        case 5:
            trapez();
            break;
        case 0:
            cout << "Zakonczono program." << endl;
            break;
        default:
            cout << "Nieprawidłowy wybor. Sprobuj ponownie." << endl;
            break;
        }
    } while (wybor != 0);

    return EXIT_SUCCESS;
}
