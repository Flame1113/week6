#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    void sort(int*);
    void getNums(int[]);
    void reverse(int[], int[]);
    void displayElements(int[]);

    int arr1[10];
    getNums(arr1);
    int *nums1 = arr1;
    sort(nums1);
    
    cout << "Student name:" << setw(18) << "Glen Dsouza" << endl;
    cout << "Student number:" << setw(14) << "900914917" << endl;
    cout << "Student name:" << setw(24) << "Jordon Marchesano" << endl;
    cout << "Student number:" << setw(14) << "900536880" << endl;
    cout << endl << endl;


    int *nums2 = new int[10];
    reverse(nums1, nums2);
    cout << "First Array (Low --> High)" << endl;
    cout << "------------------------------------------------------------" << endl;
    displayElements(nums1);
    cout << "Second Array (High --> Low)" << endl;
    cout << "------------------------------------------------------------" << endl;
    displayElements(nums2);
    delete[] nums2;
    cin.ignore();
    cin.get();
    return 0;
}

void getNums(int arr[]){
    for (int rep = 0; rep < 10; rep++){
        cout << "Enter number " << rep+1 << ": ";
        cin >> arr[rep];
    }
}

void sort(int *num){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 9; j++){
            int temp = *(num + j);
            if (*(num + j) > *(num + (j+1))){
                *(num + j) = *(num + (j+1));
                *(num + (j+1)) = temp;
            }
        }
    }
}

void reverse(int arr1[], int arr2[]){
    for (int rep = 0; rep < 10; rep++){
        *(arr2 + rep) = *(arr1 + 9 - rep);
    }
}

void displayElements(int arr[]){
    for (int rep = 0; rep < 10; rep++){
        cout << "Element " << rep+1 << ": " << *(arr + rep) << endl;
    }
}
