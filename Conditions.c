#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
    /*
    // Challenge 1 : Paire ou Impaire
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);

    if (nombre % 2 == 0) {
        printf("%d est pair.\n", nombre);
    } else {
        printf("%d est impair.\n", nombre);
    }

    // Challenge 2 : Voyelle ou Non
    printf("Entrez un caractere: ");
    scanf(" %c", &c);

    switch (c) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        case 'y':
        case 'Y': // ...
            printf("%c est une voyelle.\n", c);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", c);
    }

    // Challenge 3 : Somme de Deux Valeurs
    int a, b, somme;
    somme = a + b;

    if (a == b) {
        printf("Resultat = %d\n", 3 * somme);
    } else {
        printf("Resultat = %d\n", somme);
    }

    // Challenge 4 : Equation du Deuxième Degré
    int a, b, c, delta;
    float x1, x2;

    delta = pow(b,2) - 4 * a * c;
    if (delta > 0) {
        x1 = (-b - sqrt(delta)) / 2 * a;
        x2 = (-b + sqrt(delta)) / 2 * a;
        printf("les solutions possibles d’une équation du deuxième degré est: %.2f et %.2f", x1, x2);
    } else if (delta < 0) {
        printf("Pas de solution reelle (les solutions sont complexes)");
    } else {
        x1 = -b / (2 * a);
        printf("les solutions possibles d’une équation du deuxième degré est: %.2f", x1);
    }
    
    // Challenge 5 : Conversion d'Année
    int choix;
    int annee;
    
    // menu
    printf("\n=== Conversion d'une année ===\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);

    printf("Entrez le nombre d'années : ");
    scanf("%d", &annee);
    
    switch (choix) {
        case 1:
            printf("%d année = %d mois\n", annee, annee * 12);
            break;
        case 2:
            printf("%d année = %d jours\n", annee, annee * 365);
            break;
        case 3:
            printf("%d année = %d heures\n", annee, annee * 365 * 24);
            break;
        case 4:
            printf("%d année = %d minutes\n", annee, annee * 365 * 24 * 60);
            break;
        case 5:
            printf("%d année = %d secondes\n", annee, annee * 365 * 24 * 60 * 60);
            break;
        default:
            printf("Choix invalide!\n");
    }
    
    // Challenge 6 : Positif, Négatif ou Nul
    int nombre;
    
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    
    if (nombre > 0) {
        printf("%d est un nombre positif.\n", nombre);
    } 
    else if (nombre < 0) {
        printf("%d est un nombre negatif.\n", nombre);
    } else {
        printf("%d est un nombre Nul.\n", nombre);
    }
    
    
    // Challenge 7 : Alphabet Majuscule (moraja3a ou hfada)
    char ch;
    printf("Entrez un caractere : ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) { // ASCII
        printf("%c est une lettre majuscule.\n", ch);
    } else {
        printf("%c n'est pas une lettre majuscule.\n", ch);
    }
    
    // Challenge 8 : Mention Obtenue
    float moyenne;
    
    printf("Entrez la moyenne de l'eleve : ");
    scanf("%f", &moyenne);
    
    if (moyenne < 0 || moyenne > 20) {
        printf("Erreur : la moyenne doit etre entre 0 et 20.\n");
    } else if (moyenne < 10) {
        printf("Mention : redoublant\n");
    } else if (moyenne < 12) {
        printf("Mention : Passable\n");
    } else if (moyenne < 14) {
        printf("Mention : Assez bien\n");
    } else if (moyenne < 16) {
        printf("Mention : Bien\n");
    } else if (moyenne < 18) {
        printf("Mention : Tres bien\n");
    } else if (moyenne < 20) {
        printf("Mention : Excellent\n");
    }
    
    // Challenge 9 : Vérification d'Alphabet  (moraja3a ou hfada)
    char ch;
    printf("Entrez un caractere : ");
    scanf("%c", &ch);
    
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c est un alphabet.\n", ch);
        
        if (ch >= 'A' && ch <= 'Z') {
            printf("C'est une lettre majuscule.\n");
        } else {
            printf("C'est une lettre minuscule.\n");
        }
    } else {
        printf("%c n'est pas un alphabet.\n", ch);
    }
    
    // Challenge 10 : Formatage de la Date
    int jour, mois, annee;
    
    printf("Entrez une date (jj/mm/aaaa) : ");
    scanf("%d%d%d", &jour, &mois, &annee);
    printf("%02d-", jour); // jour = 5 --> 05
    
    switch (mois) {
        case 1:  printf("Janvier");   break;
        case 2:  printf("Fevrier");   break;
        case 3:  printf("Mars");      break;
        case 4:  printf("Avril");     break;
        case 5:  printf("Mai");       break;
        case 6:  printf("Juin");      break;
        case 7:  printf("Juillet");   break;
        case 8:  printf("Aout");      break;
        case 9:  printf("Septembre"); break;
        case 10: printf("Octobre");   break;
        case 11: printf("Novembre");  break;
        case 12: printf("Decembre");  break;
        default: printf("Mois invalide");
    }
    
    printf("-%d\n", annee);
    
    // Challenge 11 : Jour de la Semaine (moraja3a hfada)
    int n;
    
    srand(time(NULL));
    
    n = rand() % 7 + 1;
    
    switch (n) {
        case 1: printf("Lundi\n"); break;
        case 2: printf("Mardi\n"); break;
        case 3: printf("Mercredi\n"); break;
        case 4: printf("Jeudi\n"); break;
        case 5: printf("Vendredi\n"); break;
        case 6: printf("Samedi\n"); break;
        case 7: printf("Dimanche\n"); break;
    }
    */

    // Challenge 12 : Comparaison d'Instants
    

    // Challenge 13 : Point sur un Segment
    
    return 0;
}