# Add Two

Tienes $n$ computadoras en el cluster con $p_i$
slots de memoria RAM en cada una.
Los $q_i \leq p_i$ de esos slots están ocupados.
Tienes dos módulos extra de RAM que pueden trabajar
solamente en par en la misma computadora.
Encuentra el número de computadoras donde estos
módulos puedan ser instalados.

## Formato de Entrada
La primer línea de entrada contiene un entero $n$
($1 \leq n \leq 100$), el número de computadoras
en el cluster. La segunda línea contiene $n$ enteros
$q_i$, el número de ranuras de RAM ocupadas en cada
computadora.
La tercer línea contiene $n$ enteros $p_i$, el
número total de ranuras de RAM en cada computadora
($0 \leq q_i \leq p_i \leq 100$).

## Formato de Salida
Imprime un entero, el número de computadoras
donde los módulos puedan ser instalados.

## Ejemplo 1

### Entrada
```
3
2 1 3
2 3 4
```

### Salida
```
1
```

## Ejemplo 1

### Entrada
```
4
1 1 1 1
6 4 5 7
```

### Salida
```
4
```