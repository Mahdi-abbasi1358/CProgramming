#include "KarlstadPerson.h"
#include <iostream>

KarlstadPerson::KarlstadPerson(int id, std::string name, std::string address){
  this->id = id;
  this->name = name;
  this->address = address;
}

KarlstadPerson::~KarlstadPerson() {}

void KarlstadPerson::displayProfile() {
  std::cout << "-----------------------------\n";
  std::cout << "Name: " << name << " ID: " << id 
            << " Address: " << address << "\n";
  std::cout << "-----------------------------\n";
}

void KarlstadPerson::changeAddress(std::string newAddress) {
  this->address = newAddress;
}

