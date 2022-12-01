#ifndef KARLSTAD_PERSON_H
#define KARLSTAD_PERSON_H

#include <string>

class KarlstadPerson {

 protected:

  int id;
  std::string name;
  std::string address;
  
 public:
  
  KarlstadPerson(int id, std::string name, std::string address);
  virtual ~KarlstadPerson();
  
  virtual void displayProfile();
  void changeAddress(std::string newAddress);

};

#endif
