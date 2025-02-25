#include <iostream>
using namespace std;

int main() {
    int x;
    for (x=0;x<6;x++){
        if(x==1) cout<<"X es = 1"<<endl;
        else if (x==2) cout<<"X es = 2"<<endl;
        else if (x==3) cout<<"X es = 3"<<endl;
        else if (x==2) cout<<"X es = 4"<<endl;
        else cout<<"X no esta entre 1 y 4"<<endl;
    }
    return 0;
}
