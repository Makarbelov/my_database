#include <iostream>
#include "../include/record.h"
#include "../include/stack.h"

int main() {
    Record chelovek_1;
    Record chelovek_2;
    Record chelovek_3;
    Record chelovek_4;
    chelovek_1.Zapis(18, "Oleg", "8 800 443 38 83");
    chelovek_2.Zapis(22, "Olga", "8 853 974 23 65");
    chelovek_3.Zapis(15, "Mark", "8 566 032 05 23");
    chelovek_4.Zapis(19, "Semen", "8 023 645 53 73");
    Stack stack(10);
    stack.Push(chelovek_1);
    stack.Push(chelovek_2);
    stack.Push(chelovek_3);
    stack.Push(chelovek_4);
}