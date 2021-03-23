// This program passes an object to a function. It passes it to one function
// by reference and to another by value.
#include <iostream>
#include <iomanip>
#include <string>
#include <utility>
using namespace std;

class InventoryItem
{
private:
    int partNum;	         // Part number
    string description;		// Item description
    int onHand;				// Units on hand
    double price;			// Unit price

public:
    void storeInfo(int p, string d, int oH, double cost);	// Prototype

    int getPartNum() const
    {	return partNum;		}

    string getDescription()
    {	return description;		}

    int getOnHand() const
    {	return onHand;		}

    double getPrice() const
    {	return price;		}
};

// Implementation code for InventoryItem class function storeInfo
void InventoryItem::storeInfo(int p, string d, int oH, double cost)
{	partNum = p;
    description = std::move(d);
    onHand = oH;
    price = cost;
}

// Function prototypes for client program
void storeValues (InventoryItem&);		// Receives an object by reference
void showValues (InventoryItem);		// Receives an object by value

//*********** main **************
int main()
{
    InventoryItem part;				// part is an Inventory object
    storeValues(part);
    showValues(part);
    return 0;
}

/************** store Values ***********
* This function stores user input data in the members of an InventoryItem object
* passed to it by reference. */

void storeValues (InventoryItem &item)
{
    int partNum;			 // Local variables to hold user input
    string description;
    int qty;
    double price;

    // Get the data from the user
    cout << "Enter data for the new part number \n";
    cout << "Part number: ";
    cin >> partNum;
    cout << "Description: ";
    cin.get();			// move past the '\n' left in the input letter by the last input
    getline(cin, description);
    cout << "Quantity on hand: ";
    cin >> qty;
    cout << "Unit price: ";
    cin >> price;

    // Store the data in the InventoryItem
    item.storeInfo(partNum, description, qty, price);
}

/*************** showValues **************
* This function displays the member data stored
* in the InventoryItem object passed to it by value */
void showValues(InventoryItem item)
{
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Part Number  : " << item.getPartNum() << endl;
    cout << "Description  : " << item.getDescription() << endl;
    cout << "Units On Hand: " << item.getOnHand() << endl;
    cout << "Price        : $" << item.getPrice() << endl;
}
