#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleTitle("Trigonometry Calculator");
    
    string func;
    string notDef = "Not Defined!";
    int h, b, p, e, d, more;
    double hv, bv, pv, result;
    int dv, ev;
    int what;
    for ( ; ; ) {
    cout << "Please tell what all you know: \n" << "(1 for yes and 0 for no) \n"; // These changes are temp!!!!
    
    cout << "Hypotenuse: "; cin >> h;
    if (h == 1)
    {
        cout << "Value (in Meters): ";
        cin >> hv;
    }
    else if (h != 1 & h != 0)
    {
        cout << "Please enter a valid input! \n (1 for Yes and 0 for No)";
        break;
    }
    
    cout << "Side Opporsite to ϴ: "; cin >> p;
    if (p == 1)
    {
        cout << "Value (in Meters): ";
        cin >> pv;
    }
    else if (p != 1 & p != 0)
    {
        cout << "Please enter a valid input! \n (1 for Yes and 0 for No)";
        break;
    }
    cout << "Side adjecent to ϴ: "; cin >> b;
    if (b == 1)
    {
        cout << "Value (in Meters): ";
        cin >> bv;
    }
    else if (b != 1 & b != 0)
    {
        cout << "Please enter a valid input! \n (1 for Yes and 0 for No)";
        break;
    }
    cout << "Angle of depression: "; cin >> d;
    if (d == 1)
    {
        cout << "Value: ";
        cin >> dv;
        ev = 180 - dv;
    } else if (d != 1 & d != 0)
    {
        cout << "Please enter a valid input! \n (1 for Yes and 0 for No)";
        break;
    }
    cout << "Angle of elevation: "; cin >> e;
    if (e == 1)
    {

        cout << "Value: ";
        cin >> ev;
    }
    else if (e != 1 & e != 0)
    {
        cout << "Please enter a valid input! \n (1 for Yes and 0 for No)";
        break;
    }

    cout << "Please tell what do we have to find: \n 1 for Hypotenuse. \n 2 for side opposite to ϴ. \n 3 for side adjecent to ϴ. \n" << " > ";
    cin >> what;
    switch (what) {
        case 1:
            if (p == 1 & ev == 30){
                result = 2*pv;
            } else if (p ==1 & ev == 45) {
                result = sqrt(2) * pv;
            } else if (p == 1 & ev == 60) {
                result = 2*pv/sqrt(3);
            } else if (p == 1 & ev == 90) {
                result = pv;
            } else if (b == 1 & ev == 30) {
                result = 2*bv/sqrt(3);
            }else if (b == 1 & ev == 45) {
                result = sqrt(2) * bv;
            }
            else if (b == 1 & ev == 60)
            {
                result = 2*bv;
            }
            else if (b == 1 & ev == 90)
            {
                result = 0;
            }
        case 2:
            if(h == 1 & ev == 30) {
                result = hv/2;
            }
            else if (h == 1 & ev == 45)
            {
                result = hv/sqrt(2);
            }
            else if (h == 1 & ev == 60)
            {
                result = sqrt(3)*hv/2;
            }
            else if (h == 1 & ev == 90)
            {
                result = pv;
            } else if (b == 1 & ev == 30){
                result = bv/sqrt(3);
            }
            else if (b == 1 & ev == 45)
            {
                result = bv;
            }
            else if (b == 1 & ev == 60)
            {
                result = sqrt(3)*bv;
            }
            else if (b == 1 & ev == 90)
            {
                cout << notDef;
            }
        case 3:
            if (h == 1 & ev == 30) {
                result = sqrt(3)*hv/2;
            } else if(h == 1 & ev == 45){
                result = hv / sqrt(2);
            }
            else if (h == 1 & ev == 60)
            {
                result = hv/2;
            }
            else if (h == 1 & ev == 90)
            {
                result = 0;
            } else if(p == 1 & ev == 30) {
                result = sqrt(3)*pv;
            }
            else if (p == 1 & ev == 45)
            {
                result = pv;
            }
            else if (p == 1 & ev == 60)
            {
                result = pv/sqrt(3);
            }
            else if (p == 1 & ev == 90)
            {
                cout << notDef;
            }

            cout << "\n\n\n Answer: \a" << result << "\n\n\n";
        }
    
    // Calculation Start
 /* 
    p   b   p
    -   -   -
    h   h   b
 */

    /* if (p == 1 & h == 1)
     {

     } */


    //  switch (ev) {
    //     case 30{
    //         if (p==1 || h==0)
    //         {
                
    //         }
            
    //     }
    //  }

    // Calculation End


    cout << "More Questions? \n (1 for yes and 0 for no): \n"
            " > ";
    cin >> more;
    if (more == 0)
    {
            break;
    }
    else if (more != 1 & more != 0)
    {
            cout << "Please enter a valid input! \n (1 for Yes and 0 for No)";
            break;
    }
    }
//  if (d == "Y") {
//         cout << "Value: ";
//      } else 
//      {
//         cout << "Value: ";
//         cin >> ev;
//         break;
//      }





    system("PAUSE");
    return 0;
}