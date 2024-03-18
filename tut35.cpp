#include <iostream>
using namespace std;

// destrctor never takes an argument nor does it return any value...
int count = 5;
class num
{

public:
    num()
    {

        count++;
        cout << "This is time when constructor is called for object Number " << count << endl;
    }
    // Distructor occurs
    ~num()
    {

        cout << "This is time when my destructor is called for object number : " << count << endl;
        count--;
    }
};

int main()
{

    cout << "We are inside our main function : " << endl;
    cout << "Creating first object : " << endl;
    num n1;
    {
        cout << "Entering this block : " << endl;
        cout << "Creating two more objects : " << endl; // block y andr jo b hoga wo exit hony sy pehly e de
        num n2, n3;                                     // -stroy hp jye ga..
        cout << "Exiting this block : " << endl;
    } // back to main sy pehly hi destructor call ho jye ga kiu ky block exit ho jye ga..
    cout << "Bac to main" << endl;
    return 0;
}