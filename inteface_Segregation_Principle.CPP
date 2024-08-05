// Fourth Principle of SOLID
// I : Inteface Segregation Principle
// Example of restument Menu Card for vegetarian and non-vegetarian


#include <iostream>
using namespace std;

class IVegetarian {
public:
    virtual void vegetarianDishes() = 0; 
    virtual ~IVegetarian() {}
};

class INonVegetarian {
public:
    virtual void nonVegetarianDishes() = 0;
    virtual ~INonVegetarian() {} 
};

class Vegetarian : public IVegetarian {
public:
    void vegetarianDishes() override {
        std::cout << "Vegetarian Dishes" << std::endl; 
        std::cout << "Dish 1 : Aloo Ki Tikki (Potato Kabab). " << std::endl; 
        std::cout << "Dish 2 : Cholay - Punjabi Chickpea Curry." << std::endl; 
        std::cout << "Dish 3 : Gajar Ka Halwa. " << std::endl; 
        std::cout << "Dish 4 : Sooji Ka Halwa (Semolina Halwa). " << std::endl; 
        std::cout << "Dish 5 : Potato Filling for Samosas. " << std::endl; 
        std::cout << "Dish 6 Spring Rolls. " << std::endl; 
        std::cout << "Dish 7 : Parathas. " << std::endl; 
        std::cout << "Dish 8 : Dosas. " << std::endl; 
        std::cout << "Dish 9 : Aloo Chana Curry (Potato and Chickpea Curry). " << std::endl; 
        std::cout << "Dish 10 : Aloo Bukhara (Plum) Chutney. " << std::endl; 
        std::cout << "Dish 11 : Sweet and Sour 'Chilli' Paneer. " << std::endl;
    }
};

class NonVegetarian : public INonVegetarian {
public:
    void nonVegetarianDishes() override {
        std::cout << "Non-Vegetarian Dishes" << std::endl; 
        std::cout << "Dish 1 : Mutton Biryani . " << std::endl; 
        std::cout << "Dish 2 : Chicken Biryani. " << std::endl; 
        std::cout << "Dish 3 : Beef Biryani " << std::endl; 
        std::cout << "Dish 4 : Beef korma " << std::endl; 
        std::cout << "Dish 5 : Chicken Korma. " << std::endl; 
        std::cout << "Dish 6 : Mutton Korma " << std::endl; 
        std::cout << "Dish 7 : Beef Pulao " << std::endl; 
        std::cout << "Dish 8 : BBQ Ticka " << std::endl; 
        std::cout << "Dish 9 : Chicken Ticka " << std::endl; 
        std::cout << "Dish 10 : Malai Boti. " << std::endl; 
        std::cout << "Dish 11 : Peshaweri Karahi " << std::endl;
    }
};

class AllDishes : public IVegetarian, public INonVegetarian {
public:
    void vegetarianDishes() override {
        Vegetarian().vegetarianDishes(); 
    }
    
    void nonVegetarianDishes() override {
        NonVegetarian().nonVegetarianDishes(); 
        }
};

int main() {
    Vegetarian objVegetarian;
    objVegetarian.vegetarianDishes();

    NonVegetarian objNonVege;
    objNonVege.nonVegetarianDishes();

    AllDishes objDishes;
    objDishes.vegetarianDishes();
    objDishes.nonVegetarianDishes();

    return 0;
}
