#include <stdio.h>
#include "sqlite3/sqlite3.h"

int main() {

    sqlite3 *db;
    if (sqlite3_open("../database.sqlite", &db)) {
        printf("Could not open the.db\n");
        return 1;
    }

    // Bon courage :)

    return 0;
}