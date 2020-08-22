/**
* This is the Shopping Cart console application named Wesmart. Wesmart is an in-person item store based in New Jersey, United States of America.
* Tax information is based on the 2019 state taxes for the state of New Jersey.
* This application solution is written by Wesley Dzitzer. The application was started on 11/13/2019.
**/

#include <iostream> //Included C++ library for writing information to and from the console.
#include <stdio.h> //Included C++ library to print out number values to the hundreth position in USD $

using namespace std;

class Item { //Item class will have a string name, boolean inStock, and double variable price.
    public:
		string name; //String class variable will name item being sold.
		bool inStock; //Boolean variable to determine if the item is in stock. True will mean the Item is in stock; False will mean the Item is not in stock.
		double price; //Double variable to store the price of Item

		Item(string aName, bool aInStock, double aPrice) { //Constructor intializes paramters for Item class.
			name = aName;
			inStock = aInStock;
			price = aPrice;
		};


		string itemInformationName() { //Class function to list the name of the Item.

			cout << name << "\n";
			return " is the name of item.";
		}

		double itemInformationPrice() { //Class function to list or obtain the price of the Item in USD $.

			cout << "$" << price << "\n";
			return 1;
		}

		double itemMathPrice() { //Class function to obtain the price of the item.

			return Item::price;
		}


		bool isAvailable() { //Class function to check if Item created is available immediately or if the user can place order and be notified later when Item is available.
			if (inStock == true) {
				cout << name << " is available. \n";
				return true;

			} else {
				cout << name << " is not available. You will recieve this item at a later time if you do purchase once item is available. \n";
				return false;
			}

		}

};

