#include <iostream>
#include <sstream>
using namespace std;
class Persona{
private:
    int edad;
    string nombre;
    string id;
public:
    Persona(int = 0, string = "", string ="");
    ~Persona() = default;
    string toString();
};