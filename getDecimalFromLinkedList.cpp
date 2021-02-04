#include<iostream>
using namespace std;

int getDecimalValue(LinkedList *head){

    LinkedList *temp=head;
    int decimal=0,count=0;
    while(temp){
        decimal=decimal*(pow(2,count)) + temp->val;
        temp=temp->next;
    }
    return decimal;
}