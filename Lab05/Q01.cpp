/* Programmer:Muhammad Ali 23K-0052
* Date: 07/03/24
* Descrption: shapes
*/
#include<iostream>
#include<cmath>

//defining a class Square
class Square{

    //private data members 
    float sideLength;
    float area;
    static float allAreas;

    //access modifier
    public:

    //defaut constructor
    Square() {}

    //parameterized constructor
    Square(float sideLength) {
        this->sideLength = sideLength;
    }//end of parameterized constructor

    //member function to calculate area of the square
    float Area() {
        area = std::pow(sideLength,2); //calculating area
        allAreas += area;
        return area;
    }//end of member function

    //getter and setter for attributes
    void setSideLength(float SideLength) { sideLength = SideLength; }
    float getSideLength() { return sideLength; }

    float getArea() { return area; }

    static float getallAreas() { return allAreas; } 

};//end of class

float Square::allAreas = 0; //initalizing static member outside class

//main function
int main() {
    
    //obbjects of our class
    Square sq1(3.2);
    Square sq2(5.3);
    Square sq3(4.8);

    //getters to print the value of areas and all areas
    //for object 1
    std::cout<< "For Square 1\n";
    std::cout<< "The area is: " <<sq1.Area() <<std::endl;
    std::cout<< "All the areas are: " <<sq1.getallAreas() <<std::endl; 
    
    //for object 2
    std::cout<< "For Square 2\n";
    std::cout<< "The area is: " <<sq2.Area() <<std::endl;
    std::cout<< "All the areas are: " <<sq2.getallAreas() <<std::endl;
    
    //for object 3
    std::cout<< "For Square 1\n";
    std::cout<< "The area is: " <<sq3.Area() <<std::endl;
    std::cout<< "All the areas are: " <<sq3.getallAreas() <<std::endl;

    
    return 0;

}//end of main
