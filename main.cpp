#include <iostream>
using namespace std;

class Rectangle
{
private:
double width;
double length;

public:
Rectangle(){width = 0; length = 0;}

Rectangle(double w, double l){width = w; length = l;}

void setWidth(double w){width = w;}
void setLength(double l){length = l;}

double getWidth(){return width;}
double getLength(){return length;}
double getArea(){return width * length;}
};


int main() {
  Rectangle r;
  Rectangle rect(5.2,7.7);
  double lLocal = 0.0, wlocal = 0.0;
  
  cout << "The width of the rectangle is " << r.getWidth() << endl;
  cout << "The length of the rectangle is " << r.getLength() << endl;
  cout << "The area of the rectangle is " << r.getArea() << endl;

  cout << "Rectangle rect - width: " << rect.getWidth() << endl;
  cout << "Rectangle rect - length: " << rect.getLength() << endl;
  cout << "Rectangle rect - area: " << rect.getArea() << endl;

  do{

    cout << "Enter the width of the rectangle(-1 to exit): ";
    cin >> wlocal;
    if(wlocal != -1){
      cout << "Enter the length of the rectangle: ";
      cin >> lLocal;
      rect.setWidth(wlocal);
      rect.setLength(lLocal);

      cout << "Rectangle rect - width: " << rect.getWidth() << endl;
      cout << "Rectangle rect - length: " << rect.getLength() << endl;
      cout << "Rectangle rect - area: " << rect.getArea() << endl;
    } else {
      cout << "Thanks for using this program\n";
    }
  } while(wlocal != -1);
  

  return 0;
}