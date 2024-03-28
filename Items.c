#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct GroceryItem {
    char name[50];
    float price;
    int quantity;
};

int main() {
    struct GroceryItem items[10] = {
        {"Apple", 2.5, 3},
        {"Banana", 1.0, 6},
        {"Orange", 1.5, 4},
        {"Milk", 3.0, 2},
        {"Bread", 2.0, 1},
        {"Eggs", 1.0, 12},
        {"Tomato", 1.0, 5},
        {"Potato", 0.5, 8},
        {"Onion", 0.75, 3},
        {"Rice", 4.0, 2}
    };

    // Print grocery items
    printf("Grocery Items\n");
    printf("Item Name\tPrice\tQuantity\n");
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\t\t%.2f\t%d\n", items[i].name, items[i].price, items[i].quantity);
    }
    printf("\n");

    return 0;
}
