#include <stdio.h>
#include <stdbool.h>

int main() {
    /*
    // Challenge 1 : Initialisation et Affichage
    int T[] = {1, 2, 3, 4, 5};
    printf("%d\n", T[0]);
    printf("%d\n", T[1]);
    printf("%d\n", T[2]);
    printf("%d\n", T[3]);
    printf("%d\n", T[4]);
    
    // Challenge 2 : Saisie et Affichage des Éléments
    int nombreDlements, i;
    
    printf("Donner le nombre d'éléments d'un tableau: ");
    scanf("%d", &nombreDlements);
    
    int T[nombreDlements];
    
    for (i = 0; i < nombreDlements; i++) {
        printf("saisir le élément %d: ", i + 1);
        scanf("%d", &T[i]);
    }
    
    for (i = 0; i < nombreDlements; i++) {
        printf("le élément de incide %d du tableau est: %d\n", i + 1, T[i]);
    }
    
    // Challenge 3 : Somme des Éléments
    int nombreDlements, i, somme;
    
    printf("Donner le nombre d'éléments d'un tableau: ");
    scanf("%d", &nombreDlements);
    
    int tableauSomme[nombreDlements];
    somme = 0;

    for (i = 0; i < nombreDlements; i++) {
        printf("saisir le élément %d: ", i + 1);
        scanf("%d", &tableauSomme[i]);
        // somme += tableauSomme[i]; 
    }

    for (i = 0; i < nombreDlements; i++) {
        somme += tableauSomme[i];
    }
    
    printf("la somme des éléments d'un tableau d'entiers est: %d\n", somme);
    
    // Challenge 4 : Trouver le Maximum
    int nombreDlements, i, maximum;
    
    printf("Donner le nombre d'éléments d'un tableau: ");
    scanf("%d", &nombreDlements);
    
    int tableauMaximum[nombreDlements];

    for (i = 0; i < nombreDlements; i++) {
        printf("saisir le élément %d: ", i + 1);
        scanf("%d", &tableauMaximum[i]);
    }
    
    maximum = tableauMaximum[0];
    
    for (i = 1; i < nombreDlements; i++) {
        if (tableauMaximum[i] > maximum) {
            maximum = tableauMaximum[i];
        }
    }
    
    printf("le plus grand élément dans un tableau d'entiers est: %d\n", maximum);
    
    // Challenge 5 : Trouver le Minimum
    int nombreDlements, i, minimum;
    
    printf("Donner  le nombre d'éléments d'un tableau: ");
    scanf("%d", &nombreDlements);
    
    int tableauMinimum[nombreDlements];
    
    for (i = 0; i < nombreDlements; i++) {
        printf("saisir le élément %d: ", i + 1);
        scanf("%d", &tableauMinimum[i]);
    }
    
    maximum = tableauMinimum[0];
    
    for (i = 1; i < nombreDlements; i++) {
        if (tableauMinimum[i] < minimum) {
            minimum = tableauMinimum[i];
        }
    }
    
    printf("le plus grand élément dans un tableau d'entiers est: %d\n", minimum);
    
    // Challenge 6 : Multiplication des Éléments
    int nombreDlements, i, facteurMultiplication;
    
    printf("Donner le nombre d'éléments d'un tableau: ");
    scanf("%d", &nombreDlements);
    
    int tableauMultiplication[nombreDlements];
    
    for (i = 0; i < nombreDlements; i++) {
        printf("saisir le élément %d: ", i + 1);
        scanf("%d", &tableauMultiplication[i]);
    }
    
    printf("Donner le facteur de multiplication: ");
    scanf("%d", &facteurMultiplication);
    
    for (i = 0; i < nombreDlements; i++) {
        tableauMultiplication[i] *= facteurMultiplication;
    }
    
    printf("nouvele element de tableau est: { ");
    for (i = 0; i < nombreDlements; i++) {
        printf("%d ", tableauMultiplication[i]);
    }
    
    printf("}\n");
    
    // Challenge 7 : Tableau en Ordre Croissant moraja3a (insert sort - buble sort - selection sort)
    // Challenge 8 : Copie d'un Tableau (easy)
    // Challenge 9 : Inversion d'un Tableau
    int n, i;
    
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);
    
    int tab[n], tabInvers[n];
    
    printf("Entrez %d elements :\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    
    for (i = 0; i < n; i++) {
        tabInvers[i] = tab[n - 1 - i];
    }
    
    
    printf("\nTableau inverse : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tabInvers[i]);
    }
    
    printf("\n");
    
    // Challenge 10 : Rechercher un Élément
    int n, i, nombreSearch;
    bool isPresent = false;
    
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);
    
    int tabRechercherElement[n];
    
    printf("Entrez %d elements :\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tabRechercherElement[i]);
    }
    
    printf("Entrez lélément à rechercher : ");
    scanf("%d", &nombreSearch);
    
    for (i = 0; i < n; i++) {
        if (nombreSearch == tabRechercherElement[i]) {
            isPresent = true;
            break;
        }
    }
    
    if (isPresent) {
        printf("lélément %d est présent", nombreSearch);
    } else {
        printf("lélément %d est non présent", nombreSearch);
    }
    
    // Challenge 11 : Remplacer un Élément
    int i, remplacer, nouvelle;
    int tableauRemplacer[] = {1, 2, 3, 4, 5, 2, 3, 2, 1, 7, 7};
    
    printf("Entrez la valeur à remplacer : ");
    scanf("%d", &remplacer);
    
    printf("Entrez la nouvelle valeur : ");
    scanf("%d", &nouvelle);
    
    for (i = 0; i < 11; i++) {
        if (remplacer == tableauRemplacer[i]) {
            tableauRemplacer[i] = nouvelle;
        }
    }
    
    for (i = 0; i < 11; i++) {
        if (remplacer == tableauRemplacer[i]) {
            tableauRemplacer[i] = nouvelle;
        }
    }
    
    printf("tableau Remplacer = { ");
    for (i = 0; i < 11; i++) {
        printf("%d ", tableauRemplacer[i]);
    }
    
    printf("}");
    */

    // Challenge 12 : Afficher les Éléments Paire (easy)
    // Challenge 13 : Afficher les Éléments Impairs (easy)
    // Challenge 14 : Calculer la Moyenne (easy)
    // Challenge 15 : Fusion de Deux Tableaux
    int i, nombreDelementT1, nombreDelementT2,  elementsdeuxTableaux;
    printf("Entrez la nombre d'éléments pour tableau 1 : ");
    scanf("%d", &nombreDelementT1); // + repmlissage tableau
    
    printf("Entrez la nombre d'éléments pour tableau 2 : ");
    scanf("%d", &nombreDelementT2); // + repmlissage tableau
    
    printf("Entrez la nombre  de élément de deux tableaux : ");
    scanf("%d", &elementsdeuxTableaux);

    int tab1[nombreDelementT1];
    int tab2[nombreDelementT2];
    int tabdeux[elementsdeuxTableaux];

    for (i = 0; i < nombreDelementT1; i++){
        printf("donner element %d: ", i + 1);
        scanf("%d", &tab1[i]);
    }
    

    for (i = 0; i < nombreDelementT1; i++) {
        tabdeux[i] = tab1[i];
    }

    for (i = nombreDelementT1; i < elementsdeuxTableaux; i++) {
        tabdeux[i] = tab2[i - 3];
    }
    
    printf("le tableau fusionné = { ");
    for (i = 0; i < elementsdeuxTableaux; i++) {
        printf("%d ", tabdeux[i]);
    }
    
    printf("}");
    

    return 0;
}
