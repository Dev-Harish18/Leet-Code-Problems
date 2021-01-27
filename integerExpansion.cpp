#include<iostream>
#include<map>
using namespace std;

//Hash Maps
map<int,string> ones={{1,"one"},
                          {2,"two"},
                          {3,"three"},
                          {4,"four"},
                          {5,"five"},
                          {6,"six"},
                          {7,"seven"},
                          {8,"eight"},
                          {9,"nine"},
                          {0,"zero"}};
map<int,string> tens={{2,"twenty"},
                          {3,"thirty"},
                          {4,"forty"},
                          {5,"fifty"},
                          {6,"sixty"},
                          {7,"seventy"},
                          {8,"eighty"},
                          {9,"ninety"}};
map<int,string> spl= {{1, "eleven"},
                          {2, "twelve"},
                          {3,"thirteen"},
                          {4,"fourteen"},
                          {5,"fifteen"},
                          {6,"sixteen"},
                          {7,"seventeen"},
                          {8,"eighteen"},
                          {9,"nineteen"}};

string expTwoDigit(int n){
        int quotient=n/10,remainder=n%10;
        string result;
        if(n/10==1){
            if(n%10!=0)
                result=spl[remainder];
            else
                result="ten";
        }
        else
            result=(remainder!=0)?tens[quotient]+" "+ones[remainder]:tens[quotient];
        return result;
}

string expandInt(int n){
    string str;
    int quotient,remainder;
    
    //One digit
    if(n<10)
        str=ones[n];
    //Two digits
    else if(n>=10 && n<=99)
        str=expTwoDigit(n);
    //Three digits
    else{
        int hundreds=n/100,remainder=n%100;
        str=ones[hundreds]+" hundred";
        if(remainder==0)
            return str;
        if(remainder<9)
            str+=" and "+ones[remainder];
        else
            str+=" and "+expTwoDigit(remainder);
    }   
    return str;
}

int main(){
    int n=110;
    cout<<expandInt(n);
}