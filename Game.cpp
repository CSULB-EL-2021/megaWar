//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 6 – Mega War)
//  Due Date (12/08/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#include "Game.hpp"
#include <iostream>

Game::Game(int deckNbr, int playerNbr)
{
  if (deckNbr == 0 || playerNbr == 0) return;

  // Players initialisation
  for (int i = 0; i != playerNbr; i++)
    _players.push_back(new Player(i));

  // Cards distribution
  auto cards = MegaDeck(deckNbr);
  cards.shuffle();
  int ttl = cards.size();
  for (int i = 0; i != ttl; i++)
    _players[i % playerNbr]->addCard(cards.removeCard());
}

bool Game::isValidGame() const
{
  if (_players.empty()) return false;

  for (const auto & p : _players)
    if (p->size() == 0) return false;

  return true;
}

void Game::displayResults() const
{
  for (const auto & p : _players)
    std::cout << *p << std::endl;
}

bool Game::isEnd() const
{
  int inGame = 0;

  for (const auto & p : _players)
    if (p->size() != 0) inGame ++;
  return inGame == 1;
}

void Game::play()
{
  for (int battleId = 0; !isEnd(); battleId++) {
    std::map<Player*, Card> piles;

    for (auto & p : _players) // All players put a card on the table
      piles.insert({p, p->removeCard()});

    auto maxHand = std::max_element(piles.begin(), piles.end(), // Find best cards
      [](const auto& h1, const auto& h2) {
        return h1.second < h2.second;
      }
    );

    if (this->needAWar(piles)) {
      for (auto & hand : piles)
        maxHand->first->addCard(hand.second);
    } else { // if not need a war (simple case)
      for (auto & hand : piles)
        maxHand->first->addCard(hand.second);
    }

    std::cout << "Battle " << battleId << " Stats:" << std::endl;
    this->displayResults();
    std::cout << std::endl;
  }
}

bool Game::needAWar(const std::map<Player *, Card>& piles) const
{
  int find = 0;
  auto maxHand = std::max_element(piles.begin(), piles.end(), // Find best cards
    [](const auto& h1, const auto& h2) {
      return h1.second < h2.second;
    }
  );

  for (auto & hand : piles)
    if (hand.second.getRank() == maxHand->second.getRank()) find++;
  return find != 1;
}
void Game::handleWar(const std::map<Player *, Card> & piles)
{
  auto maxHand = std::max_element(piles.begin(), piles.end(), // Find best cards
    [](const auto& h1, const auto& h2) {
                                    return h1.second < h2.second;
                                  }
  );
}
