#include "stdafx.h"

using namespace System;

ref class Animal
 {
public:
    int legs;

    void Setname(String ^nm)
    { name = nm; }

    String^ GetName() { return name; }
private:
    String ^name;
 };

 int main(array<System::String ^>args)
 {
     Animal cat, dog;

     cat.SetName("Cat");
     cat.legs = 4;
     dog.SetName("Dog");
     dog.legs = 4;
     Console::Writeline("Animal 1");
     Console::Write("Name:    ");
     Console::WriteLine(cat.Getname());
     Console::Write("Legs:    ");
     Console::WriteLine(cat.legs);
     Console::WriteLine();
     Console::WriteLine("Animal 2");
     Console::Write("Name:     ");
     Console::WriteLine(dog.GetName());
     Console::Write("Legs:     ");
     Console::WriteLine(dog.legs);
     Console::WriteLine();
    return 0;
 }

