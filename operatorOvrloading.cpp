#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int real=0,int img=0){
        this->real=real;
        this->img=img;
    }
    void displayObj(){
        cout<<real<<"+i"<<img;
    }
    int getImg(){
        return img;
    }
    int getReal(){
        return real;
    } 
    void increment(){
        real++;
        img++;
    }
    friend ostream& operator<<(ostream& out,Complex C);
};

ostream& operator<<(ostream& out,Complex C){
    C.increment();
    out<<C.getReal()<<"+i"<<C.getImg();
    return out;
}
int main(){
    Complex c(15,8);
    cout<<c<<endl;
    c.displayObj();
}
