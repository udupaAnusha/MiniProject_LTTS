// Function to check if the account
// already exists or not
void account_check()
{
	for (i = 0; i < 100; i++) {
		// Check whether the email and
		// password are already matched
		// with existed account
		if (!(strcmp(temp_email,
					s[i].email)
			&& strcmp(temp_password1,
						s[i].password))) {
			printf("\n\nAccount Already");
			printf("Existed. Please"
				" Login !!\n\n");
			main();
			break;
		}
	}

	// If account does not already
	// existed, it creates a new
	// one with new inputs
	if (i == 100) {
		strcpy(s[j].uname, temp_name);
		s[j].age = temp_age;
		strcpy(s[j].password,
			temp_password1);
		strcpy(s[j].email, temp_email);
		strcpy(s[j].mobile, temp_mobile);
		j++;
		printf("\n\n\nAccount"
			" Successfully");
		printf("Created!!\n\n");
	}
}
