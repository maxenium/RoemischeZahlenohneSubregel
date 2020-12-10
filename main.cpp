//
//  main.cpp
//  RoemischeZahlenohneSubregel

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {

    int eingabe;
    
    while (true) {
    
    cin >> eingabe;
    
    if (eingabe > 3999) {
        cout << "Die eingebene Zahl wird von diesem Programm nicht unterstützt, da sie zu groß ist! ";
    }
    
    int restzahl = eingabe;
    string ausgabe;
    //Solange die entsprechende Römische Zahl an den Ausgabestring anhängen wie es möglich ist.
    for (;restzahl>=1000;){
            ausgabe = ausgabe + "M";
            restzahl = restzahl - 1000;
    }
    for (;restzahl>=500;){
            ausgabe = ausgabe + "D";
            restzahl = restzahl - 500;
    }
    for (;restzahl>=100;){
            ausgabe = ausgabe + "C";
            restzahl = restzahl - 100;
    }
    for (;restzahl>=50;){
            ausgabe = ausgabe + "L";
            restzahl = restzahl - 50;
    }
    for (;restzahl>=10;){
            ausgabe = ausgabe + "X";
            restzahl = restzahl - 10;
    }
    for (;restzahl>=5;){
            ausgabe = ausgabe + "V";
            restzahl = restzahl - 5;
    }
    for (;restzahl>=1;){
            ausgabe = ausgabe + "I";
            restzahl = restzahl - 1;
    }
    
    cout << ausgabe << endl;
    
    }
}

