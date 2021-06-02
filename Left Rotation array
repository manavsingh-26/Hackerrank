vector<int> rotateLeft(int d, vector<int> arr) {
    
    vector<int> temp(d);
    for( int i =0;i<d;i++){
        temp[i] = arr[i]; // stores first d elements in seperate array
    }
    for(int i= 0;i<arr.size();i++){
        arr[i] = arr[i+d]; //shifts all elements by d
    }
    for(int i =arr.size()-d;i<arr.size();i++){
        arr[i]= temp[i-arr.size()+d]; // adds the missing elements
    }
    return arr;

}
