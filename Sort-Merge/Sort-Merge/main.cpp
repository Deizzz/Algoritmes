//
//  main.cpp
//  Sort-Merge
//
//  Created by Владимир Козлов on 18.04.16.
//  Copyright (c) 2016 Владимир Козлов. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int Arr[] = "2,6,1,4,3,9,10,5,7";
    int r, q,p,n1,n2;
    n1 = q-p+1;
    n2 = r-q;
    int Arr1[n1], Arr2[n2];
    int i,j;
    for(i = 0; i< n1; i++){
        Arr1[i] = Arr[p+i+1];
    }
    for(j = 0; j<n2;j++){
        Arr2[j] = Arr[q+j];
    }
    i=0;j=0;
    
    for(int k = p;k<r;k++){
        if(Arr2[i]<=Arr1[j]){
            Arr[k] = Arr2[i];
            i+=1;
        }
        else{
            Arr[k] = Arr1[j];
            j+=1;
        }
    }
    
    return 0;
}
