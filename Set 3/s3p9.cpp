#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    // Constructor
    Product(string n = "", double p = 0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    // Member function to combine inventory
    Product combine(Product other) {
        return Product(
            name + " + " + other.name,
            price,
            quantity + other.quantity
        );
    }

    // Display product details
    void display() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }

    // Friend declaration
    friend Product higherValue(Product p1, Product p2);
};

// Non-member function
Product higherValue(Product p1, Product p2) {
    if (p1.price * p1.quantity > p2.price * p2.quantity)
        return p1;
    else
        return p2;
}

int main() {

    Product p1("Laptop", 50000, 2);
    Product p2("Mobile", 20000, 3);

    // Find product with higher total value
    Product higher = higherValue(p1, p2);

    cout << "Product with Higher Total Value:\n";
    higher.display();

    // Combine inventory
    Product combined = p1.combine(p2);

    cout << "\nCombined Inventory:\n";
    combined.display();

    return 0;
}