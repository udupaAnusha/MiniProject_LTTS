// Function to implement the
// search by food
void search_by_food()
{
	total = 0;

	// Initialize all the hotels
	// and their foods
	hotel_initialize();
	while (1) {
		printf("\n\nPlease choose the ");
		printf("food\n\n1) %s\t%d\n2) %s\t%d",
			m[1].first_food, m[1].first,
			m[1].second_food, m[1].second);

		printf("\n3) %s\t%d\n4) %s\t%d\n",
			m[1].third_food, m[1].third,
			m[2].first_food, m[2].first);

		printf("5) %s\t%d\n6) %s\t%d\n",
			m[2].second_food, m[2].second,
			m[2].third_food, m[2].third);
		printf("7) %s\t%d\n8) %s\t%d\n",
			m[3].first_food, m[3].first,
			m[3].second_food, m[3].second);
		printf("9) %s\t%d\n10) Cart\n",
			m[3].third_food,
			m[3].third);
		printf("11) Exit");

		printf("\nPlease Enter Your Choice\t");
		scanf("%d", &food);
		if (food > 10) {
			printf("Please Enter the ");
			printf("valid choice\n\n");
			search_by_food();
		}
		// Moves to the cart
		// functionality
		else if (food == 10)
			cart();
		else if (food == 11)
			exit(1);
		// Call food_order functionality
		// to get the no of foods and
		// to calculat the total
		// amount of the order.
		else
			food_order(food);
	}
}
