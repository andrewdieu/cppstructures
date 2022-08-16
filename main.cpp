#include <iostream>

using namespace std;

struct color 
{
    int red;
    int green;
    int blue;
};

void average(color myArray[],int size) {
    int red = 0;
    int green = 0;
    int blue = 0;
    for (int i=0; i<size; i++) {
        red = red + myArray[i].red;
        green = green + myArray[i].green;
        blue = blue + myArray[i].blue;
    }

    red = 1.0 * red / size;
    green = 1.0 * green / size;
    blue = 1.0 * blue / size;
    cout << "(" << red << ", " << green << ", " << blue << ")";
};

int main()
{
    int size;
    cin >> size;
    color *myArray;
    myArray = new color[size];
    for (int i=0; i<size; i++) {
        cin >> myArray[i].red;
        cin >> myArray[i].green; 
        cin >> myArray[i].blue;  
    }

    average(myArray,size);

    delete [] myArray;
    return 0;
}