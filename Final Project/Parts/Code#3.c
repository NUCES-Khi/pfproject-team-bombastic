/*
Name: Rohan Serwer
Roll Num: 22K-4009
Description: Allows the user to add new words to the dictionary display its contents 
*/

void new1() {	//Allows the user to add new words
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

void list() {		//Displays the contents of the dictionary.
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


