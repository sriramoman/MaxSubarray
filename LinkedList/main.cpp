//
//  Created by Sriram Vellangallor Subramanian on 1/17/16.
//  Copyright © 2016 Sriram Vellangallor Subramanian. All rights reserved.
//
//  https://www.hackerrank.com/challenges/maxsubarray
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n;
    cin>>t;
    for (int i=0; i<t; i++) {
        cin>>n;
        int j;
        vector<int> arrNumbers;
        for (j=0; j<n; j++) {
            int elem;
            cin>>elem;
            arrNumbers.push_back(elem);
        }
        int maxsum=arrNumbers[0];
        int noncontsum=0;
        for (j=0; j<n; j++) {
            if(arrNumbers[j]>-1)
                noncontsum+=arrNumbers[j];
            int sum=arrNumbers[j];
            maxsum=sum>maxsum?sum:maxsum;
            for (int k=j+1; k<n; k++) {
                sum+=arrNumbers[k];
                maxsum=sum>maxsum?sum:maxsum;
            }
        }
        cout<<maxsum<<" "<<noncontsum<<endl;
    }
    return 0;
}