//this program is done by jayanth
#include <iostream>
#include <string.h>
#define MAX_SIZE 100
using namespace std;
int main()
{
    char string[MAX_SIZE];
    int specialchars, i;
 
    specialchars = i = 0;
 
    cout<<"Enter any string: ";
    cin>>string;
 
     while(string[i]!='\0')
    {
        if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
        {
            specialchars++;
        }
 
        i++;
    }
    cout<<"Total Special characters: "<<specialchars<<endl;
 
}