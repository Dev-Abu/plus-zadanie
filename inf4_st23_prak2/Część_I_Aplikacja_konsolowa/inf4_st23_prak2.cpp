#include <iostream>
#include <string>

class Notatka {
private:
    static int licznik_notatek; // Statyczny licznik notatek do zliczania utworzonych notatek
    int id; // Unikalny identyfikator
    std::string tytul; // Tytuł notatki
    std::string tresc; // Treść notatki

public:
    Notatka(const std::string& tytul, const std::string& tresc) {
        licznik_notatek++; // Inkrementacja licznika notatek
        id = licznik_notatek; // Ustawienie unikalnego identyfikatora (id) równego licznikowi notatek
        this->tytul = tytul; // Ustawienie pola tytul jako parametr tytul
        this->tresc = tresc; // Ustawienie pola tresc jako parametr tresc
    }

    void wyswietl() {
        std::cout << "Tytuł: " << tytul << std::endl;
        std::cout << "Treść: " << tresc << std::endl;
    }

    void diagnostyka() {
        std::cout << "ID: " << id << "; Tytuł: " << tytul << "; Treść: " << tresc << std::endl;
    }
};

int Notatka::licznik_notatek = 0; // Inicjalizacja statycznego licznika notatek

int main() {
    // Tworzenie dwóch notatek
    Notatka notatka1("Notatka 1", "To jest treść Notatki 1");
    Notatka notatka2("Notatka 2", "To jest treść Notatki 2");

    // Wyświetlanie notatek
    notatka1.wyswietl();
    notatka2.wyswietl();

    // Wyświetlanie informacji diagnostycznych
    notatka1.diagnostyka();
    notatka2.diagnostyka();

    return 0;
}
