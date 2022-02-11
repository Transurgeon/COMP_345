#include "../Header Files/Cards.h"

Card::Card() {

}

Card::Card(const Card& copy) {
	type = copy.type;
}

Card& Card::operator =(const Card& copy) {
	type = copy.type;
	return *this;
}

void Card::play() {

}

string* Card::getCardType()
{
	return *type;
}

Card::~Card() {
	delete Card;
	Card = null;
}

ostream& operator<<(ostream& output, const Card& c) {
	
	output << " This cards type is " << c.getCardType() << endl;
    return output;
	
}

Deck::Deck() {

}

Deck::Deck(const Deck& copy) {
	deck = copy.deck;
}

Deck& Deck::operator =(const Deck& copy) {
	deck = copy.deck;
	return *this;
}

void Deck::draw() {

}

vector<Card>* Deck::getDeck()
{
	return *deck;
}

Deck::~Deck() {
	delete deck;
	deck = null;
}

ostream& operator<<(ostream& output, const Deck& d) {
	
	output << " This deck consists of " << d.getDeck() << endl;
	return output;
	
}

Hand::Hand() {

}

Hand::Hand(const Hand& copy) {
	hand = copy.hand;
}
Hand& Hand::operator =(const Hand& copy) {
	hand = copy.hand;
	return *this;
}

vector<Card>* Hand::getHand()
{
	return *hand;
}

Hand::~Hand() {
	delete hand;
	hand = null;
}

ostream& operator<<(ostream& output, const Hand& h) {
	
	output << " This hand consists of " << h.getHand() <<  endl;
	return output;
	
}