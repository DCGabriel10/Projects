#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// void printable(char character){

//  bool print = isprint(character);
//  if(print){
//      bool digit = isdigit(character);
//     if(digit){
//         cout << "It is printable and digit."<< endl;
//      }else{
//          cout << "It is printable"<< endl;
//      }
//  }else{
//      cout << "It is not printable" << endl;
//  }
// }

// void sinlog(double number1, double number2){
//     double snum1 = sin(number1);
//     double snum2 = sin(number2);
//     double s_sum = snum1 + snum2;
//     double log = log2(s_sum);
//     cout << snum1 << endl;
//     cout << snum2 << endl;
//     cout << log << endl;
// }

// void startWithA(string input){
//     int position_of_low = input.find("a");
//     int position_of_up = input.find('A');
//     if(position_of_low == 0 || position_of_up == 0){
//         cout << "Starts with A" << endl;
//     }else{
//         cout << "Doesn’t start with A" << endl;
//     }
// }

// int main(){
    
//     printable(23);
//     cout << " " << endl;
//     sinlog(45,83);
//     cout << " " << endl;
//     startWithA("apple");
// }

void maxRoundedValue(double first, double second) {
    double max = fmax(first,second);
    double roundMax= round(max);
    cout << "The maximum rounded value is: "<< roundMax << endl;
    
    //YOUR CODE GOES HERE
};
int main(){
   maxRoundedValue(890.992, 891.3);
}