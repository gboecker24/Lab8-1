// Lab8-1 10/24/2024   Gavin Boecker
// Initialized Visual Studio Project


#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;


int countVowel(string str) {
	
	int length = str.length();
	int vowels = 0;
	
	for (int i = 0; i < length; i++)
	{
		char letter = str[i];

		if (letter == 'a' || letter == 'A' || letter == 'E' || letter == 'e' || letter == 'O' || letter == 'o' || letter == 'I' || letter == 'i' || letter == 'U' || letter == 'u'){
			vowels++;
			
		}

	}
	return vowels;
}


int main(){
	
	string word;
	
	cout << "Enter a string or Q to quit: ";
	getline (cin,word);

	if ( word == "Q") {
		return 0;
	}

	cout << endl << "Vowel count: " << countVowel(word);

	return 0;
}