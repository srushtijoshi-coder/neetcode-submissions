class DynamicArray {
public:
    int size;
    int cap;
    int *arr;

    DynamicArray(int capacity) {
        size = 0;
        cap = capacity;
        arr = new int[cap];
    }

    int get(int i) {

        return arr[i];

    }

    void set(int i, int n) {

        arr[i]=n;

    }

    void pushback(int n) {

        if(size == cap){
            resize();
        }

        arr[size++]=n;

    }

    int popback() {

        if(size==0) return -1;
        return arr[--size];

    }

    void resize() {
        cap *= 2;
        int* newArr = new int[cap];

        for(int i=0; i< size; i++){
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;

    }

    int getSize() {

        return size;

    }

    int getCapacity() {

        return cap;
    }
};
