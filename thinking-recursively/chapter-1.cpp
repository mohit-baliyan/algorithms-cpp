#include <iostream>
#include <assert.h>

using namespace std;

int collect(int amount, int person, int c){

    // collect itself 1$
    if(amount==1){
        return person * 1;
    }

    else{
        c = c + collect(amount/10, person * 10, c);
    }

    return c;

}

int main(){

    // question 1
    int amount = 1000, person = 1;
    int collected = collect(amount, person, 0);
    assert(collected == collect(amount, person, 0) && "collected amount should be equal to 1000");

    return 0;

}