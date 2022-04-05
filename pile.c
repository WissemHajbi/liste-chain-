#include "pile.h"
#include <alloc.h>
#include <assert.h>

struct pile 
{
    int cle[n];
    int sommet;
};

static struct pile *sommet;

void cree_pile(struct pile *p)
{
    sommet = NULL;
}

unsigned vide(struct pile p)
{
    return (p == NULL);
}

int dernier(struct pile p)
{
    assert(!vide(*p));
    return p.cle;
}

void empiler(struct pile *p, int info)
{
    struct pile *q;
    q = (struct pile *)malloc(size_of(struct pile));
    q->cle = info;
    q->suivant = sommet;
    sommet = q;
}

void depiler(struct pile *p)
{
    assert(!vide(*p));
    struct pile *g;
    g = (struct pile *)malloc(size_of(struct pile));
    g = sommet;
    sommet = sommet->suivant;
    free(g);
}

void main()
{
    /* tester ici */
}