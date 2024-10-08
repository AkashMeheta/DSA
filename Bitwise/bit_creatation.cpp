#include<bits/stdc++.h>
using namespace std;

string reverse(string str){
    string rev_str;
    for(int i = str.size()-1; i>=0; i--){
        rev_str += str[i];
    }
    return rev_str;
}

void bin_to_dec(int dec){
    int dec_value=0;
    int base = 1;
    while(dec){
        int last_digit = dec%10;
        dec = dec /10;

        dec_value += last_digit * base;
        base = base * 2;
    }

    cout<<"Binary to Dec "<<dec_value<<endl;
}

int dec_to_bin(int dec){
    string str;
    while(dec){
        if(dec & 1){
            str+='1';
        }else{
            str+='0';
        }
        dec>>=1; 
    }
    string bin_str = reverse(str);
    cout<<"Decimal to Binary: "<<bin_str<<endl;
    int bin = stoi(bin_str);
    return bin;
}

void new_dec_to_bin(int dec){
    string res = "";
    while(dec){
        if(dec%2 == 1){
            res+="1";
        }else{
            res+='0';
        }
        dec = dec/2;
    }
    string str = reverse(res);
    cout<<str;
}


int main(){ 

    int dec;
    cout<<"Decimal Number: ";
    cin>>dec;

    new_dec_to_bin(dec);
    //bin_to_dec(bin);

    int bin = dec_to_bin(dec);

    cout<<(13 | 7);
    return 0;
}