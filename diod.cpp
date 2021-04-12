#include "diod.h"
#include <iostream>
#include <cmath>

using namespace std;

void LedDiod::setColor(string c) {
  if(c ==  "green" || c == "blue"){
    color = c;
  } else {
    color = "red";
  }
}
void LedDiod::setBrightness(int b) {
  if(b < 0  ) b = 0;
  if(b > 100) b = 100;

  br = b;
}
void LedDiod::showColor() {
  cout << "led color is " << color << endl;
}
void LedDiod::showBrightness() {
  cout << "led brightness is " << br << endl;
}
double LedDiod::calcDiodCurrent(double v) {
  double is = 10 * pow(10, -6);
  double vt = 26 * pow(10, -3);

  double i = is * (exp(v / vt) - 1);

  return i;
}
