#include <iostream>

using namespace std;

int main()
{
     // Hello World!
     // cout << "Hello! from c++" << endl;

     // Variables and data types
     // int age = 25;
     // float floatNumber = 1.23;
     // double doubleNumber = 2.345;
     // char gender = 'M';
     // bool isCool = true;
     // bool isLame = 1;

     // cout << age << endl
     //      << "Size of " << age << " is " << sizeof(age) << "byte" << endl;
     // cout << floatNumber << endl
     //      << "Size of " << floatNumber << " is " << sizeof(floatNumber) << "byte" << endl;
     // cout << doubleNumber << endl
     //      << "Size of " << doubleNumber << " is " << sizeof(doubleNumber) << "byte" << endl;
     // cout << gender << endl
     //      << "Size of " << gender << " is " << sizeof(gender) << "byte" << endl;
     // cout << isCool << endl
     //      << "Size of " << isCool << " is " << sizeof(isCool) << "byte" << endl;

     // Default values
     // int intNumber;
     // float floatNumber;
     // double doubleNumber;
     // char character;
     // bool isAdult;

     // cout << "Default values:- " << endl;
     // cout << "int " << intNumber << endl
     //      << "float " << floatNumber << endl
     //      << "double " << doubleNumber << endl
     //      << "char " << character << endl
     //      << "bool " << isAdult << endl;

     // Static Arrays
     // int marks[] = {20, 34, 50, 45};

     // char person1[] = {'J', 'a', 'c', 'o', 'b', '\0'};
     // char person2[] = "Johnathan";

     // cout << marks << endl
     //      << "Size of " << marks << " is " << sizeof(marks) << "byte" << endl;
     // cout << person1 << endl
     //      << "Size of " << person1 << " is " << sizeof(person1) << "byte" << endl;
     // cout << person2 << endl
     //      << "Size of " << person2 << " is " << sizeof(person2) << "byte" << endl;

     // cout << marks[0] << endl;

     // int arrayOfInt[10];

     // fill_n(arrayOfInt, 10, -1);

     // for (int i = 0; i < 10; i++)
     //      cout << arrayOfInt[i] << " ";
     // cout << endl;

     int size;

     cout << "Enter the size of array:-" << endl;
     cin >> size;

     float arrayOfFloat[size];

     fill_n(arrayOfFloat, size, 1.1);

     for (int i = 0; i < size; i++)
          cout << arrayOfFloat[i] << " ";
     cout << endl;

     cout << sizeof(arrayOfFloat) / sizeof(float) << endl;

     // cout << "Size of double is " << sizeof(double) << "byte" << endl;

     // string data type
     // string name = "Muhammad";
     // cout << name.length() << endl;
     // cout << name.capacity() << endl;
     // cout << name.append(" Ahmed") << endl;
     // cout << name << endl;
     // cout << name.length() << endl;
     // cout << name.capacity() << endl;
     // cout << name.assign("Mohammad") << endl;
     // cout << name << endl;
     // cout << name.at(1) << endl;
     // cout << name << endl;
     // cout << name.back() << endl;
     // cout << name.length() << endl;
     // cout << name.capacity() << endl;

     // name = "Isa";

     // cout << name << endl;
     // cout << name.length() << endl;
     // cout << name.capacity() << endl;

     // int character = 'a';
     // int intNumber = 123.5;
     // cout << character << endl;
     // cout << intNumber << endl;

     // unsigned int intNumber = INT32_MAX;
     // cout << intNumber << endl;

     // int yourAge;
     // cin >> yourAge;

     // if (yourAge > 18)
     // {
     //      cout << "You are an adult." << endl;
     // }
     // else
     // {
     //      cout << "You are not an adult." << endl;
     // }

     // int firstNumber, secondNumber;

     // cout << "Enter first number:-" << endl;
     // cin >> firstNumber;
     // cout << "Enter second number:-" << endl;
     // cin >> secondNumber;

     // cout << "Sum of " << firstNumber << " and " << secondNumber << " is " << firstNumber + secondNumber << endl;

     // string person1, person2;

     // cin >> person1 >> person2;

     // cout << person1 << " " << person2 << endl;

     // char character;

     // cout << "Enter a character (a-z,A-Z,0-9):-" << endl;
     // cin >> character;

     // // int characterCode = character;
     // int characterCode = int(character);

     // if (characterCode >= 97 && characterCode <= 122)
     // {
     //      cout << "Lower case letter." << endl;
     // }
     // else if (characterCode >= 65 && characterCode <= 90)
     // {
     //      cout << "Upper case letter." << endl;
     // }
     // else if (characterCode >= 48 && characterCode <= 57)
     // {
     //      cout << "Numeric digit." << endl;
     // }
     // else
     // {
     //      cout << "Invalid input.";
     // }

     // int a = 43, b = 2;

     // cout << a << "&" << b << " -> " << (a & b) << endl;
     // cout << a << "|" << b << " -> " << (a | b) << endl;
     // cout << "~" << b << " -> " << ~b << endl;
     // cout << "~" << a << " -> " << ~a << endl;
     // cout << a << "^" << b << " -> " << (a ^ b) << endl;

     // cout << a << "<<" << b << " -> " << (a << b) << endl;
     // cout << a << ">>" << b << " -> " << (a >> b) << endl;

     return 0;
}