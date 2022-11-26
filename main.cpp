#include <iostream>
#include <vector>
#include <string>

#include "whattotest.h"
 
using namespace std;

 int main ()
 { 
    
    WidgetWithArrays  widget1;
    widget1.storeInteger(1);
    widget1.storeInteger(3);
    int sum1 = widget1.sum();
    cout << "sum1:"<<sum1 << " ";

    cout << "sum1:"<<sum1 << " ";

    vector<string> msg {"Hello", "C++ fdjk dkjd dka", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

}
