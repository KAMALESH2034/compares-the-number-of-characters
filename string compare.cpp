#include <iostream>
#include <cstring>

using namespace std;

void countLetters(char sentence[], int letterCount[]) {
    int len = strlen(sentence);
    for(int i=0; i<len; i++) {
        char c = sentence[i];
        if(c >= 'a' && c <= 'z') {
            letterCount[c - 'a']++;
        }
        else if(c >= 'A' && c <= 'Z') {
            letterCount[c - 'A']++;
        }
    }
}

int main() {
    char sentence1[100], sentence2[100];
    int letterCount1[26] = {0}, letterCount2[26] = {0};
    
    cout << "Enter first sentence: ";
    cin.getline(sentence1, 100);
    cout << "Enter second sentence: ";
    cin.getline(sentence2, 100);

    countLetters(sentence1, letterCount1);
    countLetters(sentence2, letterCount2);

    for(int i=0; i<26; i++) {
        if(letterCount1[i] != letterCount2[i]) {
            cout << "Letter " << (char) (i+'a') << " count is not equal in both sentences." << endl;
        }
    }

    return 0;
}
