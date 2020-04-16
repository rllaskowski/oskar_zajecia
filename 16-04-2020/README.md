# Mapy w C++

Aby skorzystać z mapy w C++ dodajemy do programu bibliotekę `map.h`

## Mapy a tablice
Klasyczne tablice w C++ mają z góry określoną ilość przetrzymywanych elementów oraz pozwalają na korzystanie tylko z indeksów liczbowych.
Ze względu na swój ograniczony rozmiar, odniesienie się do za dużych indeksów powoduje błąd programu.

### Przykład
```
int tab[3000];

// poprawne ponieważ 222 < 3000
tab[222] = 4; 

// Błąd ponieważ 40124 > 3000
tab[40124] = 10;

// Błąd ponieważ w tablicy indeksujemy elementy od 0,
// zatem ostatni element w tej tablicy ma indeks 2999
tab[3000] = 9;

// Błąd ponieważ indeksami w tablicy są 
// wyłącznie wartości liczbowe
tab["Napis"] = 10;
```

Korzystanie z mapy znosi oba ograniczenia! Tworząc mapę możemy zdecydowąc jakim typem zmiennym będzie ona indeksowana, oraz
jaki będzie typ trzymanych zmiennych. Wielkości mapy nie ogranicza również nic poza ilością pamięci naszego komputera.

### Przykład

```
// Tworzymy mapę indeksowaną przez int, która trzyma zmienne typu string
map<int, string> imiona;

imiona[0] = "Oskar";

// Świetnie! możemy korzystać z naprawdę dużych indeksów
imiona[12312411] = "Maciej";

// A nawet z indeksów ujemnych! 
imiona[-1233] = "Bartosz";

// Błąd... indeksy stworzonej przez nas mapy mają być typu int!
imiona["Ala"] = "Błażej"

// Stwórzmy tablicę indeksowaną przez typ string, trzymającą wartości typu int
map<string, int> oceny;

// Teraz jest dobrze.
oceny["Ala"] = 5;
```