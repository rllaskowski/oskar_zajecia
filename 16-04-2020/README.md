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
tab[40124] = 10

// Błąd ponieważ w tablicy indeksujemy elementy od 0,
// zatem ostatni element w tej tablicy ma indeks 2999
tab[3000] = 9

// Błąd ponieważ indeksami w tablicy są 
// wyłącznie wartości liczbowe
tab["Napis"] = 10
```

