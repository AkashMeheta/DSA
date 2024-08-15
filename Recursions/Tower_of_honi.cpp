#include <bits/stdc++.h>
using namespace std;


void tower(int num, string src, string dest, string help){
    if(num == 0){
        return;
    }
    tower(num-1, src, help, dest);
    cout<<"Move From "<<src<<" to "<<dest<<endl;
    tower(num-1, help, dest, src);

}



int main(){
    tower(3, "A", "B", "C");
    return 0;
}
