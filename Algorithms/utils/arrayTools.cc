#define SMALL 50

#define MEDIUM 500

#define LARGE 1000

#define MASSIVE 10000

namespace arrayTools {
    
    void print(int array[], int size ){
        
        for(int i = 0; i < size; i++){
            
            std::cout << array[i] << '\n';
        }

    }
    
}
