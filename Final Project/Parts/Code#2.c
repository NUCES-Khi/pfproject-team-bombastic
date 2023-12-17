/*
Name: Syed Saif ur Rehman Shah
Roll Num: 23K-0032
Description: Displays the menu to search and add words and exit the program, with the function of search words.
*/
void menu() {
    system("cls");
    system("color 2");
    int mode;

    while (1) {
        system("cls");
        date();
        printf("\n  \t\t\t\t               DICTIONARY");
        printf("\n\n\n\t\t\t\t==========================================\n\n");
        printf("\n  		      _____               ____               _____ \n\n");
        printf("\n   	            1.SEARCH WORD.               2.ADD WORDS.                 3.EXIT.    ");

        printf("\n_______________________________________\n\n");

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
                    printf("\n               ____________________________\n");
                    printf("\n%-15s\t%-15s\t%-15s\t\t%-50s\n", "WORDS", "TYPE", "MEANING", "SENTENCE");
                    printf("               ____________________________\n");
                    printf("\n%-10s\t%15s\t%15s\t\t\t%s\n ", a[w].word, a[w].mean, a[w].posp, a[w].sent);
                    w++;
                }
            }
        }
        fclose(data);

        printf("\n\n               Search more words? (y/n): ");
    } while (getche() == 'y');
}
