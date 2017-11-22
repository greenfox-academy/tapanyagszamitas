#include <iostream>

using namespace std;

enum UserRole { CUSTOMER, ADMIN };

class User
{
public:
    User(string name, string pin, UserRole role, int balance);
    string getName();
    bool checkPin(string pinFromUserInput);

    void menu(string name, int pin);

private:
    string name;
    string pin;
    UserRole role;
    int balance;
};

class ATM
{
public:
    ATM(); //Admin", "1234", ADMIN, 100
    void addUser(User* user);
 //   User* whoIsTheReachest();

   // User* loginUser(String username, password);
    void withdraw(int amount, string username);
private:
    int balance;
//    vector <User> users;
};

void User::menu(string name, int pin)
{

    this->name = name;
    this->pin = pin;
    this->balance = balance;

    int ask_for_pin = 0;
    string ask_for_name;
    cout <<
         "______________________________ \n"
         "|Welcome to the boring ATM!   |\n"
         "|This is the most safety      |\n"
         "|place for your virtual money!|\n"
         "|_____________________________|\n"
         "|Please input your ID !\n";

    cin >> ask_for_name;

    cout << "Please input your pin code!" << endl;

    cin >> ask_for_pin;

    if(ask_for_name == name) {
       if(ask_for_pin == pin)
    {
        cout << "welcome in the system user menu!";
    }
    }
    else
    {
        cout << "police will arrest you for hacking ATM";
    }
}
int main()
{


    ATM atm();

    atm.addUser(new User("Admin", "1234", ADMIN, 100));
    atm.addUser(new User("Josef", "1234", CUSTOMER, 200));
    atm.addUser(new User("Bela", "1234", CUSTOMER, 300));
    atm.addUser(new User("Ferenc", "1234", CUSTOMER, 400));
    atm.addUser(new User("Maria", "1234", CUSTOMER, 500));

    while(true)
    {
        // parancs bek�r�s
        // login
        // username
        // pin

   /*    User* user = atm.loginUser(name, pin);
        if (user == NULL){
            cout <<�"Hibas pin";
        }
        else
        {
            atm.withdraw(1231);
        }
        // parancs v�grehajt�s
    }

*/

    return 0;
}
}