class DynamicArray {

private:
    int* arr;          
    int capacity;  
    int size;

public: 

    DynamicArray(int capacity) {
        this->capacity = capacity;
        this->arr = new int[capacity];
        this->size = 0;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(size == capacity)
        { 
            resize();
        }
        arr[size] = n;
        size++;
    }

    int popback() {  

        
        size--;
        int value = arr[size];
        return value;
    }

    void resize() {
         capacity = capacity * 2;
    
        int* new_arr = new int[capacity];
        
        for (int i = 0; i < size; i++) {
            new_arr[i] = arr[i];
        }   
        delete[] arr;
        arr = new_arr;;
       
    }

    int getSize() {
        return size;

    }

    int getCapacity() {
        return capacity;
    }

};