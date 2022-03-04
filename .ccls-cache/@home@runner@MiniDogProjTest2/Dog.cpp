#include "Dog.hpp"
#include <iostream>
using namespace std;


Dog::Dog(string n) {
  name = n;  /* basic dog properties */
  strength = 50;
  x = 0;
  y = 0;
}

Dog::Dog() {
  name = "Fluffy";
  strength = 50;
  x = 0;
  y = 0;
}

bool Dog::changeStrength(int amt) {
  name = "Fluffy";
  strength = strength + amt;
  if(strength <=0) {
    die();
    return false;
  }
  return true;
}

void Dog::die() {
  cout << "ACK!! You made the dog die and you are a heartless, helpless person!" << endl; 
}

void Dog::printDog(){
  cout << "Name: " << name << endl;
  cout << "Current Strength: " << strength << endl;
}

void Dog::won() {
  cout << "Congrats! You successfully made your dog escape the evil forest" << endl;
}

void Dog::reset() {
  strength = 50;
  x = 0;
  y = 0;
}
