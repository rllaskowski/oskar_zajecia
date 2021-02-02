# Geometria

<<<<<<< HEAD
## Nierówność trójkąta:
=======
- Nierówność trójkąta:
>>>>>>> f674e521667b07f643fb38ed305c40056c8cdf37

jeśli oznaczymy boki trójkąta jako a,b,c - tak że 

a >= b >= c

to zachodzi nierówność

b+c > a

Również w drugą stronę - trójkąt można zbudować, tylko jeśli suma krótszych boków jest większa
niż najdłuższy bok.

```cpp

bool czyTrojkat(int a, int b, int c) {
    int suma = a+b+c;
    int najdluzszy = max(a, max(b, c));

    return (suma-najdluzszy) > najdluzszy;
}
```

<<<<<<< HEAD
### Tw. Pitagorasa
=======


>>>>>>> f674e521667b07f643fb38ed305c40056c8cdf37

