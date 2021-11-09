/*
 * OmegaUp - Preorden de un árbol
 * https://omegaup.com/arena/problem/Preorden-de-un-arbol
 * 
 * 09/11/2021
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100001

int pre[MAX];
int idx;

struct nodo {
    struct nodo *izq;
    struct nodo *der;
    int val;
};

void inserta(struct nodo **raiz, int val)    {
    if (*raiz == NULL)   {
        *raiz = (struct nodo*)malloc(sizeof(struct nodo));
        (*raiz)->val = val;
        (*raiz)->izq = NULL;
        (*raiz)->der = NULL;
    }
    else if (val < (*raiz)->val)
        inserta(&((*raiz)->izq), val);
    else
        inserta(&((*raiz)->der), val);
}

void preorden(const struct nodo *raiz)  {
    if (raiz == NULL)
        return;
    pre[++idx] = raiz->val;
    preorden(raiz->izq);
    preorden(raiz->der);
}

int main()  {
    int n;
    scanf("%d", &n);
    struct nodo *raiz = NULL;
    while (n--) {
        int val;
        scanf("%d", &val);
        inserta(&raiz, val);
    }
    preorden(raiz);
    int m;
    scanf("%d", &m);
    while (m--) {
        int i;
        scanf("%d", &i);
        printf("%d\n", pre[i]);
    }
}
