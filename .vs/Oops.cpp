#include <iostream>
#include <cstring> // Include the header for strcpy function
using namespace std;

class Hero {
public:
    int health;
    char* name;

    // Constructor with default values
    Hero() : health(0), name(nullptr) {
    }

    // Constructor with health parameter
    Hero(int health, const char* name) : health(health) {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    // Destructor to free memory
    ~Hero() {
        delete[] name;
    }

    void print() {
        cout << "Name: " << this->name << endl;
        cout << "Health: " << this->health << endl;
    }

    int getHealth() {
        return health;
    }

    void setName(const char* name) {
        delete[] this->name; // Free existing memory
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    void setHealth(int h) {
        this->health = h;
    }
};

int main() {
    Hero h1(12, "Om"); // Object creation with health and name
    h1.print();
    
    return 0;
}
