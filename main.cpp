#include "BookingSystem.h"
#include <iostream>

int main() {
  cout << endl << "Test #1" << endl;

  BookingSystem bookingSystemA;
  bookingSystemA.PrintReport();

  cout << endl << "Test #2" << endl;
  BookingSystem bookingSystemB("GamesCon 2022 Laptops", 200, 200);
  for (int i = 0; i < 5; i++) {
    bookingSystemB.RentWindowsLaptop();
    bookingSystemB.RentMacBook();
  }
  bookingSystemB.ReturnWindowsLaptop();
  bookingSystemB.PrintReport();

  cout << endl << "Test #3" << endl;

  BookingSystem bookingSystemC("Confused Shop", 10, 5);
  for (int i = 0; i < 20; i++) {
    bookingSystemC.RentWindowsLaptop();
    bookingSystemC.RentMacBook();
  }
  bookingSystemC.ReturnWindowsLaptop();
  bookingSystemC.ReturnMacBook();
  bookingSystemC.PrintReport();

  cout << endl << "Test #4" << endl;

  BookingSystem CarlosB("Carlos", 30, 30);
  CarlosB.addMacBooks(10);
  CarlosB.removeMacBooks(5);
  CarlosB.addWindowsLaptops(5);
  CarlosB.removeWindowsLaptops(5);

  for (int i = 0; i < 5; i++) {
    CarlosB.RentWindowsLaptop();
    CarlosB.RentMacBook();
  }
  CarlosB.PrintReport();

  //testcase 9
  //int testcase9() {
    BookingSystem bookingSystem("Test",10,10);
    for(int i=0; i<5;i++){
     bookingSystem.RentWindowsLaptop();
      bookingSystem.RentMacBook();
  }  
   bookingSystem.removeWindowsLaptops(5);
     bookingSystem.removeMacBooks(10);
     bookingSystem.addWindowsLaptops(25);
  
     bookingSystem.addMacBooks(30);

    
       bookingSystem.PrintReport();


  return 0;
  }
