// Group members: Rohan Serwer, Saif Ur Rehman, Sajid Ali
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define dict "dictionary.txt"

struct lib {
    char word[20], mean[50], posp[300], sent[300];
};

struct lib a[500];

FILE *data;

void search(void);
void menu(void);
void date(void);

int main() {
    system("cls");
    menu();

    return 0;
}

void date() {
    time_t T = time(NULL);
    struct tm tm = *localtime(&T);
    printf("\t\t\t\t      YOU ARE USING DICTIONARY!!\n\n\n");
    printf("\t\t\t\t      Date:%02d/%02d/%04d & Time: %02d:%02d:%02d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
}

void menu() {
    system("cls");
    system("color 2");
    int mode;

    while (1) {
        system("cls");
        date();
        printf("\n  \t\t\t\t               DICTIONARY");
        printf("\n\n\n\t\t\t\t==========================================\n\n");
        printf("\n               1.SEARCH WORD.               2.EXIT.");

        printf("\n___________________________________________________________________________________________________________________\n\n");

        printf("\n\n               ENTER ONE OF ABOVE OPTION NUMBER (e.g., 1 or 2): ");
        scanf("%d", &mode);

        switch (mode) {
            case 1:
                search();
                break;
            case 2:
                exit(0);
                break;
            default:
                printf("\n               Choose only from options 1 to 2.");
        }
    }
}

void search() {
    system("cls");
    char search[20];
    date();

    do {
        getchar();  // Consume the newline character
        printf("\n\n               Enter word to search (in capitalized format e.g., Water - enter first letter in uppercase): ");
        gets(search);

        data = fopen(dict, "r");
        if (data == NULL) {
            printf("               File does not exist.");
        } else {
            int found = 0;
            while (fscanf(data, "%s\t%[^\n]s\t%[^\n]s\t%[^\n]s", a[0].word, a[0].mean, a[0].posp, a[0].sent) != EOF) {
                if (strcmp(a[0].word, search) == 0) {
                    found = 1;
                    printf("\n               ________________________________________________________________________________\n");
                    printf("\n%-15s\t%-15s\t%-15s\t\t%-50s\n", "WORDS", "TYPE", "MEANING", "SENTENCE");
                    printf("               ________________________________________________________________________________\n");
                    printf("\n%-10s\t%15s\t%15s\t\t\t%s\n ", a[0].word, a[0].posp, a[0].mean, a[0].sent);
                    break;
                }
            }
            if (!found) {
                printf("\n               Word not found in the dictionary.");
            }
        }
        fclose(data);

        printf("\n\n               Search more words? (y/n): ");
    } while (getchar() == 'y');
}
