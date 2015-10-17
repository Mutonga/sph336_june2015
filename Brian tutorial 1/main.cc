#include <iostream>
#include <string> 
#include "pinsecurity.h"
#include "deposit.h"
using namespace std;


int main()
{

pinsecurity pin;
pin.EnterPin();
pin.Login();
pin.conditions();
    return 0;
}
