#include <iostream>
#include <algorithm>


using namespace std;

// You did not mention what's going to happen if the user enter 1 as the size of the array. Therefore, I submit this version that does operate when user inputs 1
double median(int n[], int size);
int main()
{   int amountOfElements;

    cout << "Lab 6 Calculate the Median of an Array" << endl;
    cout << "--------------------------------------" << endl;

do{cout << "Array size (maximum size is 10)? ";
    cin >> amountOfElements;
    cin.clear();
    cin.sync();

if(amountOfElements>=1 && amountOfElements <= 10){
     int arrayOfInt[amountOfElements];

     cout << "Array contents? ";

   for(int i = 0; i<=amountOfElements-1; i++){
        cin >> arrayOfInt[i];
    }
    sort(arrayOfInt, arrayOfInt + amountOfElements);

    cout << "Median of the array {";
    for(int c = 0; c < amountOfElements; c++){
        ((c+1!=amountOfElements)? (cout<<arrayOfInt[c]<< ",") : (cout<<arrayOfInt[c]));
    }
    cout << "} is " << median(arrayOfInt, amountOfElements) << "\n" << endl;
}

else{
    if(amountOfElements<=0){
            if(amountOfElements==0){
                break;
            }
            else{
        cout << "Size cannot be negative.";
            }
    }
   else{
        (cout << "Size cannot be greater than 10.");
   }
   cout << endl;
}
    cin.clear(); // to clean the cin
    cin.sync();

    }while(amountOfElements!=0);

    return 0;
}

double median(int n[], int size){
    if(size%2==1){
       return static_cast<double>(n[(size/2)]);
    }
    else{
       return (static_cast<double>(n[(size/2-1)]) + static_cast<double>(n[(size/2)]))/2;
    }

}
