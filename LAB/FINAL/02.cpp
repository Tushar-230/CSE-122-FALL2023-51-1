#include<iostream>
using namespace std;

class fraction {
public:
    int numerator;
    int denominator;

  fraction()
  {
      numerator=0;
      denominator=1;
  }

    fraction(int x, int y) {
        numerator=x;
        denominator=y;


    }

    void reduce()  {
        int pri =(abs(numerator), denominator);
        int red1 = numerator / pri;
        int red2 = denominator / pri;

        cout << red1 << "/" << red2 << endl;
    }

    fraction operator+(fraction&ano) {
        fraction res;
        res.numerator=numerator*ano.denominator+ano.numerator*denominator;
        res.denominator=denominator*ano.denominator;

        cout <<"New fraction"<<endl;
        res.reduce();

        return res;
    }

    void str() {
        if (numerator!=0&&denominator!=0) {
            cout<<numerator<<"/"<<denominator<<endl;
        }
    }
};

int main() {
    fraction obj(100,500);
    fraction ano=obj;
    fraction add=obj+ano;

}
