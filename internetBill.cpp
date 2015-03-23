/* Madlen Ivanova
The program calculates  a customer's monthly Internet bill given the subscription package 
purchased and the amount of hours used.*/

#include<iostream>
using namespace std;

int main()

{
	double internetBill = 0;
    double hoursUsed = 0;
    char package;
    double permanentCharge = 0;
    bool isPackageValid = 0;
    //Selects a package type.
    cout << "Choose your Internet package from the listed options below." << endl;
    cout << endl;
	cout << "Please enter 'A', 'B', or 'C' for your package: " << endl;
	cout << endl;
    cout << "Package A:   For $9.95 per month 10 hours of access are provided." << endl; 
	cout << "             Additional hours are $2.00 an hour." << endl;
	cout << endl;
    cout << "Package B:   For $14.95 per month 20 hours of access are provided." << endl;
	cout << "             Additional hours are $1.00 per hour." <<endl;
    cout << endl;
    cout << "Package C:   For $19.95 per month unlimited access is provided." << endl;
    cin >> package;
    cout << endl;
    
    //Prompts the user for the used Internet hours.
   	cout << "Please enter your used hours: " << endl;
   	cin >> hoursUsed;
   	
    //According to the entered pakckage the price of the used hours is calculated.
	//The permanentCharge variable is assigned the value of the entered package price.
    if (package == 'A' || package == 'a')
	{
		isPackageValid = 1;
		permanentCharge = 9.95;
		hoursUsed -= 10;
		hoursUsed *=2;
	}
    else if (package == 'B' || package == 'b')
    {
    	isPackageValid = 1;
		permanentCharge = 14.95;
    	//Substracting the included in the package hours.
		hoursUsed -=20;
    	
    }
    
    //The user has unlimited access provided.
    else if (package == 'C' || package == 'c')
    {
    	isPackageValid = 1;
		permanentCharge = 19.95;
    	hoursUsed = 0;
    		
    }
    
    
    
    if (isPackageValid == 1)
    {
     //The Internet bill equals the price of the package + the additional used hours.
    internetBill = permanentCharge + hoursUsed;
    
	//Displaying the Internet bill to the user.
	cout << "Dear customer, your Internet bill is: " << internetBill << endl;
   }
   
    else 
    {
     cout << "Invalid package. The program is ending now! " << endl;
    }
   

 
return 0;

}
