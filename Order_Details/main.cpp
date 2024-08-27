#include <iostream>

using namespace std;

//Declaration Functions that are below the mains enabling them to be called on the main function
string perfumeMenu();
double calculatePrice( int quantiy, double price, double vat, double totalDue);
double calculatePrice( double tax, double totalPriceDue);

//This function is for a customer to sign up for an account
string signUpAccount(string fname, string lname, string phoneNr, string email, string password)
{
    cout <<"Enter your first name: ";
    cin >> fname;cout << "\n";
    cout <<"Enter your last name: ";
    cin >> lname; cout << "\n";
    cout <<"Enter your phone number: ";
    cin >> phoneNr; cout << "\n";
    cout <<"Enter your email address: ";
    cin >> email; cout << "\n";
    cout <<"Enter your password: ";
    cin >> password; cout << "\n";

}
//This function is for a customer to update his/ her profile after having the login details
string updateProfile(string address, string city, string postalCode, string province)
{
    cout << "Enter your address (house number and street name/ sections): ";
    cin >> address; cout << "\n";
    cout << "Enter your city: ";
    cin >> city; cout << "\n";
    cout << "Enter your postal code: ";
    cin >> postalCode; cout << "\n";
    cout << "Enter your current province: ";
    cin >> province;
}
int main()
{
    cout << "========================================================" << endl;
    cout <<"\t "  <<" \t"<<"Welcome to Perfu-Scent" << endl;
    cout << "========================================================\n" << endl;
    //Variable declaration
    string name = "";
    string surname = "";
    string cellNo = "";
    string email = "";
    string passcode = "";

    string address = "";
    string postalCode = "";
    string city = "";
    string province = "";
    int quantity = 0;
    string perfumeName = "";
    string option = "";
    int perfumeOption = 0;
    string gender = "";

     string gentleman [16] = {"White oud","Black oud","Oud D' great","Blue savage","GoldenBoy","B-scent","SA'AD","Caffe oud","Hot for him","Blue sea",
    "Millionare man","Stallion","D","No1","Vertex","Green secret"};
    string ladies [16] = {"Yellow oud","Dezire blue","Dezire red","On my wayy","Hot for her","Sugar","Sweet candle","Fantasy","Flawless","Berry-berry",
    "Belle-belle","Her poison","Gorgeous girl","Bae","Pink oud","Red oud"};

    //Calling perfumeMenu function for customers to view the products we offer
    perfumeMenu();

    cout << "\nIf you would like to place an order, please follow the below guidelines. \n";

    cout<<"Would you to create an account(Y/N)?: ";
    cin >> option;

   // option = toupper(option);
    if(option == "Yes" or option == "yes")
    {
        //Function call for signing up
        signUpAccount(name, surname, cellNo, email, passcode);

        cout << "\nPlease update your profile below \n";

        //Funtion call to update profile
        updateProfile(address, city, postalCode, province);

        cout << "\nThank you for updating your profile." << endl;

        while(perfumeOption >= 0 || perfumeOption < 16)
        {
            cout << "Would you like male or female perfume/ perfumes?: ";
            cin >> gender;
            if(gender == "male")
            {
                cout << "Please enter the perfume option from the menu (0-15): ";
                cin >> perfumeName;
                cout << gentleman[perfumeOption];
            }
            else if(gender == "female")
            {
                cout << "Please enter the perfume option from the menu (0-15): ";
                cin >> perfumeOption;
                cout << ladies[perfumeOption];
            }
            else
            {
                cout << "The option you have selected is not our options!" << endl;
            }

            //cout <<"Enter perfume name: ";
           // cin >> perfumeName;
           // cout << "Enter the quantity: ";
            //cin >> quantity;
        }
    }
    else
    {
        cout <<"Thank you for the visit" <<endl;
    }

    //Prompt for input

    //perfumeMenu();
    return 0;
}

//This function is to display the products we offer/ perfume names
string perfumeMenu()
{
    //Declaration and Assignment of arrays of the product
    string males [16] = {"White oud","Black oud","Oud D' great","Blue savage","GoldenBoy","B-scent","SA'AD","Caffe oud","Hot for him","Blue sea",
    "Millionare man","Stallion","D","No1","Vertex","Green secret"};
    string females [16] = {"Yellow oud","Dezire blue","Dezire red","On my wayy","Hot for her","Sugar","Sweet candle","Fantasy","Flawless","Berry-berry",
    "Belle-belle","Her poison","Gorgeous girl","Bae","Pink oud","Red oud"};

    cout << "**************************************************";
    cout <<"\nThe below is a list of male perfumes" << endl;
    cout << "**************************************************\n";
    for(int i = 0; i < 16; i++)
    {
        cout <<i+1 <<". " << males[i] <<endl;
    }

    cout << "**************************************************";
    cout <<"\nThe below is a list of female perfumes" << endl;
    cout << "**************************************************\n";

    for(int i = 0; i < 16; i++)
    {
        cout <<i+1 <<". " << females[i] <<endl;
    }

}

double calculatePrice( int quantity, double tax, double totalPriceDue)
{
    const double PRICE = 150.00;
    const double VAT = 0.15;

    //Calculations
    totalPriceDue = quantity * PRICE;
    tax = totalPriceDue * VAT;

    return totalPriceDue;
}
