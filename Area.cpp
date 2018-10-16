#include <iostream>
#define PI 3.14
using namespace std;

long areaQuadrato(long r) {

  long a;

  return a = r * r;

}

long areaCerchio(long r) {

  long a;

  return a = PI * (r * r);

}

int main() {

  char c;
  long r;

  cout << "Digitare '/' per piu' informazioni" << endl;

  do{

    cout << "Inserire il tipo della figura: ";
    cin >> c;

    switch(c) {

      case '/':
        cout << "'Q' per il quadrato" << endl;
        cout << "'C' per il cerchio" << endl;
        r = -10;
        break;

      case 'Q':
        cout << "Inserire il lato del quadrato: " << endl;
        cin >> r;
        if(r < 0) cout << "Il numero deve essere positivo!" << endl;
        if(r >= 0) cout << "Area del quadrato: " << areaQuadrato(r) << endl;
        break;

      case 'C':
        cout << "Inserire il raggio del cerchio: " << endl;
        cin >> r;
        if(r < 0) cout << "Il numero deve essere positivo!" << endl;
        if(r >= 0) cout << "Area del cerchio: " << areaCerchio(r) << endl;
        break;

      default:
        cout << "Carattere inserito non corretto, riprovare!" << endl;
        r = -10;
        break;

    }

  } while(r < 0);

  return 0;
}
