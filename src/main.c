//
// Created by tearion on 25.03.2026.
//
#include <stdio.h>
#include "../include/menu_item.h"

/*
 * Prints the header text.
 */
void printHeader(void) {
    printf("Tiny-c-menu started...\n");
}

/*
 * Prints the menu structure with all items
 */
void printMenu(int id) {

    MenuItem menu[] = {
        {1, "1) Start"},
        {2, "2) Options"},
        {3, "3) Quit"}
    };

// Print the header with the options
  for (int i = 0; i < sizeof(menu) / sizeof(MenuItem); i++) {
    printf("%s\n", menu[i].text);
  }
    printf("\n");

    if (id == 1) {
        printf(">Start!");
    }
    if (id == 2) {
        printf(">Optionen!");
    }
}

/*
 * The main method. If you need a comment, that explains a main method ... go away.
 */
int main(void) {
    printHeader();
    printMenu(0);
    int id = 0;

    while (id != 3) {
        scanf("%d", &id);
        printMenu(id);
    }
    printf("Exit...");
    return 0;
}
