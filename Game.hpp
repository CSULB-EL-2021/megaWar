//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 6 – Mega War)
//  Due Date (12/08/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#ifndef PROG6_GAME_HPP
#define PROG6_GAME_HPP

#include "MegaDeck.hpp"
#include "Deck.hpp"
#include "Player.hpp"
#include "Card.hpp"

#include <map>

class Game {
  public:
    Game(int deckNbr, int playerNbr);
    ~Game() = default;

    bool isValidGame() const;
    void play();
    void displayResults() const;

  private:
    std::vector<Player *> _players;
    bool isEnd() const;
    bool needAWar(const std::map<Player*, Card>&) const;
    void handleWar(const std::map<Player*, Card>&);
};


#endif //PROG6_GAME_HPP
