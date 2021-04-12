#include <string>
using namespace std;


class LedDiod {
public:
  void setColor(string c);
  void setBrightness(int br);

  void showColor();
  void showBrightness();

  double calcDiodCurrent(double v);

private:
  int br = 0;
  string color = "yellow";
};
