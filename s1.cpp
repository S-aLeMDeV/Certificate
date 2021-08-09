#include <iostream>
using namespace std;
int main(){
system("clear");
    char z;
    int o,p;
    cout << "\n  ====================================\n\n\n\n  [!] Choose From ( + , - , / , % , x ) : ";
    cin >> z;
    cout << "\n  ~ Enter First No. : ";
    cin >> o;
    cout << "\n  ~ Enter Sec. No. : ";
    cin >> p;
    int b=o+p, m=o-p,d=o/p,n=o%p,t=o*p;
    switch (z)
    {
    case '+':
        cout << "\n  [ " << o << " + " << p << " = "<<b<< "  ]\n\n  ====================================\n\n";
        break;
    case '-':
        cout << "\n  [ " << o << " - " << p << " = "<<m<< "  ]\n\n  ====================================\n\n";
        break;
    case '/':
        cout << "\n  [ " << o << " / " << p << " = "<<d<< "  ]\n\n  ====================================\n\n";
        break;
    case '%':
        cout << "\n  [ " << o << " % " << p << " = "<<n<< "  ]\n\n  ====================================\n\n";
        break;
    case 'x':
        cout << "\n  [ " << o << " x " << p << " = "<<t<< "  ]\n  ====================================\n";
        break;
    default:
        cout << "\n  [!!] Something Went Wrong !\n\n\n  ====================================\n";
        break;
    }
return 0;
//1
//2
//3
//4
}
