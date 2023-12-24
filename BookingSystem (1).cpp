#include "BookingSystem.h"
#include<string>
#include<iostream>
#include<iomanip>

using namespace std;

//grtLaptops= get total rented laptops= grMacBooks+grmacBooks
//grLaptops=get rented Windows Laptops= the number of rented laptops
//grMacBooks=get rented Mac Books= the number of rented Mac Books
//gaLaptops=get total available laptops


BookingSystem::BookingSystem(){
//Private
//initialising
name="Trinity Laptop Bookings";
totalWindowsLaptops=20;
totalMacBooks=20;
availableWindowsLaptops=totalWindowsLaptops;
availableMacBooks=totalMacBooks;

}

BookingSystem::BookingSystem(string name, int totalWindowsLaptops, int totalMacBooks){
this->name=name.substr(0,64);//subclass- 0 to 64 char.(code requirement)
this-> availableWindowsLaptops=max(0,totalWindowsLaptops);
this->availableMacBooks=max(0,totalMacBooks);
this->totalWindowsLaptops=max(0,totalWindowsLaptops);
this->totalMacBooks=max(0,totalMacBooks); 

  }

bool BookingSystem::RentWindowsLaptop(){
if(availableWindowsLaptops>0){
  availableWindowsLaptops=availableWindowsLaptops-1;
  return true;
}
  else{
    return false;
  }
}
bool BookingSystem:: RentMacBook(){
  if(availableMacBooks > 0){
  availableMacBooks=availableMacBooks-1;
  return true;
}
  else{
    return false;
  }
}

void BookingSystem:: ReturnWindowsLaptop(){
availableWindowsLaptops=availableWindowsLaptops+1;
}
void BookingSystem::ReturnMacBook(){
  availableMacBooks=availableMacBooks+1;
}
string BookingSystem:: getName()  {
  return name;
}
unsigned int BookingSystem::getTotalWindowsLaptops() {
  return totalWindowsLaptops;
}
unsigned int BookingSystem::getTotalMacBooks(){ 
  return totalMacBooks;
}
unsigned int BookingSystem::getAvailableWindowsLaptops() {
  return availableWindowsLaptops;
}
unsigned int BookingSystem::getAvailableMacBooks() {
  
  return availableMacBooks;
}
unsigned int BookingSystem::getAvailableLaptops(){
  unsigned int gaLaptops;
  gaLaptops=availableWindowsLaptops+availableMacBooks;
  return gaLaptops;
}
unsigned int BookingSystem::getRentedWindowsLaptops(){
  unsigned int grWindowsLaptops=totalWindowsLaptops-availableWindowsLaptops;
  return grWindowsLaptops;
}
unsigned int BookingSystem::getRentedMacBooks(){
 unsigned  int grMacBooks;
  grMacBooks=totalMacBooks-availableMacBooks;
  return  grMacBooks;
}
unsigned int BookingSystem::getRentedLaptops(){
unsigned  int  grtLaptops;
  grtLaptops=getRentedMacBooks()+getRentedWindowsLaptops();
  return grtLaptops;
}

void BookingSystem::addWindowsLaptops (unsigned  additionalWindowsLaptops) //the initial values of total & available laptops arent const.
{
  // if(additionalWindowsLaptops+availableWindowsLaptops>=0){
  //   available 
  // }
   if(additionalWindowsLaptops>=0)
  {
    this->totalWindowsLaptops+=additionalWindowsLaptops;
this->availableWindowsLaptops+=additionalWindowsLaptops;
 }
  
}

void BookingSystem::addMacBooks(unsigned additionalMacBooks){
  
 if(additionalMacBooks>=0){
  this->availableMacBooks+=additionalMacBooks;
 this->totalMacBooks+=additionalMacBooks;

}
  
}

void BookingSystem::removeWindowsLaptops(unsigned int removedWindowsLaptops) {
 int nrtotalWindowsLaptops,nravailableWindowsLaptops;
  // nrtotalWindowsLaptops=new removed total Windows Laptops
  nravailableWindowsLaptops=availableWindowsLaptops-removedWindowsLaptops;
    nrtotalWindowsLaptops=totalWindowsLaptops-removedWindowsLaptops;
  
  if(removedWindowsLaptops<=nravailableWindowsLaptops){
    availableWindowsLaptops=availableWindowsLaptops-removedWindowsLaptops;
    totalWindowsLaptops=totalWindowsLaptops-removedWindowsLaptops;
  }
    else{
      totalWindowsLaptops=totalWindowsLaptops-availableWindowsLaptops;
           availableWindowsLaptops=0;

    }
  }

void BookingSystem::removeMacBooks(unsigned int removedMacBooks){
   int nravailableMacBooks,nrtotalMacBooks;
  // nravailableWindowsLaptops=new removed available Mac Books
  nravailableMacBooks=availableMacBooks-removedMacBooks;
    nrtotalMacBooks=totalMacBooks-removedMacBooks;
  if(removedMacBooks<=availableMacBooks){
    availableMacBooks=availableMacBooks-removedMacBooks;
    totalMacBooks=totalMacBooks-removedMacBooks;
  }
   else{
      totalMacBooks=totalMacBooks-availableMacBooks;
      availableMacBooks=0;

   }
  }



void BookingSystem::PrintReport(){
  cout<<"---------------------"<<endl<<"Laptop Booking System"<<endl<<"---------------------"<<endl;
  cout<<"Name                      : "<<getName()<<endl;
  cout<<"Total Windows Laptops     : "<<getTotalWindowsLaptops()<<endl;
  cout<<"Total MacBooks            : "<<getTotalMacBooks()<<endl;
  cout<<"Rented Windows Laptops    : "<<getRentedWindowsLaptops()<<endl;
  cout<<"Rented MacBooks           : "<<getRentedMacBooks()<<endl;
  cout<<"Rented Laptops            : "<<getRentedLaptops()<<endl;
  cout<<"Available Windows Laptops : "<<getAvailableWindowsLaptops()<<endl;
  cout<<"Available MacBooks        : "<<getAvailableMacBooks()<<endl;
  cout<<"Available Laptops         : "<<getAvailableLaptops()<<endl;

}
