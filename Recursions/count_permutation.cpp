#include<bits/stdc++.h>
using namespace std;

bool isvowel(char x){
    char ch = tolower(x);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'; 
}

long long factorial(int val){
    if(val <= 1) return 1;
    return val * factorial(val -1);
}

long long countPermutaion(string nonVowels){
    map<char, int> freq;

    for(char x : nonVowels){
        freq[x]++;
    }

    long long totalpermutaion = factorial(nonVowels.size());

    for(auto x: freq){
        totalpermutaion /= factorial(x.second);
    }
    return totalpermutaion;
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;

    string nonVowels = "";

    for(char c: s){
        if(!isvowel(c)){
            nonVowels += c;
        }
    }

    long long result = countPermutaion(nonVowels);
    cout << "The number of distinct permutations of the string with vowels fixed is: " << result << endl;
    
    return 0;
}