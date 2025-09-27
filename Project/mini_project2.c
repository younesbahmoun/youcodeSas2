#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define nbrContactMax 1000
#define longueurChaineMax 100
bool isKayn = false;
int i, j, nbreContactDisponible = 0;

struct Contact {
    char nom[longueurChaineMax];
    char numeroTelephone[longueurChaineMax];
    char adresseEmail[longueurChaineMax];
};

int menu () {
    int choix;
    printf("\n");
    printf("=====================MENU=====================\n");
    printf("1. Ajouter un Contact\n");
    printf("2. Modifier un Contact\n");
    printf("3. Supprimer un Contact\n");
    printf("4. Afficher Tous les Contacts Disponibles\n");
    printf("5. Rechercher un Contact\n");
    printf("6. Afficher le Nombre Total des Contacts en Stock\n");
    printf("7. Quitter\n");
    printf("Votre choix: ");
    scanf("%d", &choix);
    printf("\n");
    return choix;
}

bool emailValide(char email[longueurChaineMax]) {
    if (strlen(email) >= 10 ) {
    // exemple 6 min and @ : 15 caractere minimum totale
    // 9alab 3la contains()
        for (i = 3; email[i] != '\0'; i++) {
            if (email[i] == '@')
                return true;
        }
    }
    return false;  
}

void ajouterContact (struct Contact contact[], int lafinTab) {

    char email[longueurChaineMax];

    printf("Donner les details de Contact:\n");
    printf("nom : ");
    scanf("%s", contact[lafinTab].nom);
    // gets(titre[lafinTab]);
    printf("tele:");
    // gets(auteur[lafinTab]);
    scanf("%s", contact[lafinTab].numeroTelephone);
    
    do {
        printf("donner email vide (exemmple@domaine.(com, net, ma...)): ");
        scanf("%s", email);
        // printf("Adresse e-mail: %s\n", C[i].adresseEmail);
    } while (!emailValide(email));

    // T1[lafinTab].adresseEmail = email;
    strcpy(contact[lafinTab].adresseEmail, email);
    nbreContactDisponible++;
}

void affichage (struct Contact contact[], int nombreContact) {
    for (i = 0; i < nombreContact; i++) {
        printf("les details de Contact %d:\n",i + 1);
        printf("nom: %s\n", contact[i].nom);
        printf("Numéro de téléphone: %s\n", contact[i].numeroTelephone);  
        printf("Adresse e-mail : %s\n", contact[i].adresseEmail);  
        printf("\n");
    }
}

void affichageOneContact (struct Contact contact[], int indiceContact) {
    printf("les details de Contact %d:\n",indiceContact + 1);
    printf("nom: %s\n", contact[indiceContact].nom);
    printf("Numéro de téléphone: %s\n", contact[indiceContact].numeroTelephone);  
    printf("Adresse e-mail : %s\n", contact[indiceContact].adresseEmail);  
    printf("\n");
}

bool contactIsVide() {
    if (nbreContactDisponible == 0) {
        printf("La Stock est vide, choisissez la première option!\n");
        return true;
    }
    return false;
}

// return incide(contact) fin kayn nom li ki 9aleb 3lih user
int serachContact (struct Contact contact[], char nomSearch[]) {
    for (i = 0; i < nbreContactDisponible; i++) {
        if (strcmp(strlwr(contact[i].nom), strlwr(nomSearch)) == 0)   
            return i;
    }
    return -1;
}

void supprimerContact (struct Contact conatct[], int indiceContact) { 
    for (i = indiceContact; i < nbreContactDisponible - 1; i++) {
        conatct[i] = conatct[i + 1];
    }
    printf("Cantact %d a été supprimé avec succès.\n", indiceContact + 1);
    nbreContactDisponible--;
}

void modifierContact(struct Contact contact[], char nomClient[longueurChaineMax], int indiceContact) {
    char newEmail[longueurChaineMax], newTele[longueurChaineMax];
    printf("donner la nouvele telephone: ");
    scanf("%s", newTele);
    printf("donner la nouvele email: ");
    scanf("%s", newEmail);
    strcpy(contact[indiceContact].adresseEmail, newEmail);
    strcpy(contact[indiceContact].numeroTelephone, newTele);
}

int main() {
    
    struct Contact contact[nbrContactMax];
    char isHbas;
    int choix;
    do {
        choix = menu();
        switch (choix) {
            case 1:
                ajouterContact(contact, nbreContactDisponible);
                break;
            case 2:
                if (!contactIsVide()) {
                    char nomClient[longueurChaineMax];
                    printf("donner le nom: ");
                    scanf("%s", nomClient);
                    int indiceContact = serachContact(contact, nomClient);
                    if (indiceContact == -1) {
                        printf("Désolé, le nom n'existe pas dans le contact\n");
                    } else {
                        modifierContact(contact, nomClient, indiceContact);
                    }
                }
                break;
            case 3: 
                if (!contactIsVide()) {
                    char nomClient[longueurChaineMax];
                    printf("donner le nom: ");
                    scanf("%s", nomClient);
                    printf("\n");
                    int indiceContact = serachContact(contact, nomClient);
                    if (indiceContact == -1) {
                        printf("Désolé, le nom n'existe pas dans le contact\n");
                    } else {
                        supprimerContact(contact, indiceContact);
                    }
                }
                break;
            case 4:
                if (!contactIsVide()) {
                    affichage(contact, nbreContactDisponible);
                }
                break;
            case 5:
                if (!contactIsVide()) {
                    char nomClient[longueurChaineMax];
                    printf("donner le nom: ");
                    scanf("%s", nomClient);
                    printf("\n");
                    int indiceContact = serachContact(contact, nomClient);
                    if (indiceContact == -1) {
                        printf("Désolé, le nom n'existe pas dans le contact\n");
                    } else {
                        affichageOneContact(contact, indiceContact);
                    }
                }
                break;
            case 6:
                if (!contactIsVide()) {
                    printf("le Nombre Total des Contacts en Stock est: %d\n", nbreContactDisponible);
                }
                break;
            // default:
            //     printf("Le numéro que vous avez saisi n'existe pas dans les options, réessayez.\n");
            //     break;
        }
    } while (choix != 7);
    
    return 0;
}