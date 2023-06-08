#include "utils/random.cc"
#include "utils/arrayTools.cc"

int main(){

    int numbers[50] = {0};
    for(int i = 0; i < 50; i++){
        numbers[i] = Random::random();
    }
        
    arrayTools::print(numbers, 50);

    for(int i = 1; i < 50; i++){
        int key = numbers[i];
        int j = i - 1;
        while(j > 0 && numbers[j] > key){
            numbers[j + 1] = numbers[j];
            j -= 1;
        }
        numbers[j + 1] = key;
    }

    arrayTools::print(numbers, 50);
}
