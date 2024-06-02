#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int age;

public:
    // Konstruktor
    Player(const std::string& playerName, int playerAge) : name(playerName), age(playerAge) {}

    // Setter-Methode für den Namen
    void setName(const std::string& newName) {
        name = newName;
    }

    // Setter-Methode für das Alter
    void setAge(int newAge) {
        age = newAge;
    }

    // Getter-Methode für den Namen
    std::string getName() const {
        return name;
    }

    // Getter-Methode für das Alter
    int getAge() const {
        return age;
    }

    // Methode zur Anzeige der Spielerdetails
    void display() const {
        std::cout << "Spielername: " << name << ", Alter: " << age << std::endl;
    }
};
