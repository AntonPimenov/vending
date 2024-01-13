#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"

using namespace std;



int main()
{
    Snack *bounty = new Snack("Bounty");
    //cout << bounty->getName() << "\n";

    Snack *snickers = new Snack("Snickers");
    //cout << snickers->getName() << "\n";

    SnackSlot *slot = new SnackSlot(10);
    slot->addSnack(bounty);     //Добавляем батончик в слот
    slot->addSnack(snickers); 
    

    

    VendingMachine* machine = new VendingMachine(5);
    machine->addSlot(slot); // Помещаем слот обратно в аппарат
    machine->show();
    
    cout << machine->getEmptySlotsCount() << "\n"; // Должно выводить количество пустых слотов для снеков
    
    delete machine;
    delete slot;
    delete snickers;
    delete bounty;
}
