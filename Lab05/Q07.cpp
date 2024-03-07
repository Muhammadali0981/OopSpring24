/* Programmer:Muhammad Ali 23K-0052
* Date: 07/03/24
* Descrption: Food 
*/

#include <iostream>
#include <vector>

// MenuItem class
class MenuItem {

private:
    
    std::string foodName;
    double foodPrice;

public:
    
    MenuItem(std::string name, double price) : foodName(name), foodPrice(price) {}

    std::string getName() const { return foodName; }

    double getPrice() const { return foodPrice; }

};

// Menu class
class Menu {

private:
   
    std::vector<MenuItem> items;

public:
    
    void addItem(const MenuItem& item) {
        items.push_back(item);
    }

    void removeItem(const std::string& itemName) {
        
        for (auto it = items.begin(); it != items.end(); it++) {
         
           if (it->getName() == itemName) {
              
                items.erase(it);
                std::cout << itemName << " removed from the menu." << std::endl;
             
                return; // Exit after removing the first occurrence
         
            }
       
        }
   
    std::cout << itemName << " not found in the menu." << std::endl;

}


    void displayMenu() const {
       
        std::cout << "Menu:" << std::endl;
        
        for (const auto& item : items) {
            std::cout << item.getName() << " Rps" << item.getPrice() << std::endl;
        }
    
    }

};

// Payment class
class Payment {

private:
    
    double amount;

public:
   
    Payment(double amount) : amount(amount) {}

    double getAmount() const { return amount; }

};

// Order class
class Order {

private:
    
    std::vector<MenuItem> orderedItems;
    Payment payment;

public:
   
    Order(const std::vector<MenuItem>& items, const Payment& payment)
        : orderedItems(items), payment(payment) {}

    void displayOrder() const {
        
        std::cout << "Order details:" << std::endl;
       
        for (const auto& item : orderedItems) {
            std::cout << item.getName() << " Rps" << item.getPrice() << std::endl;
        }
      
        std::cout << "Total Payment: $" << payment.getAmount() << std::endl;
   
    }
};

// RestaurantOrderingSystem class
class RestaurantOrderingSystem {

private:

    Menu menu;

public:
  
    void setMenu(const Menu& newMenu) {
        menu = newMenu;
    }

    void displayMenu() {
        menu.displayMenu();
    }

    void placeOrder(const std::vector<MenuItem>& items) {
        
        double totalAmount = 0;
        
        for (const auto& item : items) {
            totalAmount += item.getPrice();
        }
       
        Payment payment(totalAmount);
        Order order(items, payment);
        order.displayOrder();
    
    }

};

int main() {
    
    //instances
    MenuItem pizza("Pizza", 10.0);
    MenuItem burger("Burger", 5.5);
    MenuItem soda("Soda", 2.0);

    Menu menu;
    menu.addItem(pizza);
    menu.addItem(burger);
    menu.addItem(soda);

    RestaurantOrderingSystem system;
    system.setMenu(menu);
    system.displayMenu();

    std::vector<MenuItem> itemsToOrder = {pizza, soda};
    system.placeOrder(itemsToOrder);

    return 0;
}
