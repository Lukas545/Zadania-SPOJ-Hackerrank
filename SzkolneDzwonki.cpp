#include <iostream>
int naGodzine(std::string &s);
int naMinute(std::string &s);
void dodawanie(int &g, int &m, int &p, int &t);
int main()
{
    using namespace std;
    string start;
    int przewa, godzina, minuta, testy;
    int lekcja = 45;
    int przerwa = 0;
    cout << "Podaj godzine rozpoczecia: ";
    cin >> start;
    cout << "Podaj dlugosc przerw: ";
    cin >> przerwa;
    cout << "Podaj liczbe testow: ";
    cin >> testy;
    godzina = naGodzine(start);
    minuta = naMinute(start);
    dodawanie(godzina, minuta, przerwa, testy);
}
int naGodzine(std::string &s)
{
    int godzina, pierwsza, druga;
    pierwsza = s[0] - 48;
    druga = s[1] - 48;
    if (pierwsza > 0)
        godzina = pierwsza * 10 + druga;
    else
        godzina = pierwsza + druga;
    return godzina;
}
int naMinute(std::string &s)
{
    int minuta, pierwsza, druga;
    pierwsza = s[3] - 48;
    druga = s[4] - 48;
    if (pierwsza > 0)
        minuta = pierwsza * 10 + druga;
    else
        minuta = pierwsza + druga;
    return minuta;
}
void dodawanie(int &g, int &m, int &p, int &t)
{
    int i = 0;
    while (i < t)
    {
        m = m + 45;
        if (m >= 60)
        {
            m = m % 60;
            g++;
        }
        std::cout << g << ":" << m << " ";
        m = m + p;
        i++;
    }
}
/*Szkoła Zdolnych Programistów boryka się z niebagatelnym problemem dzwonków. Dyrektor szkoły chciałby bardzo, 
aby początki i końce lekcji ogłaszane były automatycznie, bez potrzeby angażowania woźnego. 
Nic więc dziwnego, że pilnie potrzebny jest program, który szybko wygeneruje informacje o godzinach, 
w których dzwonki powinny być uruchamiane.
Dyrektor już przemyślał problem i wie dokładnie, czego oczekuje od nieistniejącego jeszcze programu. 
Po pierwsze, godzina rozpoczęcia pierwszej lekcji może być zmienna i niekoniecznie musi być nią 800. 
Wynika z tego, że informację tę program musi przyjąć w postaci pierwszej danej wejściowej. 
Również długości przerw są zmienne, co akurat jest zupełnie zrozumiałe. Jedno tylko pozostaje niezmienne – długość lekcji, 
która zawsze trwa równo 45 minut.
Polecenie: napisz program, który generuje informacje o porach, w których w SZP powinien rozlegać się dźwięk dzwonka.
Dane wejściowe: 
nieznana z góry liczba wierszy tekstu, zawierających kolejno:
godzinę rozpoczęcia pierwszej lekcji w formacie HH:MM (np. 08:00)dowolną liczbę długości kolejnych przerw,
wyrażonych w minutach (całkowite t: t >0 i t<=10080) i liczbe testów do wykonania
*/
/*
Wejście:
08:00
15
4
Wyjście:
08:45,09:45,10:45,11:45
*/