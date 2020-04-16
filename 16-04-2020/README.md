# Mapy w C++

Aby skorzystać z mapy w C++ dodajemy do programu bibliotekę `map.h`

## Mapy a tablice
Klasyczne tablice w C++ mają z góry określoną, stałą ilość przetrzymywanych elementów oraz pozwalają na korzystanie tylko z indeksów liczbowych.
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
map<int, string> miejsce;

miejsce[1] = "Oskar";

// Świetnie! możemy korzystać z naprawdę dużych indeksów
miejsce[12312411] = "Maciej";

// A nawet z indeksów ujemnych! 
miejsce[-1233] = "Bartosz";

// Błąd... indeksy stworzonej przez nas mapy mają być typu int!
miejsce["Ala"] = "Błażej"

// Stwórzmy tablicę indeksowaną przez typ string, trzymającą wartości typu int
map<string, int> ocena;

// Teraz jest dobrze.
ocena["Ala"] = 5;

// A teraz mapa indeksowana przez string, trzymająca zmienne typu string
map<string, string> kolega;

kolega["Andrzej"] = "Maciej";
```

Pamiętajmy jednak, że bezzensowne korzystanie z map zamiast tablic, będzie kosztować nas trochę dluższym czasem działania programu. 
Nie nadużywajmy ich jeśli są niepotrzebne, a kod da się napisać za pomocą zwykłych tablic.

# Zbiory w C++

Aby skorzystać z mapy w C++ dodajemy do programu bibliotekę `set.h`

Zbiór(**ang. set**) jest kolejną strukturą w C++, która w przeciwieństwie do tablic, nie posiada stałego rozmiaru.
Najważniejszymi funkcjami jakie udostępnia, jest dodawanie do niego nowych wartości oraz sprawdzanie czy jakaś wartość w nim występuje(oraz wiele innych).
Ważną rzeczą w zbiorach jest to, że każda wartość występuje w nim dokładnie raz! Dodanie drugi raz tej samej wartości do zbioru nie powoduje zmiany.


### Przykład
```
// Tworzymy nowy zbiór zawierający zmienne typu int
set<int> zbior;

// Do zbioru możemy dodawać nowe wartości funkcją insert()
zbior.insert(3);
zbior.insert(5);
zbior.insert(10);

// Ta instrukcja nie będzie miala wpływu na nasz zbiór, ponieważ zawiera on już wartość 5
zbior.insert(5);

// Błąd! Nasz zbiór trzyma zmienne typu int
zbiór.insert("napis");

// Możemy sprawdzić jaka jest wielkość naszego zbioru funkcją size()
if (zbior.size() == 3) {
    cout << "Ten tekst zostanie wypisany, ponieważ do zbioru należą 3 wartości: 3, 5, 10";
}


// Sprawdzenie czy wartość jest w zbiorze jest trochę trudniejsze.
// Korzystamy tu z iteratorów, ale o tym kiedy indziej
if (zbior.find(5) != zbior.end()) {
    cout << "Zbiór zawiera wartość 5";
}

```