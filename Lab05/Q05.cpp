/* Programmer:Muhammad Ali 23K-0052
* Date: 07/03/24
* Descrption: Car
*/
#include <iostream>
#include <vector>

// Engine class
class Engine {

private:

    std::string type; // For simplicity, just the type of the engine

public:
    
    //parameterized constructor
    Engine(std::string type) : type(type) {}

    std::string getType() const { return type; }

    void setType(std::string newType) { type = newType; }

};

// Wheel class
class Wheel {

private:
    
    int size;

public:
    
    //parameterized constructor
    Wheel(int size) : size(size) {}
   
    int getSize() const { return size; }
   
    void setSize(int newSize) { size = newSize; }

};

// Headlight class
class Headlight {

private:
   
    std::string intensity;

public:
   
   //parameterized constructor
    Headlight(std::string intensity) : intensity(intensity) {}
   
    std::string getIntensity() const { return intensity; }
   
    void setIntensity(std::string newIntensity) { intensity = newIntensity; }

};

// Steering class
class Steering {

private:
    
    std::string type;

public:
    
    //parameterized constructor
    Steering(std::string type) : type(type) {}
   
    std::string getType() const { return type; }
   
    void setType(std::string newType) { type = newType; }

};

// Car class
class Car {

private:
   
    Engine engine; // Composition
    std::vector<Wheel*> wheels; // Aggregation (pointer used)
    Headlight headlight; // Composition
    Steering steering; // Composition

public:
    
    //parameterized constructor
    Car(const Engine& engine, const Headlight& headlight, const Steering& steering)
        : engine(engine), headlight(headlight), steering(steering) {}

    void addWheel(Wheel* wheel) {
       
        wheels.push_back(wheel);
   
    }

    void displayCarDetails() {
       
        std::cout << "Engine Type: " << engine.getType() << std::endl;
        std::cout << "Headlight Intensity: " << headlight.getIntensity() << std::endl;
        std::cout << "Steering Type: " << steering.getType() << std::endl;
       
        for(size_t i = 0; i < wheels.size(); ++i) {
            std::cout << "Wheel " << i+1 << " Size: " << wheels[i]->getSize() << std::endl;
        }
   
    }

};


int main() {
    
    // Create an Engine
    Engine myEngine("V8");

    // Create Headlight
    Headlight myHeadlight("High Beam");

    // Create Steering
    Steering mySteering("Power Steering");

    // Create Car with Engine, Headlight, and Steering
    Car myCar(myEngine, myHeadlight, mySteering);

    // Create Wheels and add them to the Car
    Wheel frontLeftWheel(18);
    Wheel frontRightWheel(18);
    Wheel rearLeftWheel(18);
    Wheel rearRightWheel(18);

    // Adding wheels to the car
    myCar.addWheel(&frontLeftWheel);
    myCar.addWheel(&frontRightWheel);
    myCar.addWheel(&rearLeftWheel);
    myCar.addWheel(&rearRightWheel);

    // Display car details
    myCar.displayCarDetails();

    return 0;
}

