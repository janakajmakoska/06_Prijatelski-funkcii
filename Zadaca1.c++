#include <iostream>
using namespace std;

class Covek {
private:
    string ime, prezime, adresa, telefon;
public:
    Covek(string ime, string prezime, string adresa, string telefon) {
        this->ime = ime;
        this->prezime = prezime;
        this->adresa = adresa;
        this->telefon = telefon;
    }
};

class Stedac {
private:
    static double kamata;
    static int brojStedaci;
    Covek lice;
    double bilans;
    double kredit;
public:
    Stedac(string ime, string prezime, string adresa, string telefon, double bilans, double kredit) 
        : lice(ime, prezime, adresa, telefon) {
        this->bilans = bilans;
        this->kredit = kredit;
        brojStedaci++;
    }
    static double getKamata() {
        return kamata;
    }
    static void setKamata(double novaKamata) {
        kamata = novaKamata;
    }
    static int getBrojStedaci() {
        return brojStedaci;
    }
};

double Stedac::kamata = 0.05;
int Stedac::brojStedaci = 0;

int main() {
    Stedac s1("Ana", "Anic", "Skopje", "070123456", 1000, 0);
    Stedac s2("Marko", "Markovic", "Belgrade", "011123456", 500, 0);
    cout << "Broj na stedaci: " << Stedac::getBrojStedaci() << endl;
    cout << "Godisna kamata: " << Stedac::getKamata() << endl;
    Stedac::setKamata(0.06);
    cout << "Nova godisna kamata: " << Stedac::getKamata() << endl;
    return 0;
}
