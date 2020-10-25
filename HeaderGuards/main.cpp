#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main(){

  const int NUMBER_OF_CARDS = 52;

  int deck[NUMBER_OF_CARDS];

  string suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};

  string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9",

    "10", "Jack", "Queen", "King"};

  // Initialize cards

  for (int i = 0; i < NUMBER_OF_CARDS; i++)

    deck[i] = i;

  // Shuffle the cards
  // Generate an index randomly -- is done with temp = deck[i]
  //YOUR CODE
    srand(time(0)); 
    for (int i=0; i < NUMBER_OF_CARDS;i++) 
    {  
      int random = (rand() % (52));

      int temp = deck[i];
      deck[i] = deck[random];
      deck[random] = temp;
  
    }

  // Display the first four cards
  for(int i= 0; i < 4; i++){
    //display cards
    string random = (ranks[rand() % 5]);
    string rand2 = (suits[rand() % 5]);

    // we need to figure out how to display the suit and rank now we have the 4 cards 
    cout << random << " of " << rand2  << endl;    
  }
  return 0;
  
}