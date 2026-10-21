#include <stdio.h>

int main() {
    int quantity;
    float price, total, discount, finalAmount;

    printf("===== SHOPPING BILL CALCULATOR =====\n");

    printf("Enter price of one item: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (price < 0 || quantity <= 0) {
        printf("Please enter valid price and quantity.\n");
    } else {
        total = price * quantity;

        if (total >= 1000) {
            discount = total * 0.10f;
        } else {
            discount = 0;
        }

        finalAmount = total - discount;

        printf("\nTotal Bill: Rs. %.2f\n", total);
        printf("Discount: Rs. %.2f\n", discount);
        printf("Final Amount: Rs. %.2f\n", finalAmount);
    }

    return 0;
}
