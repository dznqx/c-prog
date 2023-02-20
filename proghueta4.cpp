#include <iostream>
#include <cstdlib>

using namespace std;

void Binary(unsigned short int numder)
{
unsigned short int temp;
for(temp=32768; temp>0; temp=temp/2)
{
if (temp&numder) 
{
cout<<"1";
}
else
{
cout<<"0";
}
}
 
}

int main(){
    int x = 35;
    char buffer[33];
    while (x<42){

        cout << "hex: ";
        cout << std::hex << x << " ";

        cout << "oct: ";
        cout << std::oct << x << "    ";

        
        cout << " dec:" << "  ";
        Binary(x);
        cout << "\n" << endl;
        x++;
    }

}