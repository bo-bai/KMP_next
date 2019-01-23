//
//  main.cpp
//  KMP_Next
//
//  Created by Bo Bai on 14/11/8.
//  Copyright (c) 2014年 Bo Bai. All rights reserved.
//

#include <iostream>

using namespace std;



void next(char P[], int *N){
    int j = 0, k = -1;
    N[0] = -1;
    
    while (P[j+1] != '\0' ) {
        if (k == -1 || P[j] == P[k]) {
            ++j;
            ++k;
            N[j] = k;
        }
        else k = N[k];
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int N[20];
    char P[20] = "ababac";
    long m = strlen(P);
    
    next(P, N);
    
    cout << P << endl << "Next:";
    for (int i = 0; i < m; i++) {
        cout << ' ' << N[i];
    }
    cout << endl;
    return 0;
}