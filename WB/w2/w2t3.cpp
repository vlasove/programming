// #include <iostream>
#include <string>
#include <vector>

// using namespace std;

bool IsPalindrom(string origin)
{
    string sample;
    for (int i = origin.size() - 1; i >= 0; i--)
    {
        sample += origin[i];
    }
    return (sample == origin);
}

vector<string> PalindromFilter(vector<string> words, int minLength){
    vector<string> sample;
    for (auto word : words){
        if(IsPalindrom(word) && word.size() >= minLength){
            sample.push_back(word);
        }
    }
    return sample;
}

// int main() {

    
//     return 0;
// }