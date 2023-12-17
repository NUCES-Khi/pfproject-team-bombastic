#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>

#define dict "dictionary.txt"
char response;
struct lib {
    char word[20], mean[50], posp[300], sent[300];
};

struct lib a[500];

FILE *data;
int n = 0;
int q = 0;

void search(void);
void new1(void);
void list(void);
void menu(void);
void deletew(void);
void mainpage(void);
int logscreen(void);
void title(void);
void date(void);

int main() {
    system("cls");
    mainpage();
    
    int login_attempts = 3;
    int successful_login = 0;

    while (login_attempts > 0) {
        successful_login = logscreen();

        if (successful_login == 0)
            break;

        login_attempts--;
    }

    if (successful_login == 1) {
        printf("Too many incorrect login attempts. Exiting program.");
        return 1;
    }

    menu();

    return 0;
}

void date() {
    time_t T = time(NULL);
    struct tm tm = *localtime(&T);
    printf("\t\t\t\t      YOU ARE USING DICTIONARY!!\n\n\n");
    printf("\t\t\t\t      Date:%02d/%02d/%04d & Time: %02d:%02d:%02d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
}

void title() {
  
}

void mainpage() {
    int process = 0;
    system("cls");
    system("color 3");
    date();
    printf("\n");
    printf("        			  -------------------------------\n");
    printf("\t\t\t\t          |OXFORD-DICTIONARY|\n");
    printf("         			  -------------------------------\n");
    printf("\n\n\n");
    printf("\t\t\t\t");
    printf("Prepared By    ");
    printf(":");
    printf("  Saif Ur Rehman, Rohan Serwer & Sajid Ali ");
    printf ("");
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Project");
    printf(": ");
    printf("Accessible Dictionary In C");
    printf("\n\n");
    printf("\t\t\t\t");
    printf("\n\n");
    printf("\t\t\t\t    Press Enter to continue...");
    printf("\n\n");
    getchar();
    printf("\t\t\t\t      Loading");

    for (process = 0; process < 5; process++) {
        delay(50);
        printf(".");
    }
}

void delay(unsigned int mseconds) {
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int logscreen() {
    int true = 1;
    int try = 0;

    do {
        system("cls");
        title();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Press any key to Login...");
        getchar();
        system("cls");

        if (try == 0) {
            system("cls");
            date();
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t");
            printf("Enter Password: ");
        } else {
            system("cls");
            date();
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t");
            printf("Incorrect Password!! Press any key to Login Again...");
            getchar();
            system("cls");
            date();
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t");
            printf("Enter Password: ");
        }

        char pass[20];
        scanf("%s", pass);

        if (strcmp(pass, "password") == 0) {
            system("cls");
            return 0;
        } else {
            system("cls");
            try = try + 1;
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t");
            printf("No. of attempts remain: %d", 5 - try);
            getchar();

            if (try >= 5) {
                printf("\t\t\t\t\t\t");
                printf("\n");
                printf("\t\t\t\t");
                printf("You have tried too many times, come back later!! ");
                getchar();
                exit(NULL);
            }
        }
    } while (true == 1);
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
        printf("\n  		      ______________               ___________               _____________ \n\n");
        printf("\n   	            1.SEARCH WORD.               2.ADD WORDS.                 3.EXIT.    ");

        printf("\n___________________________________________________________________________________________________________________\n\n");

        printf("\n\n               ENTER ONE OF ABOVE OPTION NUMBER(e.g 1 or 2 upto 4): ");
        scanf("%d", &mode);

        switch (mode) {
            case 1:
                search();
                break;
            case 2:
                new1();
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("\n               Choose only from options 1 to 4.");
        }
    }
}

void search() {
    system("cls");
    int w = 0;
    char search[20];
    date();

    do {
        getchar();
        printf("\n\n               Enter word to search (in capitalised format e.g., Water - enter first letter in uppercase): ");
        gets(search);

        data = fopen(dict, "r");
        if (data == NULL) {
            printf("               File does not exist.");
        } else {
            while (fscanf(data, "%s\t%[^\n]s\t%[^\n]s\t%[^\n]s", a[w].word, a[w].mean, a[w].posp, a[w].sent) != EOF) {
                if (strcmp(a[w].word, search) == 0) {
                    printf("\n               ________________________________________________________________________________\n");
                    printf("\n%-15s\t%-15s\t%-15s\t\t%-50s\n", "WORDS", "TYPE", "MEANING", "SENTENCE");
                    printf("               ________________________________________________________________________________\n");
                    printf("\n%-10s\t%15s\t%15s\t\t\t%s\n ", a[w].word, a[w].mean, a[w].posp, a[w].sent);
                    w++;
                }
            }
        }
        fclose(data);

        printf("\n\n               Search more words? (y/n): ");
    } while (getche() == 'y');
}

void new1() {
    system("cls");
    char ch;
    date();
    data = fopen(dict, "a");

    if (data == NULL) {
        printf("               File does not exist.");
    } else {
        do {
            getchar();
            printf("\n\n               Enter word: ");
            gets(a[n].word);

            printf("\n               Enter meaning: ");
            gets(a[n].mean);

            printf("\n               Enter part of speech: ");
            gets(a[n].posp);

            printf("\n               Enter sentence: ");
            gets(a[n].sent);

            fprintf(data, "%s\t%s\t%s\t%s\n", a[n].word, a[n].mean, a[n].posp, a[n].sent);
            n++;

            printf("\n               Add more words? (y/n): ");
            scanf(" %c", &ch);
        } while (ch == 'y');

        fclose(data);
    }
}

void list() {
    data = fopen(dict, "r");
    date();

    if (data == NULL) {
        printf("               File does not exist.");
    } else {
        printf("\n               ________________________________________________________________________________\n");
        printf("\n%-15s %-15s%-15s\t\t%-50s\n", "WORDS", "TYPE", "MEANING", "SENTENCE");
        printf("               ________________________________________________________________________________\n");

        while (fscanf(data, "%s\t%[^\n]s\t%[^\n]s\t%[^\n]s", a[q].word, a[q].mean, a[q].posp, a[q].sent) != EOF) {
            printf("\n%-10s\t%15s\t%15s\t\t\t%s\n ", a[q].word, a[q].mean, a[q].posp, a[q].sent);
            q++;
        }
    }

    fclose(data);
    printf("\n               Press any key for the main menu.               ");
    getch();
}


