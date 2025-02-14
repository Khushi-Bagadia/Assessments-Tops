#include <stdio.h>

int main() {
    int choice, quantity;
    float total_amount = 0;
    char continue_order;

    do {
        printf("--------  Menu -------- \n");
        printf("1. Pizza  price : 180rs/pcs\n");
        printf("2. Burger price : 100rs/pcs\n");
        printf("3. Dosa   price : 120rs/pcs\n");
        printf("4. Idli   price : 50rs/pcs\n");
        printf("Please Enter your selection : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have selected pizza.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                total_amount += 180 * quantity;
                printf("Amount: %d\n", 180 * quantity);
                break;
                
            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                total_amount += 100 * quantity;
                printf("Amount: %d\n", 100 * quantity);
                break;
                
            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                total_amount += 120 * quantity;
                printf("Amount: %d\n", 120 * quantity);
                break;
                
            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                total_amount += 50 * quantity;
                printf("Amount: %d\n", 50 * quantity);
                break;
                
            default:
                printf("Invalid choice. Please try again.\n");
                continue;
        }

        printf("Total Amount is = %.2f\n", total_amount);
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &continue_order);

    } while (continue_order == 'y' || continue_order == 'Y');

    printf("Final Total Amount: %.2f\n", total_amount);
	return 0;
}

//o/p:
//--------  Menu --------
//1. Pizza  price : 180rs/pcs
//2. Burger price : 100rs/pcs
//3. Dosa   price : 120rs/pcs
//4. Idli   price : 50rs/pcs
//Please Enter your selection : 1
//You have selected pizza.
//Enter the quantity: 2
//Amount: 360
//Total Amount is = 360.00
//Do you want to place more orders? (y/n): y
//--------  Menu --------
//1. Pizza  price : 180rs/pcs
//2. Burger price : 100rs/pcs
//3. Dosa   price : 120rs/pcs
//4. Idli   price : 50rs/pcs
//Please Enter your selection : 3
//You have selected Dosa.
//Enter the quantity: 2
//Amount: 240
//Total Amount is = 600.00
//Do you want to place more orders? (y/n): n
//Final Total Amount: 600.00




