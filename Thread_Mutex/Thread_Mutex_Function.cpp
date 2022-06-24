
#include "Thread_Mutex.h"


mutex mtx;
float calculator(float a, float b)
{
    mtx.lock();
    Sleep(2000);
    int num;
    float c{};
    cout << "Choonse any one. \n1. + \n2. - \n3. * \n4. / \n" << endl;
    cin >> num;
    switch (num)
    {
    case 1:
        c = a + b;

        break;

    case 2:
        c = a - b;
            break;
    case 3:
        c = a * b;

        break;

    case 4:
        c = a / b;
        
        break;
    case 5:
        cout << "Wrong Option" << endl;
        break;
    }
    mtx.unlock();
    return c;

}


