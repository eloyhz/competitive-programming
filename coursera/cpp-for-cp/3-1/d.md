# Random Access

Tienes una secuencia de $N$ enteros.
Tu tarea es implementar un acceso aleatorio en
esta secuencia, por ejemplo, responder
$Q$ preguntas, cada pregunta contiene
un entero $t$ y se debe responder imprimiendo
el $t$-ésimo elemento de la secuencia.

## Formato de Entrada
La primer línea contiene un entero $N$ 
($1 \leq N \leq 100$), la longitud de la secuencia.
La segunda línea contiene una secuencia de $N$ enteros,
cuyo valor absoluto no excede de $100$.
La tercer línea contiene un entero $Q$ ($1 \leq Q \leq N$), el número de consultas.
La cuarta línea contiene $Q$ enteros, 
las consultas $t_i$ ($1 \leq t_i \leq N$). Se puede asumir que todas los $t_i$ son distintos.

## Formato de Salida
Imprimi $Q$ enteros, las respuestas a las consultas
en el orden que fueron dadas en la entrada.

## Ejemplo 1

### Entrada
```
3
1 2 -4
3
2 1 3
```

### Salida
```
2 1 -4
```


## Ejemplo 2

### Entrada
```
3
5 65 -9
1
2
```

### Salida
```
65 
```
