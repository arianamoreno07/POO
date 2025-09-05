#include "Prerequisites.h"
#include "Inventory.h"

#include <iostream>

// crear una clase Character
class Character {
public:
    Character() = default;

    Character(int health) : m_health(health) {}

    void rebirth() {
        if (!isCharacterAlive && m_health <= 0) {
            std::cout << "El character ha revivido en el Spawn Point" << std::endl;
            isCharacterAlive = true;
        }
    }

    int getHealth() const {
        return m_health;
    }

    void setHealth(int health) {
        m_health = health;
    }

private:
    bool isCharacterAlive = false;

protected:
    int m_health;
};

// This function is in charge of being the entry point of the app. 
int main() {
    Character pepe(150);

    std::cout << pepe.getHealth() << std::endl;
    pepe.setHealth(-50);
    std::cout << pepe.getHealth() << std::endl;

    if (pepe.getHealth() <= 0) {
        std::cout << "El pepe, murio." << std::endl;
        pepe.rebirth();

        Inventory inventory;
        inventory.addItem("Pocion de Vida", 5);
        inventory.addItem("Elixir de Mana", 3);
        inventory.addItem("Diamante", 64);

        inventory.useItem("Pocion de vida", 2);
        inventory.showInventory();

        std::cin.get();

    }

    return 0;

}