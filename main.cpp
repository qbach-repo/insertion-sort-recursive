//
//  main.cpp
//  InsertionSortRecursive
//
//  Created by Quan Bach  on 8/21/17.
//  Copyright © 2017 QB. All rights reserved.
//

#include <cstdio>
#include <vector>

using namespace std;


void insertionSortRecursive (vector <int> _unsorted, int size);
void printVector (vector <int> _sorted);

int main() {

    auto numVec = vector<int>();
    
    numVec.push_back(5);
    numVec.push_back(1);
    numVec.push_back(3);
    numVec.push_back(7);
    numVec.push_back(2);
    numVec.push_back(4);
    numVec.push_back(6);
    numVec.push_back(9);
    
    printf("unsorted array: ");
    printVector(numVec);
    
    insertionSortRecursive(numVec, numVec.size());
    
    printf("sorted array: ");
    printVector(numVec);
    
    return 0;

    
    return 0;
}

void insertionSortRecursive (vector <int> _unsorted, int size)
{
    //check the base case
    if (_unsorted.size() == 1)
        return;
    
    //recursive step
    insertionSortRecursive(_unsorted, size - 1 );
    
    int last = _unsorted[size - 1];
    int j = size - 2;
    
    
    while (j >= 0 && _unsorted[j] < last)
    {
        _unsorted [j+1] = _unsorted [j];
        j--;
    }
    _unsorted [j+1] = last;
}



void printVector (vector <int> _sorted)
{
    for(auto i = 0; i < _sorted.size(); ++i)
    {
        if(i == 0) {
            printf("[");
        }
        printf("%d", _sorted[i]);
        if(i == _sorted.size() -1) {
            printf("]\n");
        } else {
            printf(",");
        }
    }
}
