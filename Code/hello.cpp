#include<iostream>

using namespace std;

class Box
{
public:
    int length;
    int wight;
    int high;
    int get(void);
    void set (int len,int wig,int hig);

};

int Box::get(){
    return length+high+wight
}
void Box::set(int len,int wig,int hig){
    length = len;
    wight = wig;
    high = hig;
}

int main(){
    Box box;
    box.set(1,2,3);
    cout<<box.get()<<endl;
    system("pause");
    return 0;
}