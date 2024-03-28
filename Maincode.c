#include <stdio.h>

#define MAX_ITEMS 10

struct GroceryItem {
    char name[50];
    float price;
    int quantity;
};

float total_cost(struct GroceryItem item) {
    return item.price * item.quantity;
}

int main() {
    struct GroceryItem items[MAX_ITEMS] = {
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

    float total_bill = 0;
    int total_items = 0;

    printf("Item Name\tPrice\tQuantity\tTotal Cost\n");

    for (int i = 0; i < MAX_ITEMS; i++) {
        struct GroceryItem item = items[i];
        float item_cost = total_cost(item);
        printf("%s\t\t%.2f\t%d\t\t%.2f\n", item.name, item.price, item.quantity, item_cost);
        total_bill += item_cost;
        total_items += item.quantity;
    }
    printf("Total Number of Items: %d\n", total_items);
    printf("Total Bill Amount: %.2f\n", total_bill);

    return 0;
}
