#ifndef WAR_H
#define WAR_H
/*
  This runWar function runs a game of war between 2 automated players
  and returns the number of rounds (both put a card down 
  once per round) until someone won.  An integer is given 
  as an upper limit to how many rounds a game can go on for.
  Jeremiah Greer
  9/23/15
  Lab5/HW5
*/
#include <iostream>
#include <stdlib.h>
#include <stdexcept>
#include <stack>
#include <queue>

#include "deck.h"

using namespace std;

// Give half of deck to each player
void distributeCards(Deck &deck, queue<Card> &player_one, queue<Card> &player_two){
  for (unsigned int i = 0; i < 26; i++) {
    player_one.push(deck.getTopCard());
    cout << deck.getTopCard() << endl;
    deck.removeTopCard();
    player_two.push(deck.getTopCard());
    cout << deck.getTopCard() << endl;
    deck.removeTopCard();
  }
}

// Take cards for comparison from each player
void placeCards(Card fin[], queue<Card> &player_one, queue<Card> &player_two, stack<Card> &won_cards){
  Card card_one = player_one.front();
  won_cards.push(card_one);
  player_one.pop();
  Card card_two = player_two.front();
  won_cards.push(card_two);
  player_two.pop();
  fin[0] = card_one;
  fin[1] = card_two;
}

// Determine which player, if either, is the winner
int decideWinner(Card &card_one, Card &card_two){
  unsigned int val_one = card_one.getRank();
  unsigned int val_two = card_two.getRank();
  if (val_one > val_two) {
    return 1;
  }
  else if (val_one < val_two) {
    return 2;
  }
  else { // Equal means War
    return 3;
  }
}

// Distribute cards if winner, else take cards for later distribution in war
void actOnWinner(int &win, queue<Card> &player_one, queue<Card> &player_two, stack<Card> &won_cards){
  unsigned int sz = won_cards.size();
  if (win == 1) {
    for (unsigned int i = 0; i < sz; i++) {
      player_one.push(won_cards.top());
      won_cards.pop();
    }
  }
  else if (win == 2) {
    for (unsigned int i = 0; i < sz; i++) {
      player_two.push(won_cards.top());
      won_cards.pop();
    }
  }
  else if (win == 3) { // War!
    for (unsigned int i = 0; i < 3; i++) {
      if (player_one.size() == 0 || player_two.size() == 0) {
        break;
      }
      won_cards.push(player_one.front());
      won_cards.push(player_two.front());
      player_one.pop();
      player_two.pop();
    }
  }
}

// Run a game of War
int runWar(unsigned int limit){
  // fill me in!
  Deck deck;
  queue<Card> player_one;
  queue<Card> player_two;
  distributeCards(deck, player_one, player_two);
  unsigned int counter = 0;
  stack<Card> won_cards;
  while(player_one.size() > 0 && player_two.size() > 0 && counter < limit) {
    Card played_cards[2];
    placeCards(played_cards, player_one, player_two, won_cards);
    Card card_one = played_cards[0];
    Card card_two = played_cards[1];
    int win = decideWinner(card_one, card_two);
    actOnWinner(win, player_one, player_two, won_cards);
    counter++;
  }
  return (int)counter;
}


#endif
