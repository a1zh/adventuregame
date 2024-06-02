#include "Player.h"
#include <iostream>
#include <string>
#include <random>
#include <cstdlib> // Für system()
#include <thread> // Für std::this_thread::sleep_for
#include <chrono> // Für std::chrono::seconds

int main() {

    std::string name;
    std::string menu;
    int age;

    // Zufallszahlengenerator (Mersenne-Twister-Engine)
    std::random_device rd;
    std::mt19937 gen(rd()); // Initialisierung mit einer zufälligen Seed-Zahl

    // Definition des Zufallszahlbereichs (hier von 1 bis 100)
    std::uniform_int_distribution<> dis(1, 100);

    // Generierung einer Zufallszahl im angegebenen Bereich
    int sum;
    int solution;



        std::cout << "Enter your Name:";
        std::cin >> name;
        std::cout << "Enter your Age:";
        std::cin >> age;
        // Spieler erstellen
        Player player1(name, age);
        player1.display();
        std::cout << "\n";

    while (1)
    {
            std::cout << "Menu:\n";
            std::cout << "Play: Press p\n";
            std::cout << "Exit: Press x\n";
            std::cin >> menu;
            
            if(menu == "p"){
                while (1)
                {
                system("clear");
                int randomNumber = dis(gen);
                int randomNumber2 = dis(gen);

                std::cout << "Add 2 Numbers:     ";
                sum = randomNumber + randomNumber2;
                if(randomNumber2 == 0 || randomNumber == 0){
                    std::cout << "Exit...";
                }
                std::cout << randomNumber << " + " << randomNumber2 << "\n";
                std::cin >> solution;
                if(solution == 0){
                    break;
                }
                if (solution == sum){
                    std::cout << "Correct -- [" << sum << "] \n";
                     // Anhalten des Programms für 3 Sekunden
                    std::this_thread::sleep_for(std::chrono::seconds(3));



                }else{
                    std::cout << "Wrong!! -- [" << sum << "] \n";
                    // Anhalten des Programms für 3 Sekunden
                    std::this_thread::sleep_for(std::chrono::seconds(3));

                }

                }
                
            }else{
                break;
            }
           
                
            
            
        


    }


    return 0;
}