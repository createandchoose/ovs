#include <iostream>
#include <vector>

#define SIZE_A 10 
#define SIZE_B 10 

std::vector<int> A(SIZE_A, 0); 
std::vector<int> B(SIZE_B, 0); 
int x = 10; 
int y = 20; 
int i = 5;  
int j = 2;  

void process_arrays() {

    int* s6 = A.data(); 
    int* s7 = B.data(); 
    int t0, t1, t2, t3;

    
    t0 = i << 2;           
    int s0 = x;            
    t0 = reinterpret_cast<int>(s6) + t0; 
    t1 = j << 2;          
    t1 = reinterpret_cast<int>(s7) + t1; 

    
    int valueA = *(reinterpret_cast<int*>(t0));   
    t0 += 4;                  
    int valueB = *(reinterpret_cast<int*>(t1));   

    
    t0 = valueA + s0;        
    int* t2_ptr = reinterpret_cast<int*>(t0); 
    *t2_ptr = t0;            

    t0 = t0 - valueB;        
    t0 = t0 << 2;            
    t2_ptr = reinterpret_cast<int*>(reinterpret_cast<int>(s6) + t0); 

    int sraValue = s0 >> 1;  
    int sraValueJ = y >> 3;  
    t2 = sraValue + sraValueJ; 

    *t2_ptr = t2;            
}

int main() {
    
    for (int idx = 0; idx < SIZE_A; idx++) {
        A[idx] = idx + 1; 
    }
    for (int idx = 0; idx < SIZE_B; idx++) {
        B[idx] = (idx + 1) * 10; 
    }

    process_arrays();

    
    std::cout << "Массив A: ";
    for (const auto& elem : A) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    std::cout << "Массив B: ";
    for (const auto& elem : B) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    return 0;
}
