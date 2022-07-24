#include <iostream>
#include <string>
using namespace std;

class Binary{
    string s;// private by default
    void chk_bin(void);

    public:
        void read(void);
        // void chk_bin(void);
};

void Binary :: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
    chk_bin();// nesting
}

void Binary :: chk_bin(void){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"not a binary!"<<endl;
            exit(0);
        }
    }
    cout<<"a binary!"<<endl;
}

int main()
{
    Binary b;
    b.read();
    // b.chk_bin();// only if public
    return 0;
}