#include <iostream>
#include <string>
#include <set>
using namespace std;

int longest_word(const string &S) {
    set<char> vowels = {'A', 'E', 'I', 'O', 'U'};
    set<char> consonants = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z'};
    char y = 'Y';
    int ng_count = 0;
    int consonant_count = 0;
    int vowel_count = 0;
    int y_count = 0;
    for (size_t i = 0; i < S.size() - 1; ++i) {
        if (S[i] == 'N' && S[i + 1] == 'G') {
            ng_count++;
            i++;
        }
    }
    for (char c : S) {
        if (vowels.count(c)) {
            vowel_count++;
        } else if (consonants.count(c)) {
            consonant_count++;
        } else if (c == y) {
            y_count++;
        }
    }

    
    consonant_count += ng_count;

    
    int total_consonants = consonant_count + y_count;
    int total_vowels = vowel_count + y_count;

    
    int syllables = min(total_consonants / 2, total_vowels);
    return syllables > 0 ? syllables * 3 : 0;
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {   
        string S = "ABCDYENGYIOUYNG";
        cout << longest_word(S) << endl;  
        return 0;
    }
}
