#include <stdio.h>

struct date {
    int jour;
    int mois;
    int annee;
};

void affiche_date(struct date date){
    printf("%d/%d/%d\n", date.jour, date.mois, date.annee);
}

void increm_date(struct date* date){
    date->jour ++;
    if (date->jour > 30){
        date->jour = 1;
        date->mois ++;
    }
    if (date->mois > 12){
        date->mois = 1;
        date->annee ++;
    }
    printf("%d/%d/%d\n", date->jour, date->mois, date->annee);
}

int main(void){   
    struct date date_jour = {2, 9, 2004};
    affiche_date(date_jour);
    increm_date(&date_jour);
    return 0;
}