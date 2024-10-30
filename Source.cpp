// Lab8-1 10/24/2024   Gavin Boecker
// Initialized Visual Studio Project


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
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
	
	cout << "Enter a word: ";
	cin >> word;



	cout << endl << "Number of vowels: " << countVowel(word);

	return 0;
}