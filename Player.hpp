//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 6 – Mega War)
//  Due Date (12/08/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#ifndef PROG6_PLAYER_HPP
#define PROG6_PLAYER_HPP

#include "CardPile.hpp"
#include <iostream>
#include <iomanip>

class Player: public CardPile {
  public:
    Player(int);
    double getFierceness() const;
    friend std::ostream& operator<<(std::ostream& os, const Player& dt);

    int getId() const;
    int getBattle() const;
    int getWin() const;

    void addBattle();
    void addWin();

  private:
    int _id;
    int _battle;
    int _win;
};


#endif //PROG6_PLAYER_HPP
