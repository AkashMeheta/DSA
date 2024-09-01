#include <bits/stdc++.h>
using namespace std;


void reverse_words(string str)
{

    int size = str.size();
    string word = "";
    vector<string> vec;

    string res = "";

    //split words
    for (int i = 0; i < size; i++)
    {
        if (str[i] == ' ')
        {
            if(word != ""){
                vec.push_back(word);
            } 
            word = "";
        }
        else if (i == (size - 1))
        {
            vec.push_back(word + str[i]);
            word = "";
        }
        else
        {
            word += str[i];
        }
    }

    //make the reverse string
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        if (vec[i] != "" || vec[i] == " ")
        {
            res += vec[i];
            if (i > 0)
            {
                res += " ";
            }
        }
    }

    cout << res << " " << res.length();

}



int main()
{

    string str;
    getline(cin, str);

    reverse_words(str);
    

    return 0;
}