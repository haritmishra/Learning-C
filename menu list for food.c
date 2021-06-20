#include<stdio.h>
main()
{
	//1. Display the menu
	printf("Pick your Order: \n1. Pizza \n2. Burger\n3. Pasta\n4. Sandwich\n5. French Fries ");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Your Order is Pizza, Rs239");
			break;
		case 2:
			printf("Your order is Burger, Rs129");
			break;
		case 3:
			printf("Your Order is Pasta, Rs179");
			break;
		case 4:
			printf("Your Order is Sandwich, Rs99");
			break;
		case 5:
			printf("Your order is French Fries, Rs149");
			break;
		default: printf("Invalid Choice");
			
	}
}
