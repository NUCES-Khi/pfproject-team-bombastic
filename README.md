[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/j0WbCUcA)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=13059240&assignment_repo_type=AssignmentRepo)

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void date() {
    time_t T = time(NULL);
    struct tm tm = *localtime(&T);
    printf("\t\t\t\t      YOU ARE USING DICTIONARY!!\n\n\n");
    printf("\t\t\t\t      Date:%02d/%02d/%04d & Time: %02d:%02d:%02d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
}

void mainpage() {
    int process = 0;
    system("cls");
    system("color 3");
    date();
    printf("\n");
    printf("\t\t\t\t     -------------------------------\n");
    printf("\t\t\t\t          |OXFORD-DICTIONARY|\n");
    printf("\t\t\t\t     -------------------------------\n");
    printf("\n\n\n");
    printf("\t\t\t\t");
    printf("Prepared By    ");
    printf(":");
    printf("  Rohan Serwer, Saif Ur Rehman, Sajid Ali");
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Project   ");
    printf(":");
    printf("Audio Mini dictionary");
    printf("\n\n");
    printf("\t\t\t\t");
    printf("\n\n");
    printf("\t\t\t\t    Press Enter to continue...");
    printf("\n\n");
    getchar();
    printf("\t\t\t\t      Loading");

    for (process = 0; process < 5; process++) {
        Sleep(50);  // Use Sleep() instead of delay()
        printf(".");
    }
}

int logscreen() {
int isTrue = 1, tryCount = 0;
    do {
        system("cls");
        date();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Enter Password: ");
        char pass[10], ch;
        int i = 0;
       while ((ch = getchar()) != '\n' && ch != EOF) {
            pass[i] = ch;
            i++;
            printf("*");
        }
        pass[i] = '\0';
        if (strcmp(pass, "admin123") == 0) {
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t");
            printf("Access Granted");
            printf("\n\n");
            printf("\t\t\t\t");
            printf("   Press Enter to Continue...");
            getchar();
            system("cls");
            getchar();
        isTrue = 0;
        } else {
            system("cls");
          tryCount++;

            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t");
            printf("No. of attempts remain: %d\n", 5 -  tryCount);
            getchar();
            if ( tryCount >= 5) {
                printf("\t\t\t\t\t\t");
                printf("\n");
                printf("\t\t\t\t");
                printf("   You have tried too many times, come back later!! ");
                getchar();
                exit(0);
            }
        }
    } while (true == 1);
    return 0;
}

int main() {
    system("cls");
    mainpage();
    logscreen();
    return 0;
}
