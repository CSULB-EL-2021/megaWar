//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 6 – Mega War)
//  Due Date (12/08/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#include <iostream>
#include "Game.hpp"

int main()
{
  int deckNbr, playerNbr;

  std::cout << "-------[ Mega War ]-------" << std::endl;
  std::cout << "---[ By Emile Lepetit ]---" << std::endl << std::endl;

  std::cout << "How many deck do you want to use : ";
  std::cin >> deckNbr;
  std::cout << "How many players are going to play : ";
  std::cin >> playerNbr;

  std::cout << std::endl;
  auto game = Game(deckNbr, playerNbr);

  if (!game.isValidGame()) {
    std::cout << "Invalid arguments" << std::endl;
    return 1;
  }

  game.play();

  return (0);
}