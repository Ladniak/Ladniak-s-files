#include <iostream>
#include <cstdio>
#include <ctime>
#include <Windows.h>
#include <typeinfo>
#include <stdio.h>

    using namespace std;
    int printArray()
    int f;
    {
        char chars[] = {'-', '\\', '|', '/'};
        unsigned int i;

        for (i = 0; ; ++i) {
                printf("%c\r", chars[i % sizeof(chars)]);
                fflush(stdout);
                Sleep(200);}

        return 0;}
        ;
        int main()
        {
        std::clock_t start;
        double duration;
        start = std::clock();
        for (int i = 0; ; ++i) {
        duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

        cout << duration;
        printf("%g\r", duration);
        fflush(stdout);
        Sleep(100);
        if(i == 1000) break;};
        duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
        std::cout<<"printf: "<< duration <<'\n';\
        char(f)};
