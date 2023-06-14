#include "utils/random.cc"
#include "utils/arrayTools.cc"

void merge(A,p,q,r){


}
int main(){
    
    int numbers[SMALL] = {0};
    for(int i = 0; i < SMALL; i++){
        numbers[i] = Random::random();
    }
    arrayTools::print(numbers, 50);
}
