#include <iostream>

using namespace std;

class Position {
public:
    float x, y, z;

    Position(float x, float y, float z) : x(x), y(y), z(z) {}
};

class Health {
public:
    int health;

    Health(int hp) : health(hp) {}
};

class Player : public Position, public Health {
public:
    Player() : Health(100), Position(0.f, 0.f, 0.f) {}

    void move(int a, int b, int c) {
        x += a, y += b, z += c;
    }

    void heal(int hp) {
        health = (health + hp >= 100) ? 100 : health+hp;
    }
    
    void display() {
        cout << "Health: " << health << "\n";
        cout << "Position:\nx: " << x << "\ny: " << y << "\nz: " << z << "\n";
    }
};

int main() {
    Player player;
    player.health = 66;
    player.display();

    player.heal(56);
    player.move(1, 2, -4);
    player.display();

    return 0;
}