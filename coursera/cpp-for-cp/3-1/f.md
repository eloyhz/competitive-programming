# Hide Something Odd

## Descripción del problema
Tienes un arreglo de longitud $N$. 
Quieres que el arreglo no parezca tan extraño, así
que quieres poner todos los elementos impares
al final del arreglo. El orden relativo de los 
elementos impares e impares no debería de cambiar.

## Formato de Entrada
La primer línea de la entrada contiene un entero
($1 \leq n \leq 10^5$), la longitud del arreglo.
La segunda línea contiene los $n$ enteros positivos
del arreglo, para los cuales su valor absoluto no
excede de $10^9$.

## Formato de Salida
Reordena el arreglo de tal manera que los elementos
pares son colocados al inicio del arreglo,
los impares al final del arreglo, y el orden
relativo dentro de cada grupo (par e impar)
se mantiene como en el arreglo original.

## Ejemplo 1
### Entrada
```
6
3 2 1 5 4 6
```
### Salida
```
2 4 6 3 1 5 
```


## Ejemplo 2
### Entrada
```
10
5 3 4 5 3 4 2 3 1 1
```
### Salida
```
4 4 2 5 3 5 3 3 1 1 
```
