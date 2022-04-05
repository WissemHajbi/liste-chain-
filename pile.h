/* Représentation physique */

#define n 100;

struct pile 
{
    int cle[n];
    int sommet;
};

/* Opération de création */

void creer_pile(struct pile);

/* Opeération de consultation */

unsigned vide(struct pile);
int dernier(struct pile);

/* Opération de modification */

void empiler(struct pile *,int info);
void depiler(struct pile *);
