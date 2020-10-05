#include <iostream>

using namespace std;

int main()
{
  int red;
  int green;
  int blue;
  char repeat;

  do{
    cout << "Enter RED (0-255): ";
    cin >> red;
  }while( red < 0 || red > 255 );

  do{
    cout << "Enter GREEN (0-255): ";
    cin >> green;
  }while( green < 0 || green > 255 );
  
  do{
    cout << "Enter BLUE (0-255): ";
    cin >> blue;
  }while( blue < 0 || blue > 255 );


  return 0;
}
