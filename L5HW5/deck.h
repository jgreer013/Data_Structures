#ifndef DECK_H
#define DECK_H
/*
  The Deck class implements a random deck of 52 cards.
  Jeremiah Greer
  9/22/15
  Lab5/HW5
*/
#include <iostream>
#include <stdlib.h>
#include <stdexcept>
#include <stack>

#include "card.h"

using namespace std;


class Deck{
  public:
  Deck(){
    // Set up the instance so getTopCard can give out random cards from a deck.
    // Initialize deck
    num_cards = 0;
    Card temp[52];
    for (unsigned int i = 0; i < 52; i++) {
      temp[i] = Card(static_cast<suit_t>(i/13),(i%13)+1);
    }
    
    // Shuffle
    for (unsigned int i = 51; i > 0; i--) {
      int j = rand() % i;
      Card old = temp[j];
      temp[j] = temp[i];
      temp[i] = old;
    }
    
    // Fill d
    for (unsigned int i = 0; i < 52; i++) {
      d.push(temp[i]);
      num_cards += 1;
    }
  }
  
  // Get top card from deck
  Card getTopCard(){
    // Return the top card to the requestor.
    Card ret = d.top();
    num_cards -= 1;
    d.pop();
    return ret;
  }
  
  void removeTopCard(){
    num_cards -= 1;
    d.pop();
  }
  
  // Get size of deck
  unsigned int size() const{
    // Return the size of the rest of the deck.
    return num_cards;
  }
  
  
  private:
  stack<Card> d;    // Hint hint!
  unsigned int num_cards;
  

};

#endif
