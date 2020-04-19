# Sumy prefiksowe

Dosyć często w zadaniach pojawia się pytanie o sumy wartości znajdujących się na zadanym przedziale.

[Przykładowe zadanie](halloween.pdf)

Prostym i brutalnym rozwiązaniem jest przejście pętlą po przedziale i sumowanie znajdujących się tam liczb.

### Przykład
```
int cukierki[MAX];
...
int pocz, kon; // początek oraz koniec przedziału z zapytania
...
cin >> pocz >> kon;

int suma = 0;
for (int i = pocz; i <= kon; i++) {
    suma += cukierki[i];
}

cout << suma << endl;
```
Często jednak takie zapytania są w jednym teście powtarzane. 
Rozwiązanie brutalne, polegające przechodzeniu przez przedział może okazać się niewystarczająco
optymalne. Wydaje się, że niektóre obliczenia niepotrzebnie powtarzamy przy każdym zapytaniu.

### Przykład 
```
int cukierki[MAX];
...
int zapytania; // ilość zapytań w teście
int pocz, kon; // początek oraz koniec przedziału z zapytania
...
cin >> zapytania;

for (int z = 0; z < zapytania; z++) {
    cin >> pocz >> kon;

    int suma = 0;
    for (int i = pocz; i <= kon; i++) {
        suma += cukierki[i];
    }

    cout << suma << endl;
}

```

Uprośćmy nasz problem: początek przedziału zawsze będzie znajdował się na pierwszej wartości.
Jak możemy teraz usprawnić działanie algorytmu? 

Zauważmy, że suma wartości na przedziale od 1 do n jest równa sumie wartości na przedziale 
od 1 do (n-1) + ta wartość.

Korzystając z tej prostej obserwacji spamiętajmy sumy wartości na **prefiksach** (początkowych elementach) ciągu.
Zróbmy to przed pierwszym zapytaniem. Teraz przy każdym zapytaniu możemy odnieść się do zapamiętanej wcześniej wartości.


### Przykład 
```
int cukierki[MAX];
int sumy[MAX];
...
sumy[0] = 0;
for (int i = 1; i < MAX; i++) {
    sumy[i] = sumy[i-1]+cukierki[i];
}
...
int zapytania; // ilość zapytań w teście
int kon; // koniec przedziału z zapytania
...
cin >> zapytania;

for (int z = 0; z < zapytania; z++) {
    cin >> kon;

    cout << sumy[kon] << endl;
}

```
Przykładowa zawartość tablicy cukierki oraz odpowiadającej jej tablicy sumy:


|indeksy |0  |1  |2  |4  |5  |6  |8  |9  |
|--------|---|---|---|---|---|---|---|---|
|cukierki|0  |4  |2  |1  |15 |3  |8  |1  |
|sumy    |0  |4  |6  |7  |22 |25 |33 |34 |


Obliczone sumy nazywamy od teraz **sumami prefiksowymi**.

Wracamy do oryginalnego problemu. Jak możemy wykorzystać sumy prefiksowe , kiedy początek przedziału nie zawsze
znajduje się na pierwszej wartości?

Chcemy korzystając z naszej powyżej tabeli móc naty

Zauważmy, że przykładowo suma wartości cukierków na przedziale 1 do 5 z powyżej tabeli jest równa sumie
liczb z przedzialu od 1 do 

