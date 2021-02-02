# Geometria

## Nierówność trójkąta:

Jeśli oznaczymy boki trójkąta jako a,b,c - tak że 
```math
a \geq b \geq c
```
to zachodzi nierówność
```math
b+c > a
```
Również w drugą stronę - trójkąt można zbudować, tylko jeśli suma krótszych boków jest większa
niż najdłuższy bok.

(Nierówność trójkąta)[http://oblicz.com.pl/nierownosc-trojkata/]

```cpp

bool czyTrojkat(int a, int b, int c) {
    int suma = a+b+c;
    int najdluzszy = max(a, max(b, c));

    return (suma-najdluzszy) > najdluzszy;
}
```

## Tw. Pitagorasa

Jeśli długości boków trójkąta prostokątnego to a,b,c
oraz a,b - długości przyprostokątnych, c - długość przecwiprostokątnej

to zachodzi a