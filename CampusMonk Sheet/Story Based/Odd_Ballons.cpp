/*At a fun fair, a street vendor is selling different colours of balloons. He sells N number of different colours of balloons (B[]). The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.
 Note: If there is more than one colour which is odd in number, then the first colour in the array which is present odd number of times is displayed. The colours of the balloons can all be either upper case or lower case in the array. If all the inputs are even in number, display the message “All are even”. 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Enter the array: ";
    string str;
    getline(cin, str);

    vector<char> vec;
    map<char, int> freq;


    stringstream ss(str);
    char temp;

    while(ss >> temp){
        vec.push_back(temp);
        if(ss.peek() == ','){
            ss.ignore();
        }
    }
    int size= vec.size();

    for(int i=0; i<size; i++){
        char buffer = tolower(vec[i]);
        freq[buffer]++;
    }

    bool even = true;
    for(int i=0; i<size; i++){
        char temp1=tolower(vec[i]);
        if(freq[temp1] %2 != 0){
            cout<<vec[i]<<" ";
            even= false;
            break;
        }
    }
    if(even){
        cout<<"ALL ARE EVEN";
    }
    return 0;
}