int main() { //This is the mian function which executes application.

	bool userIsShopping = true; //Boolean variable will determine if the user is still shopping or not.
	int userSelection; //Integer value to allow user to navigate different options.

	//On application start, each Item object is created here from class Item.
	Item Juice("Orange Juice", true, 15.15);
	Item Milk("Milk", true, 18.15);
	Item Book("The Horse in the Wind", true, 40.41);
	Item VideoGame("Installation 01", true, 60.25);
	Item ToyCar("Burnout Car Model", false, 50.32);

	cout << "Welcome to Wesmart! Which items do you wish to purchase today? \n"; //Introduction message to the user.
	cout << "\n";
	cout << "To begin shopping, enter in number 32 and we may begin! \n";
	cin >> userSelection; //Confirmation from the user they are ready to begin shopping once user enters number 32.

	switch (userSelection) { //Switch confirms the user entered the number 32 to allow user to proceed to the main menu, default will close application.
	   case 32:

		cout << "\n";
		cout << "The List of our available items is shown below. \n"; //List to user all available items.
		cout << "\n";
		cout << Juice.itemInformationName() << "\n";
		cout << Juice.itemInformationPrice() << "\n";
		cout << "\n";
		cout << Milk.itemInformationName() << "\n";
		cout << Milk.itemInformationPrice() << "\n";
		cout << "\n";
		cout << Book.itemInformationName() << "\n";
		cout << Book.itemInformationPrice() << "\n";
		cout << "\n";
		cout << VideoGame.itemInformationName() << "\n";
		cout << VideoGame.itemInformationPrice() << "\n";
		cout << "\n";
		cout << ToyCar.itemInformationName() << "\n";
		cout << ToyCar.itemInformationPrice() << "\n";
		cout << "\n";
		cout << "\n";
		cout << "Item Availability: \n";
		cout << "\n";
		cout << Juice.isAvailable() << "\n";
		cout << Milk.isAvailable() << "\n";
		cout << Book.isAvailable() << "\n";
		cout << VideoGame.isAvailable() << "\n";
		cout << ToyCar.isAvailable() << "\n";
		cout << "\n";


		do {

			cout << "\n";
			cout << "Main Menu: \n";
			cout << "To proceed, you have the following options: \n"; //User is promopted their options here from the main menu.
			cout << "\n";
			cout << "Press 1 to place your item order to be brought to you. \n";
			cout << "Press 2 to repeat our list of available items. \n";
			cout << "Press 3 to close application.  \n";
			cin >> userSelection; //User enters selection here.

			switch (userSelection) { //This switch statement will take the user through all their available options on the Shopping Menu..
			case 1:

				int Quantity; //Integer variable used to determine via user input how many Items the user would prefer to order.
				double subTotal; //Double variable to store the sub total amount of order before taxes.
				double taxAmount; //Double variable to store the total amount of tax.
				double total; //Double variable to store the total amount on items purchased after taxes.

				cout << "\n"; //User is prompted to make item selection in the shopping menu here.
				cout << "Shopping Menu: \n";
				cout << "To add item to your shopping cart order, select one of the following from our list: \n";
				cout << "Type in 1 for our Juice item. \n";
				cout << "Type in 2 for our Milk item. \n";
				cout << "Type in 3 for our Book item. \n";
				cout << "Type in 4 for our Video Game item. \n";
				cout << "Type in 5 for our Toy Car item. \n";
				cout << "\n";

				cin >> userSelection;
				cout << "\n";

				switch (userSelection) { //This switch proceeds from user selection from the shopping menu.
				  case 1:
					  cout << "\n";
					  cout << "Ok, and enter how many of this item you wish to order: \n";
					  cout << "\n";

					  cin >> Quantity;

					  subTotal = Quantity * Juice.itemMathPrice();

					  break;
				  case 2:
					  cout << "\n";
					  cout << "Ok, and enter how many of this item you wish to order: \n";
					  cout << "\n";

					  cin >> Quantity;

					  subTotal = Quantity * Milk.itemMathPrice();
					  break;
				  case 3:
					  cout << "\n";
					  cout << "Ok, and enter how many of this item you wish to order: \n";
					  cout << "\n";

					  cin >> Quantity;

					  subTotal = Quantity * Book.itemMathPrice();
					  break;
				  case 4:
					  cout << "\n";
					  cout << "Ok, and enter how many of this item you wish to order: \n";
					  cout << "\n";

					  cin >> Quantity;

					  subTotal = Quantity * VideoGame.itemMathPrice();
					  break;
				  case 5:  
				      cout << "\n";
					  cout << "Ok, and enter how many of this item you wish to order: \n";
				      cout << "\n";

					  cin >> Quantity;

					  subTotal = Quantity * ToyCar.itemMathPrice();
					  break;
				  default:

					cout << "Please enter in a valid value number selection. \n"; //If user does not enter proper input.

					  break;

				};

				//Checks to make sure input was correct from the shopping menu.
				if (userSelection == 1 || userSelection == 2 || userSelection == 3 || userSelection == 4 || userSelection == 5) {

					cout << "\n";
					cout << "Here is your amount on your order before tax: $";
					printf("%.2lf", subTotal); //Display to user their amount before taxes.
					cout << "\n";
					
					taxAmount = subTotal * .06625; //Tax calculation accoring to the 2019 New Jersey sales tax amount 6.625%.
					total = taxAmount + subTotal; //Add the tax amount and the sub total for item here and assign to total amount variable.
					cout << "Your total amount after taxes are applied is: $";
					printf("%.2lf", total); //Print out total amount user has to pay for items.
					cout << "\n";

					bool userIsPaying = true; //Boolean value to keep user on the payments menu until payment is complete.
                    
					do {

						cout << "\n"; //User selects a payment option from the payments menu.
						cout << "Which payment method will you use? \n";
						cout << "\n";
						cout << "Type 1 for MasterCard Debit/Credit. \n";
						cout << "Type 2 for VISA Debit/Credit. \n";
						cout << "Type 3 for PayPal. \n";
						cout << "\n";
						cin >> userSelection;


						   switch (userSelection) {
						          case 1:

									  cout << "\n";
									  cout << "Thank you for your payment! Your ordered items will be delivered to you momentarily. \n";
									  cout << "\n";

									  userIsPaying = false;

							          break;

						          case 2:

									  cout << "\n";
									  cout << "Thank you for your payment! Your ordered items will be delivered to you momentarily. \n";
									  cout << "\n";

									  userIsPaying = false;

							          break;

						          case 3:

									  cout << "\n";
									  cout << "Thank you for your payment! Your ordered items will be delivered to you momentarily. \n";
									  cout << "\n";

									  userIsPaying = false;

							          break;

						          default:

									  cout << "\n";
									  cout << "Please enter in a valid payment option. \n";
									  cout << "\n";

						   };

					} while (userIsPaying == true); //Keep the user in the payment menu loop until payment user input is taken from the user.
					// It is important to keep the user here until payment is processed.

				} else {

					cout << "\n";
					cout << "You now will return to the previous menu. \n"; //Brings the user back to the shopping menu.
					cout << "\n";
				};

				
                break;

			case 2:

				cout << "\n";
				cout << "The List of our available items is shown below. \n"; //Repeat the List to user on all available items.
				cout << "\n";
				cout << Juice.itemInformationName() << "\n";
				cout << Juice.itemInformationPrice() << "\n";
				cout << "\n";
				cout << Milk.itemInformationName() << "\n";
				cout << Milk.itemInformationPrice() << "\n";
				cout << "\n";
				cout << Book.itemInformationName() << "\n";
				cout << Book.itemInformationPrice() << "\n";
				cout << "\n";
				cout << VideoGame.itemInformationName() << "\n";
				cout << VideoGame.itemInformationPrice() << "\n";
				cout << "\n";
				cout << ToyCar.itemInformationName() << "\n";
				cout << ToyCar.itemInformationPrice() << "\n";
				cout << "\n";
				cout << "\n";
				cout << "Item Availability: \n";
				cout << "\n";
				cout << Juice.isAvailable() << "\n";
				cout << Milk.isAvailable() << "\n";
				cout << Book.isAvailable() << "\n";
				cout << VideoGame.isAvailable() << "\n";
				cout << ToyCar.isAvailable() << "\n";
				cout << "\n";

				break;

			case 3:

				cout << "\n";
				cout << "Are you sure you wish to proceed with closing application? \n"; //Upon user selecting option 4, proceed to close application prompt.
				cout << "Type the number 42 if you wish to continue closing the application. \n";
				cout << "Type any other number if you wish to return to the previous option menu. \n";
				cin >> userSelection;

				if (userSelection == 42) {
					userIsShopping = false; //Set userIsShopping to False to break out of do/while loop of program if user enters in number 42.

				}
				else {
					userIsShopping = true; //Keep userIsShopping set to true to bring user back to the Main Menu.
				};

				break;

			default:
				cout << "Please enter in a valid value number selection. \n"; //If user does not enter proper input.
			}

		} while (userIsShopping == true); //This do/while loop will keep looping as long as the user is shopping.

		break;

	   default:

		   cout << "\n";
           cout << "Thank you for visiting, come back anytime! \n";
		   return 0; //Terminate program here if the user did not enter 32 at the first prompt.

	}
	return 0; //Terminate program here if the user did shop and entered 32 at the first prompt.
}