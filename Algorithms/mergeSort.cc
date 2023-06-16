#include "utils/random.cc"
#include "utils/arrayTools.cc"
#include "headers/mergeSort.hh"



void merge(int array[], int left, int mid, int right){
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    int *L = new int[leftSize + 1];
    int *R = new int[rightSize + 1];

    for(int i = 0; i < leftSize; i++){
        L[i] = array[left + i];
    }

    for(int j = 0; j < rightSize; j++){
        R[j] = array[mid + 1 + j];
    }

    L[leftSize] = INT_MAX;
    R[rightSize] = INT_MAX;

    int i = 0;
    int j = 0;

    for(int k = left; k <= right; k++){
        if(L[i] <= R[j]){
            array[k] = L[i];
            i++;
        } else {
            array[k] = R[j];
            j++;
        }
    } 

    delete[] L;
    delete[] R;
}

void mergeSort(int array[], int left, int right){
    
    if(left < right){
        int mid = left + (right - left) / 2;
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);
        merge(array, left, mid, right);
    }
}

int main(){

    std::srand(std::time(nullptr));
    int numbers[SMALL] = {0};
    for(int i = 0; i < SMALL; i++){
        numbers[i] = Random::random();
    }
    arrayTools::print(numbers, SMALL);

    mergeSort(numbers, 0,  SMALL - 1);

    arrayTools::print(numbers, SMALL);
}
