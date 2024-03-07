/* Programmer:Muhammad Ali 23K-0052
* Date: 07/03/24
* Descrption: Graphics engine
*/
#include <iostream>

// GraphicsRenderingEngine class
class GraphicsRenderingEngine {

public:

    void render() {
        std::cout << "Rendering graphics..." << std::endl;
    }

};

// InputHandler class
class InputHandler {

public:

    void processInput() {
        std::cout << "Input is being processed" << std::endl;
    }

};

// PhysicsEngine class
class PhysicsEngine {

public:

    void updatePhysics() {
        std::cout << "Updating physics..." << std::endl;
    }

};

// GameEngine class uses composition to include the above components
class GameEngine {

private:

    GraphicsRenderingEngine graphicsEngine;
    InputHandler inputHandler;
    PhysicsEngine physicsEngine;

public:

    // Method to simulate a game loop iteration
    void gameLoop() {
     
        inputHandler.processInput();
        physicsEngine.updatePhysics();
        graphicsEngine.render();
   
    }

};

int main() {

    GameEngine myGameEngine;
    
    std::cout << "Starting game loop..." << std::endl;
    myGameEngine.gameLoop(); // one iteration of the game loop

    return 0;

}
