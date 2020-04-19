# Sumy prefiksowe

Dosyć często w zadaniach pojawia się pytanie o sumy wartości znajdujących się na zadanym przedziale.

[Przykładowe zadanie](halloween.pdf)


Prostym i brutalnym rozwiązaniem jest przechodzenie po zadanym przedziale i sumowanie znajdujących się tam liczb:

### Przykład
```
int cukierki[MAX];
...
int pocz, kon; // dany początek oraz koniec przedziału z zapytania
cin >> pocz >> kon;
int suma = 0;
for (int i = pocz; i <= kon; i++) {
    suma += cukierki[i];
}
cout << suma << endl;
```
Często jednak takie zapytania są w jednym teście powtarzane. 
Rozwiązanie brutalne, polegające na prostym przechodzeniu przez przedział może okazać się niewystarczająco
optymalne. Wydaje się, ze niektóre obliczenia niepotrzebnie powtarzamy przy każdym zapytaniu.

### Przyklad
```
int cukierki[MAX];
...
int zapytania; // ilość zapytań w teście
int pocz, kon; // dany początek oraz koniec przedziału z zapytania

for (int i = 0; i < testy; i++) {
    cin >> pocz >> kon;

    int suma = 0;
    for (int i = pocz; i <= kon; i++) {
        suma += cukierki[i];
    }

    cout << suma << endl;
}

```