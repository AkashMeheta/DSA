#include<iostream>
#include<vector>
using namespace std;


bool sufficient(int rats, int food, vector<int> houses){
    int required_food = rats*food;

    int sum = 0;
    for(int i=0; i<houses.size(); i++){
        sum += houses[i];
    }

    if(sum>required_food){
        return true;
    }else{
        return false;
    }
}



int main(){
    int rats;
    int food;
    int number_of_houses;
    vector<int> food_in_houses;

    cout<<"rats: ";
    cin>>rats;

    cout<<"foods: ";
    cin>>food;

    cout<<"Number of Houses: ";
    cin>>number_of_houses;

    for(int i=0; i<number_of_houses; i++){
        int temp;
        cin>>temp;

        food_in_houses.push_back(temp);
    }
    cout << "The house array are: ";
    for (int i = 0; i < food_in_houses.size(); i++){
        cout << food_in_houses[i] << " ";
    }
    cout <<endl;

    bool result = sufficient(rats, food, food_in_houses);

    if(result){
        cout<<"Sufficients";
    }else{
        cout<<"Not Sufficients";
    }
    

    return 0;
}
