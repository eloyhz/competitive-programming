# Max-Min Swap

Considera un arreglo $a$ de longitud $n$.
El elemento máximo en el arreglo es igual
a $M$, el elemento mínimo es igual a $m$.
El arreglo $b$ de la misma longitud es
obtenido a partir del arreglo $a$ de la
siguiente manera:
si $a[i]=M$, entonces $b[i]=m$,
si $a[i]=m$, entonces $b[i]=M$,
si $m<a[i]<M$, entonces $b[i]=a[i]$.
Se te proporciona el arreglo $b$,
tu tarea es reconstruir el arreglo $a$.

## Formato de Entrada
La primer línea de la entrada contiene
un entero $n$ ($1 \leq n \leq 10^5$),
la longitud de los arreglos.
La segunda línea contiene los $n$ enteros
del arreglo $b$, sus valores absolutos
no exceden $10^9$.

## Formato de Salida
Imprime los $n$ enteros del arreglo $a$
reconstruido.

## Ejemplo

### Entrada
```
5
-1 2 -1 4 5
```

### Salida
```
5 2 5 4 -1
```
