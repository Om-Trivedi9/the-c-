#include <iostream>
#include <string>
using namespace std;


class Animal {
public:
    
    virtual void sound() = 0;
    virtual void move() = 0;


    virtual ~Animal() 
    {
        cout << "thank you for visit................." << endl;
    }
};


class Dog : public Animal {
private:
    string dogSound;
    string dogMove;

public:
    
    Dog(const string& sound, const string& movement) : dogSound(sound), dogMove(movement) {}

    void sound() override {
        cout << "Dog: " << dogSound << endl;
    }

    void move() override {
        cout << "Dog: " << dogMove << endl;
    }
};


class Bird : public Animal {
private:
    string birdSound;
    string birdMove;

public:
    
    Bird(const string& sound, const string& movement) : birdSound(sound), birdMove(movement) {}

    void sound() override {
        cout << "Bird: " << birdSound << endl;
    }

    void move() override {
        cout << "Bird: " << birdMove << endl;
    }
};


int main() {
    string dogSound, dogMove, birdSound, birdMove;


    cout << "Enter the sound a dog makes: ";
    cin >> dogSound;
    cout << "Enter how a dog moves: ";
    cin >> dogMove;

    
    cout << "Enter the sound a bird makes: ";
    cin >> birdSound;
    cout << "Enter how a bird moves: ";
    cin >> birdMove;

    Animal* animals[2];

    
    animals[0] = new Dog(dogSound, dogMove);
    animals[1] = new Bird(birdSound, birdMove);

    
    for (int i = 0; i < 2; i++) {
        animals[i]->sound();
        animals[i]->move();
    }

    
    for (int i = 0; i < 2; i++) {
        delete animals[i];
    }

    return 0;
}