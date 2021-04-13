// Function that initializes the
// Hotels
void hotel_initialize()
{
	// Initialize the structure with
	// Aarya_bhavan hotel and some
	// foods name with their cost
	strcpy(m[1].hotel, "Vidhyarthi_Bhavan");
	strcpy(m[1].first_food, "Butter Masala Dose");
	strcpy(m[1].second_food, "Sagu Masala Dose");
	strcpy(m[1].third_food, "Khara Bath");
	m[1].first = 70;
	m[1].second = 75;
	m[1].third = 45;

	// Initialize the structure with
	// Banu_Hotel and some foods name
	// and their respective costs
	strcpy(m[2].hotel, "Renuka_Hotel");
	strcpy(m[2].first_food, "Parotta");
	strcpy(m[2].second_food, "Noodles");
	strcpy(m[2].third_food, "Chicken_Rice");
	m[2].first = 15;
	m[2].second = 75;
	m[2].third = 80;

	// Initialize the structure with
	// SR_Bhavan hotel and some foods
	// name and their respective costs
	strcpy(m[3].hotel, "Nagarjuna");
	strcpy(m[3].first_food, "Chicken_Biriyani");
	strcpy(m[3].second_food, "Prawn");
	strcpy(m[3].third_food, "Faloda");
	m[3].first = 90;
	m[3].second = 120;
	m[3].third = 35;
}
