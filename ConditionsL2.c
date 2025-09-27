#include <stdio.h>
#include <stdbool.h>

int main() {
    /*
    // Challenge 1 : Évaluation d'un Prêt
    int revenu_annuel, score_credit, duree_pret;
    printf("donner revenu_annuel, score_credit, duree_pret: ");
    scanf("%d%d%d", &revenu_annuel, &score_credit, &duree_pret);
    if(revenu_annuel >= 30000 && score_credit >= 700 && duree_pret <= 10) {
        printf("Éligible\n");
    } else if(revenu_annuel >= 30000 && score_credit >= 650 && duree_pret <= 15) {
        printf("Éligible avec conditions\n");
    } else {
        printf("Non éligible\n");
    }
    
    // Challenge 2 : Calcul de Prime d'Assurance Auto
    int age_conducteur, type_voiture, nombre_daccidents;
    double prime;

    // Saisie des informations
    printf("Donner Âge du conducteur (en années): ");
    scanf("%d", &age_conducteur);

    printf("Donner Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale): ");
    scanf("%d", &type_voiture);

    printf("Donner Nombre d'accidents au cours des 5 dernières années: ");
    scanf("%d", &nombre_daccidents);

    // Vérification des entrées
    if(age_conducteur < 18 || type_voiture < 1 || type_voiture > 3 || nombre_daccidents < 0) {
        printf("Erreur : Veuillez entrer des valeurs valides.\n");
        return 1;
    }
    
    printf("Donner Prime de base: ");
    scanf("%lf", &prime);
    
    // Calcul de la prime en fonction de l'âge
    if (age_conducteur < 25) {
        prime *= 1.5;
    } else if (age_conducteur > 65) {
        prime *= 1.2;
    }
    
    // Ajustement en fonction du type de voiture
    switch (type_voiture) {
        case 1: // Sportive
            prime *= 2;
            break;
        case 2: // Utilitaire
            prime *= 1.2;
            break;
        case 3: // Familiale
            prime *= 1.1;
            break;
    }
    
    // Ajustement en fonction du nombre d'accidents
    if(nombre_daccidents > 1) {
        prime *= 1.3;
    }
    
    // Affichage du résultat
    printf("La prime d'assurance est : %.2f euros\n", prime);
    
    // Challenge 3 : Gestion des Congés
    int total_jours_conges, jours_conges_utilises, statut_lemploye;
    double jours_restants;
    total_jours_conges = 90;
    jours_conges_utilises = 60;
    statut_lemploye = 0;
    if (total_jours_conges < 0 || jours_conges_utilises < 0 || (statut_lemploye != 0 && statut_lemploye != 1)) {
        printf("Erreur : Veuillez entrer des valeurs valides.\n");
        return 1;
    }
    
    switch (statut_lemploye) {
        case 1: // Temps plein
        jours_restants = total_jours_conges - jours_conges_utilises;
        break;
        case 0: // Temps partiel
        jours_restants = (total_jours_conges / 2) - jours_conges_utilises;
        break;
    }
    
    if (jours_restants < 0) {
        printf("Alerte : Les jours de congés utilisés dépassent les jours accordés !\n");
    } else {    
        printf("les jours de congés restants sont: %.2f\n", &jours_restants);
    }
    
    // Challenge 4 : Évaluation de Performance d'Employé
    int score_performance, anciennete, recompenses_recues;
    score_performance = 60; anciennete = 3; recompenses_recues = 2;
    // Validation des entrées
    if (score_performance < 0 || score_performance > 100 || anciennete < 0 || recompenses_recues < 0 || recompenses_recues > 2) {
        printf("Erreur : Veuillez entrer des valeurs valides.\n");
        return 1;
    }

    // double bonus = 0.0;
    
    // le évaluation de la performance d'un employé
    if (score_performance >= 90 && anciennete >= 5) {
        printf("Excellente\n");
    } else if (score_performance >= 75 && anciennete >= 3) {
        printf("Bonne\n");
    } else if (score_performance >= 50 && anciennete < 3) {
        printf("Satisfaisante\n");
    } else { //  if (score_performance < 50)
    printf("Insuffisante\n");
}

switch (recompenses_recues) {
    case 1:
    score_performance *= 1.1;
    break;
        case 2:
        score_performance *= 1.2;
        break;
    }
    
    // Challenge 5 : Planification de Voyage
    double budget;
    int Destination, nombre_personnes;
    if (budget >= 1000) {
        printf("Le recommandation sont: Voyage haut de gamme\n");
    } else if (budget >= 500) {
        printf("Le recommandation sont: Voyage moyen\n");
    } else {
        printf("Le recommandation sont: Voyage économique\n");
    }
    
    if (budget >= 1000 && nombre_personnes > 2) {
        printf("Le destination recommandée sont: Plage\n");
    } else if(budget >= 500 && nombre_personnes <= 2) {
        printf("Le destination recommandée sont: Montagne\n");
    } else {
        printf("Le destination recommandée sont: Ville\n");
    }
    */

    // Challenge 6 : Calcul de la Facture d'Électricité
    // double consommation_delectricite;
    // int type_dutilisateur, type_contrat;
    // if () {

    // }


    return 0;
}