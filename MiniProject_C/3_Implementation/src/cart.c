// Function to implement the cart
void cart()
{
	printf("\n\n\n\n--------------Cart");
	printf("----------------");
	printf("\nYour Total Order");
	printf("Amount is %d\n", total);
	printf("\n\nDo You wish to");
	printf("order (y=1/n=0):");
	scanf("%d", &ch);
	if (ch == 1) {
		printf("\n\nThank You for your");
		printf("order!! Your Food is on ");
		printf("the way. Welcome again!!\n\n");
		exit(1);
	}
	else if (ch == 0) {
		printf("Do You want to exit -1");
		printf("or Go back -0");
		scanf("%d", &confirm);
		if (confirm == 1) {
			printf("\n\nOops! Your order is");
			printf("cancelled!! Exiting..");
			printf("Thank You visit again!\n");
			exit(1);
		}
		else {
			printf("\n\nThank You\n\n");
			login();
		}
	}
	else {
		printf("\n\nPlease Enter the ");
		printf("correct choice\n\n");
		cart();
	}
}
