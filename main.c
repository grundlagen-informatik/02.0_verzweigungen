#include <stdio.h>

// Funktionsprototyp für BMI-Aufgabe
void bmi();

// Funktionsprototyp für Getränke-Automat-Aufgabe
void automat();

// Am Hauptteil muss nichts geändert werden. Der Code kann in die zwei Funktionen geschrieben werden.
int main() {
    int aufgabe;

    printf("Fuer BMI-Aufgabe druecke 1 und fuer Getraenke-Automat druecke 2:\n");
    scanf("%d", &aufgabe);

    if (aufgabe == 1) {
        bmi();
    } else if (aufgabe == 2) {
        automat();
    } else {
        printf("Ungueltige Eingabe, Programm muss neu gestartet werden.\n");
    }
    return 0;
}

void bmi() {

        float Gewicht; float Koerpergroesse; float bmi;

        printf("\nDies ist eine Applikation um Ihren Body Mass Index zu bestimmen.\n\n" "Geben Sie zuerst Ihre Koerpergroesse in Meter an:\n");
        scanf("%f", &Koerpergroesse);
        printf("Danke vielmals, nun duerfen Sie Ihr Koerpergewicht in Kilogramm angeben: \n");
        scanf("%f", &Gewicht);


        bmi = Gewicht / ((Koerpergroesse * Koerpergroesse));
        printf("Ihr BMI betraegt %f.", bmi);


        if (bmi < 18.5) {
            printf("Ihr BMI ist unter dem Normalwert, konsultieren Sie einen Arzt.\n");
        }
        else if (bmi >= 18.5 && bmi < 24.9) {
            printf("Ihr BMI befindet sich im Normalbereich, essen Sie ein Snickers.\n");
        }
        else if (bmi >= 24.9)  {
            printf("Ihr BMI ist ueber dem Normalbereich, konsultieren Sie einen Fitnesstrainer.\n");

    }

}

void automat() {
int zahl;
printf("Choose your refrigerate \n1) Water (0.50EUR)\n2) Limonade (1.00EUR)\n3) Beer (2.00EUR)\nenter 1, 2 or 3:\n");
    scanf( "%d", &zahl);
if (zahl==1) {
    printf("Water, please insert 0.50EUR - no change!");
}
    else if (zahl ==2 ) {
        printf("Limonade, please insert 1,00EUR - no change");
    }
    else if (zahl ==3) {
        printf("Beer, please insert 1.00EUR - no change");
    }
    else {
        printf("selection not valid");
    }
}