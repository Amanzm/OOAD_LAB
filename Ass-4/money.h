#ifndef MONEY_H
#define MONEY_H


class Money {
public:
    Money(); 
    Money(int dollars, int cents); 

    // Overloaded operators
    Money operator+(const Money& other) const;
    Money operator-(const Money& other) const;

    // Getter functions
    int getDollars() const;
    int getCents() const;

    // Display function
    void display() const;

private:
    int dollars;
    int cents;
};

#endif // MONEY_H
