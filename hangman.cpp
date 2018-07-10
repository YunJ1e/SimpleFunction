// hangman.cpp
// Hangman game illustrates string library functions, 
// character arrays, arrays of pointers, etc.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

// Prototype. we'll define this below.
int processGuess(char* word, const char* targetWord, char guess);
void blockWord(char*,int);
void unblockWord(char* word, const char* targetWord, char guess);
void display(char*);
// Define an array of strings (since a string is just a char array)
//  and since string are just char *'s, we really want an array of char *'s
const char* wordBank[] = {"computer", "president", "trojan", "program",
			"coffee", "library", "football", "popcorn", 
			"science", "engineer"};
const int numWords = 10;

int main()
{
	srand(time(0));
	char guess;
	bool wordGuessed = 0; // The word is completely guessed or not
	int numTurns = 10;

	// Pick a random word from the wordBank
	const char* targetWord = wordBank[rand() % numWords];
	// A blank array to use to build up the answer
	// It should be initialized with *'s and then change them to the actual letters
	// when the user guesses the letter
	
	char word[80];
	blockWord(word,strlen(targetWord));

	// An individual game continues until a word
	// is guessed correctly or 10 turns have elapsed
	while(numTurns > 0 && wordGuessed == 0){
		cout << "Current word: " << endl;
		display(word);
		cout << endl;
		cout << numTurns << " remain...Enter a letter to guess:" << endl;
		cin >> guess;

		if(processGuess(word,targetWord,guess) > 0){
			unblockWord(word,targetWord,guess);
			if(strcmp(word,targetWord) == 0){
				wordGuessed = 1; // If the user get the whole word, this will end the while loop
			}
		}
		else{
			numTurns--;  // The correct guess wont decrease the turn the player has
		}
	}

	// Print out end of game status

	if(wordGuessed == 1){
		cout << "The word was: ";
		display(word);
		cout << ". You win!" << endl;
	}
	else if(wordGuessed == 0){
		cout << "Too many turns...You lose!" <<endl;
	}

	return 0;
}

// Given the current version of the word, target/selected word, and
// the character that the user just guessed, change the word to 
// "turn on" any occurrences the guess character and return a count
// of how many occurrences of 'guess' were found
int processGuess(char* word, const char* targetWord, char guess)
{
	int count = 0;
	for(int i=0; i<strlen(targetWord); i++){
		if(guess == targetWord[i]){
			count++;
		}
	}
	return count;
}

void blockWord(char* word,int length)
{
	for(int i=0; i< length; i++){
		word[i] = '*';
	}
	word[length] = '\0';
}

void unblockWord(char* word, const char* targetWord, char guess)
{

	for(int i=0; i<strlen(targetWord); i++){
		if(guess == targetWord[i]){
			word[i] = targetWord[i];
		}
	}
}

void display(char* word)
{
	int length = strlen(word);
	char* temp = new char[length+1];
	strncpy(temp,word,length);
	int i = 0;
	while(temp[i] != '\0'){
		cout << temp[i];
		i++;
	}
	delete[] temp;
}