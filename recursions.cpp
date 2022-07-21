#include <iostream>

using namespace std;


int fact(int a){
    if(a<=1){
        return 1;
    }
    else{
        return (a * fact(a-1));
    }
}

int fibR(int a){
    if(a<=1){
        return 0;
    }
    else if(a==2){
        return 1;
    }
    else{
        return (fibR(a-1)+fibR(a-2));
    }
} 

int fibI(int a){
    int prepre=0, pre=1, temp, current;
    if(a<=1){
        return 0;
    }
    else if(a==2){
        return 1;
    }
    else{
        for(int i = 4; i<=a; i++){
            temp=prepre+pre;
            prepre = pre;
            pre=temp;
        }
    }
    return pre+prepre;
}

int main()
{

    int result = fibI(2);
    cout<<result<<endl;
    return 0;

}