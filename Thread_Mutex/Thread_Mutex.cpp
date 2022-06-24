// Thread_Mutex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Thread_Mutex.h" 

int main()
{
    float y, z;
    HANDLE hMutex;
    cout << "ENter the Mutex number" << endl;
    cin >> hMutex;
        float a, b;
        cout << "Enter the number a & b" << endl;
        cin >> a >> b;
        //Creating Mutex
        hMutex = CreateMutex(NULL, TRUE, L"hNMutex");
        if (hMutex)
        {
            cout << "Creating Mutex:- " << hMutex << endl;
            z = calculator(a, b);
            cout << "Output:---  " << z << endl;
             y = calculator(a, b);
            cout << "Output:---  " << y << endl;

        }




        else if (hMutex != NULL)
        {
            cout << "Already having MUTEX:- " << hMutex << endl;

            // // Mutex Already exist
        //hMutex = OpenMutex(MUTEX_ALL_ACCESS, TRUE, L"hNMutex");
        //cout << "Open Created of Mutex. " << hMutex << endl;
        //float z = calculator(a, b);
        //cout << "Output:---  " << z << endl;
        }
    system("PAUSE");
    CloseHandle(hMutex);
    
    return 0;

}

